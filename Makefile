


execu : main.o compare.o
	gcc main.o compare.o -L/opt/local/lib -o execu

main.o: main.c compare.h
	gcc main.c -I/opt/local/include -c -o main.o

compare.o: compare.c compare.h
	gcc compare.c -I/opt/local/include -c -o compare.o

clean:
	rm -f *.o *all
