#LIBRARY 

all: main

main.o: App/main.cpp
	g++ -c App/main.cpp
main: App/main.o App/Classes/Widgets/*.cpp
	g++ App/main.o -lsfml-graphics -lsfml-window -lsfml-system App/Classes/Widgets/*.cpp -o main
clean: 
	rm App/main.o