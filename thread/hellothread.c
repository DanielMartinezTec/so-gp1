#include <stdio.h>
	#define NUM_THREAD 10
	#include <pthread.h>
	
	long saldo = 1000;
	pthread_mutex_t lock;
	void * printHello(void *td){
		long lsaldo;
		printf("HELO WORLD %ld\n",(long)td);
		pthread_mutex_lock(&lock);
		lsaldo = saldo;
		printf("El saldo actual es %ld \n",lsaldo);
		saldo = lsaldo + 100;
		pthread_mutex_lock(&lock);
	}
	
	int main(){
		pthread_t threads[NUM_THREAD];
		long t;   
		for(t= 0;t<NUM_THREAD;t++){
			pthread_create(&threads[t],NULL,printHello,(void *)t);
			//printHello(NULL);	
		}
	
		for(t= 0;t<NUM_THREAD;t++){
			pthread_join(threads[t],NULL);
			//printHello(NULL);	
		}
	
		printf("Saldo final %ld\n", saldo);
		pthread_exit(NULL);
	
	}   