compilationParameters=-Wall
programName=class_2

all: $(programName)

$(programName): main.o Person.o
	g++ -o $(programName) main.o Person.o $(compilationParameters)

main.o: main.cpp
	g++ -c main.cpp $(compilationParameters)

Person.cpp: Person.hpp Person.cpp
	g++ -c Person.cpp $(compilationParameters)

clean: 
	rm -f *.o *.gch $(programName)