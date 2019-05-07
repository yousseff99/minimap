

game:main.o map.o
	gcc main.o map.o -o game  -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -g 

main.o:main.c
	gcc main.c -c  -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -g


map.o:map.c
	gcc map.c -c -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -g
