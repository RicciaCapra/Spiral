main: main.o spiral.o
	g++ -o fractal main.o spiral.o

main.o: main.cpp spiral.h
	g++ -c main.cpp

spiral.o: spiral.h spiral.cpp
	g++ -c spiral.cpp