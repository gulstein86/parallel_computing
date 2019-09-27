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

void func2(){
    for(int i=0;i<3;i++){
        sleep(1);
        printf("Second Thread: %d \n",i);
    }
}

int main(){
    pthread_t t1;
    pthread_t t2;

    pthread_create(&t1,NULL,func1,NULL);
    func2();
}