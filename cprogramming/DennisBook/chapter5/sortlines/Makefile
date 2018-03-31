objs = alloc.o main.o readlines.o swap.o getline1.o numcmp.o sort.o writelines.o

all : $(objs)
	gcc -g -o sortline  $(objs)
alloc.o : alloc.c
	gcc -g -c alloc.c
readlines.o : readlines.c
	gcc -g -c readlines.c
main.o : main.c
	gcc -g -c main.c
swap.o : swap.c
	gcc -g -c swap.c
getline1.o : getline1.c
	gcc -g -c getline1.c
numcmp.o : numcmp.c
	gcc -g -c numcmp.c
sort.o : sort.c
	gcc -g -c sort.c
writelines.o : writelines.c
	gcc -g -c writelines.c

.PHONY = clean
clean :
	rm *.o
