difusion.pdf : datos.txt datos_i.txt grafica.py
	python grafica.py

datos.txt datos_i.txt : cond_inicial.cpp difusion.cpp
	c++ cond_inicial.cpp -o i
	./i > datos_i.txt

	c++ difusion.cpp -o dif
	./dif > datos.txt
