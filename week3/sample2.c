#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void* func1(void * arg){
    for(int i=0;i<8;i++){
        sleep(1);
        printf("First Thread: %d \n",i);
    }
    return NULL;
}

void* func2(void * arg){
    for(int i=0;i<8;i++){
        sleep(1);
        printf("Second Thread: %d \n",i);
    }
    return NULL;
}

void* func3(void * arg){
    for(int i=0;i<8;i++){
        sleep(1);
        printf("Third Thread: %d \n",i);
    }
    return NULL;
}

int main(){
    pthread_t t1;
    pthread_t t2;
    pthread_t t3;

    pthread_create(&t1,NULL,func1,NULL);
    pthread_create(&t2,NULL,func2,NULL);
    pthread_create(&t3,NULL,func3,NULL);

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    pthread_join(t3,NULL);
}