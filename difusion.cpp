#include <iostream>
#include <cmath>

double valor_u(double x);

int main(){

  float D = 1.0;
  double x = 0;
  double delta_x = 0.01;
  double delta_t = 0.0001;
  int N_x = 2.0/delta_x + 1;
  int N_t = 0.5/delta_t;
  double *u = new double[ N_x ];
  double *u_past = new double [ N_x];
  
   for(int i = 0; i<N_x; i++){
     x = i*delta_x;
     u_past[i] = valor_u(x);
      }

   while(u[N_x/2] > 0.5){
       for(int i = 1; i<N_x - 1; i++){
	 u[i] = u_past[i] + D*((delta_t/(delta_x*delta_x))*u_past[i+1]-2*u_past[i]+u_past[i-1]); 
    }

   for(int i = 1; i <N_x - 1 ; i++){
     u_past[i] = u[i];
   }
   }
    x = 0;

    for(int i = 0; i<N_x; i++){
        std::cout << x << " " << u[i] << std::endl;
        x += delta_x;
    }

 return 0;

}

double valor_u(double x){
  double mu = 1;
  double sd = 0.1;
  
  if(x==0 || x==2){
    return 0;
  }
  else{
    return exp((-1.0*(x-mu)*(x-mu))/(2*sd*sd));
  }
}
