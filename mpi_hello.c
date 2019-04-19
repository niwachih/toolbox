#include "mpi.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
	int rank, size;
	MPI_Init(&argc,&argv);
	MPI_Comm_rank(MPI_COMM_WORLD,&rank);
	MPI_Comm_size(MPI_COMM_WORLD,&size);
	printf("Hello World!!! from %d of %d\n",rank,size);
	MPI_Finalize();
	return 0;
}
//build log:
//pp10767228@ec037-106:~$ vim mpi_hello.c
//pp10767228@ec037-106:~$ mpicc -o mpi_hello mpi_hello.c

//test log:
//pp10767228@ec037-106:~$ mpiexec -n 4 ./mpi_hello
//Hello World!!! from 0 of 4
//Hello World!!! from 2 of 4
//Hello World!!! from 1 of 4
//Hello World!!! from 3 of 4
//pp10767228@ec037-106:~$
