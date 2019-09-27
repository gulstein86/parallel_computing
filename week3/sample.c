#include <stdio.h>

int main(){
    int a=10;
    int *aptr=&a;

    printf("The value of A is: %d \n",a);
    printf("The address of A is: %p",&a);

    printf("\nThe value of aptr is: %p",aptr);
    printf("\nThe address of aptr is: %p",&aptr);
    printf("\naptr is pointing to the value of: %d\n",*aptr);

    return 0;
}