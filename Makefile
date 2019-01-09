INC=-I/home/ajay/include
LINKS=-lglfw -lGL -lX11 -lpthread -lXrandr -lXi -ldl

all: main.c
	gcc -o main $(INC) $(LINKS) main.c ~/include/glad/glad.c