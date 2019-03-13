all: hw2

hw2: AbBinaryNode.o AbBST.o PbBinaryNode.o PbBST.o analysis.o main.o
	g++ AbBinaryNode.o AbBST.o PbBinaryNode.o PbBST.o analysis.o main.o -o hw2

AbBinaryNode.o: AbBinaryNode.cpp AbBinaryNode.h
	g++ -c AbBinaryNode.cpp

AbBST.o: AbBST.cpp AbBST.h
	g++ -c AbBST.cpp

PbBinaryNode.o: PbBinaryNode.cpp PbBinaryNode.h
	g++ -c PbBinaryNode.cpp

PbBST.o: PbBST.cpp PbBST.h
	g++ -c PbBST.cpp

analysis.o: analysis.cpp analysis.h
	g++ -c analysis.cpp

main.o: main.cpp
	g++ -c main.cpp
