CC = gcc

.PHONY: all default clean

default: myecho myexec isset myenv

all: myecho myexec isset myenv

myecho: myecho.c

myenv: myenv.c

clean:
	rm -f myecho myexec isset myenv
