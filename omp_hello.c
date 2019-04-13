#include <stdio.h>
#include <omp.h>
int thread_count = 6;
void main()
{
  omp_set_num_threads(thread_count);
  #pragma omp parallel
  {
        int ID = omp_get_thread_num();
        printf("Hello from thread %d of %d\n",ID, thread_count);
  }
}
//pp10767228@ec037-106:~$ gcc -o omp_hello -fopenmp omp_hello.c
//pp10767228@ec037-106:~$ ./omp_hello
//Hello from thread 4 of 6
//Hello from thread 3 of 6
//Hello from thread 0 of 6
//Hello from thread 5 of 6
//Hello from thread 2 of 6
//Hello from thread 1 of 6
//pp10767228@ec037-106:~$