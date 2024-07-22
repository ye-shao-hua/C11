CC=g++ 
STANDARD=-std=c++11
SOURCE=./main.cpp
TARGET=./bin/a.out
all:libtxt.a
	${CC} ${SOURCE} ${STANDARD} -o ${TARGET} -I./include -L./lib -ltxt 
	clear
	#${TARGET} ./../BEM_INPUT_1_386073.txt
libtxt.a:point.o cell.o cellvec.o readtxt.o
	ar rcs ./lib/libtxt.a ./tmp/point.o ./tmp/cell.o ./tmp/cellvec.o ./tmp/readtxt.o
	#ar rcs ./lib/libtxt.a -o ./tmp/point.o ./tmp/cell.o 

point.o:./src/point.cpp
	g++ -c ./src/point.cpp -o ./tmp/point.o ${STANDARD}
cell.o:./src/cell.cpp
	g++ -c ./src/cell.cpp -o ./tmp/cell.o	${STANDARD}
cellvec.o:./src/cellvec.cpp
	g++ -c ./src/cellvec.cpp -o ./tmp/cellvec.o	${STANDARD}
readtxt.o:./src/readtxt.cpp
	g++ -c ./src/readtxt.cpp -o ./tmp/readtxt.o	${STANDARD}
clear:
	rm -f ./bin/*
	rm -f ./lib/*
	rm -f ./tmp/*
	clear

