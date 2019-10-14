//sleep example
#include<stdio.h>
#include<unistd.h> 

int main() { 
    printf("Before sleep\n"); 
    sleep(2);
    printf("After sleep for 2 second"); 
    exit(0); 
}