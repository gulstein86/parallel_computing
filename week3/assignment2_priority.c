//set priority
// #include <unistd.h>

// int main()
// {
//     nice(4); // To set level 4 as nice value to current process
//     return 0;
// }

// #include <sys/resource.h>

// main(){
//     int prior;

//     prior=getpriority(PRIO_PROCESS,getpid());
//     printf("%d\n",prior)
// }
// #include<stdio.h> 
// #include<string.h> 
// #include<pthread.h> 
// #include<stdlib.h> 
// #include<unistd.h> 

// int GetPriority(void)
// {
// pcnice_t niceSet;
// int rc;

// niceSet.pc_op = PC_GETNICE;
// if(-1 == priocntl(P_PID, getpid(), PC_DONICE, &niceSet))
// rc = -1;
// else
// rc = niceSet.pc_val;

// return rc;
// }

// int main()
// {
// int newPriority, currentPriority;

// newPriority = 27;

// currentPriority = GetPriority();
// printf("default priority = %d\n", currentPriority);

// nice(newPriority);

// currentPriority = GetPriority();
// printf("new priority = %d\n", currentPriority);

// return 0;
// }

#include<unistd.h>
#include<stdio.h> 

int main(){
    int test;
    test=getpid();
    printf("%d",test);

}

