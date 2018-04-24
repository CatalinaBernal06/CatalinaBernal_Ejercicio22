#include <iostream>
#include <cmath>

double valor_u0(float x);

int main(){
    
    float x = 0;
    float delta_x = 0.001;
    int N_x = 2.0/delta_x + 1;
  

    for(int i=0; i<N_x; i++){
        
        std::cout  << x << " " << valor_u0(x) << std::endl;
        x += delta_x;
    }
}

double valor_u0(float x){
  double mu = 1;
  double sd = 0.1;
  
  if(x==0 || x==2){
    return 0;
  }
  else{
    return exp((-1.0*(x-mu)*(x-mu))/(2*sd*sd));
  }
}

