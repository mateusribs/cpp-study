compilationParameters=-Wall
programName=class_2

all: $(programName)

$(programName): main.o Person.o Rectangle.o
	g++ -o $(programName) main.o Person.o Rectangle.o $(compilationParameters)

main.o: main.cpp
	g++ -c main.cpp $(compilationParameters)

Person.cpp: Person.hpp Person.cpp
	g++ -c Person.cpp $(compilationParameters)

Rectangle.cpp: Rectangle.hpp Rectangle.cpp
	g++ -c Rectangle.cpp $(compilationParameters)

clean: 
	rm -f *.o *.gch $(programName)