#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

int main(){
    int pidnum;
    pidnum=getpid();
    printf("%d\n",pidnum);
    printf("start to kill\n");
    sleep(2);
    kill(pidnum,SIGKILL);

}