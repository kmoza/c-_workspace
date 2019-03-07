#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void *print_message_function(void *ptr);

int main()
{
	pthread_t thread1,thread2;
	const char *msg1 = "Thread1";
	const char *msg2 = "Thread2";
	int iret1,iret2;
	
	//create independent threads
	iret1 = pthread_create(&thread1,NULL,print_message_function, (void *)msg1);
	iret2 = pthread_create(&thread2,NULL,print_message_function, (void *)msg2);

	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	
	printf("Thread 1 returns : %d and ID is %lu\n",iret1,thread1);
	printf("Thread 2 returns : %d and ID is %lu\n",iret2,thread2);
	

	exit(EXIT_SUCCESS);
}

void * print_message_function(void *ptr)
{
	char *message;
	message = (char *)ptr;
	printf("%s \n",message);
}
