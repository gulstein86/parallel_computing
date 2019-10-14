#include <stdio.h>
#include <sys/resource.h>
#include <unistd.h> 

int main(){
    int prior;

    prior=getpriority(PRIO_PROCESS,getpid()); //get the priority
    printf("default priority =%d\n",prior);

    nice(10); //set the priority to +10
    printf("current priority =%d\n",getpriority(PRIO_PROCESS,getpid()));

}

