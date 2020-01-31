#

all: main clean

main.o: App/main.cpp
	g++ -c App/main.cpp
main: App/main.o App/Modules/Widgets/*.cpp App/Modules/*.cpp App/Modules/Expansion/*.cpp
	g++ App/main.o -lsfml-graphics -lsfml-window -lsfml-system -lsqlite3 App/Modules/Widgets/*.cpp App/Modules/*.cpp App/Modules/Expansion/*.cpp -o main
clean: 
	rm App/main.o