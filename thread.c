#include <stdio.h>
#include <pthread.h>

void* SayHello(void *foo) {
	printf( "CHIH: Hello, world!\n" );
	return NULL;
}
int main() {
	pthread_t threads[16];
	int tn;
	for(tn=0; tn<16; tn++) {
		pthread_create(&threads[tn], NULL, SayHello, NULL);
	}
	for(tn=0; tn<16 ; tn++) {
		pthread_join(threads[tn], NULL);
	}
	return 0;
}

//D:\perlbox>gcc -o test-thread D:\CHIAOWEI\coding\thread.c

//D:\perlbox>test-thread.exe
//CHIH: Hello, world!
//CHIH: Hello, world!
//CHIH: Hello, world!
//CHIH: Hello, world!
//CHIH: Hello, world!
//CHIH: Hello, world!
//CHIH: Hello, world!
//CHIH: Hello, world!
//CHIH: Hello, world!
//CHIH: Hello, world!
//CHIH: Hello, world!
//CHIH: Hello, world!
//CHIH: Hello, world!
//CHIH: Hello, world!
//CHIH: Hello, world!
//CHIH: Hello, world!