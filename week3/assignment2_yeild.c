#define _OPEN_THREADS                                                           
#include <pthread.h>                                                            
#include <stdio.h>   
#include <stdlib.h>                                                           
#include <unistd.h>                                                             
                                                                                
void *thread(void *arg) {                                                                                                                                                                      
                                                                                
  while (1) {                                                                   
    puts((char*) arg);                                                          
    pthread_yield(NULL);                                                        
  }                                                                             
}                                                                               
                                                                                
int main() {                                                                        
  pthread_t t1, t2, t3;                                                         
                                                                                
  if (pthread_create(&t1, NULL, thread, "thread 1") != 0) {                     
    perror("pthread_create() error");                                           
    exit(1);                                                                    
  }                                                                             
                                                                                
  if (pthread_create(&t2, NULL, thread, "thread 2") != 0) {                     
    perror("pthread_create() error");                                           
    exit(2);                                                                    
  }                                                                             
                                                                                
  if (pthread_create(&t3, NULL, thread, "thread 3") != 0) {                     
    perror("pthread_create() error");                                           
    exit(3);                                                                    
  }                                                                             
                                                                                
  sleep(1);                                                                     
                                                                                
  exit(0);                                 
}  