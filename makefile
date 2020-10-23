all: pointers.o
		gcc -o pointers pointers.o

pointers.o: pointers.c
		gcc -c pointers.c

clean:
		rm *.o

run:
		./pointers
