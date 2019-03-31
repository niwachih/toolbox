#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

//GLOBAL VARIABLE
int thread_count;
void* Hello(void* rank);

int main(int argc,char* argv[])
{
	long long thread;
	pthread_t* thread_handles;
	
	thread_count=strtoll(argv[1],NULL,10);
	thread_handles=malloc(thread_count*sizeof(pthread_t));
	
	for(thread=0;thread<thread_count;thread++)
		pthread_create(&thread_handles[thread],NULL,Hello,(void*) thread);
	
	printf("Hello from the main thread\n");
	
	for(thread=0;thread<thread_count;thread++)
		pthread_join(thread_handles[thread],NULL);
	
	free(thread_handles);
	return 0;
}

void* Hello(void* rank)
{
	long long myrank = (long long) rank;
	
	printf("Hello from thread %lld of %d\n",myrank,thread_count);
	
	return NULL;
}

//H:\myperl>gcc -o testthread "..\ubuntushare\apue-testprogram\hellothread.c"

//H:\myperl>testthread.exe 5
//Hello from thread 0 of 5
//Hello from thread 1 of 5
//Hello from thread 2 of 5
//Hello from thread 3 of 5
//Hello from thread 4 of 5
//Hello from the main thread

//H:\myperl>