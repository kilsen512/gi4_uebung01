CC = gcc

.PHONY: all default clean

default: myecho myexec isset myenv

all: myecho

myecho: myecho.c

myenv: myenv.c

clean:
	rm -f myecho
