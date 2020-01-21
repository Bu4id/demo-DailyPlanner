#

all: main

main.o: App/main.cpp
	g++ -c App/main.cpp
main: App/main.o App/Modules/Widgets/*.cpp App/Modules/*.cpp
	g++ App/main.o -lsfml-graphics -lsfml-window -lsfml-system App/Modules/Widgets/*.cpp App/Modules/*.cpp -o main
clean: 
	rm App/main.o