#include <stdio.h>
#include <pthread.h>
#define NUM_PHILOSOPHER 5
#define NUM_FORKS 5

semaphore_t forks[NUM_FORKS];


void * life(void*td){
	long id =(long) td;
	while(1){
		//pensar
		if(id % 2 == 0){
			sem_wait(&forks[id]);
			sem_wait(&forks[(id + 1)%NUM_PHILOSOPHER]);
		}else{
			sem_wait(&forks[(id + 1)%NUM_PHILOSOPHER]);
			sem_wait(&forks[id]);
		}
		//comer 
	}
}


int main(){
	pthread_t threads[NUM_THREAD];
	long t;
	
	for(t=0; t < NUM_THREAD; t++){
		pthread_create(&threads[t],NULL,printHello,(void *)t);
	}
	
	for(t=0; t < NUM_THREAD; t++){
		pthread_join(threads[t],NULL);
	}
	
	printf("saldo final %ld \n",saldo);
	pthread_exit(NULL);
	
}