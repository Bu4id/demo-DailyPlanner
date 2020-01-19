all: main

main.o: App/main.cpp
	g++ -c App/main.cpp
main: App/main.o 
	g++ App/main.o -o Hello
clean: 
	rm App/main.o