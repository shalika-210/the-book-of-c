#include <stdio.h>
int fun(int *);
int main (int argc, char* argv[] ){
    /* Write a function that takes an int pointer as argument and updates the value at that location to next highest perfect square.
    * If input number was perfect square then it should remain unchanged
    * Program input - an int on a single line, no trailing spaces
    * function is called with address of this input int 
    * Value of same variable is printed after function call
    * Example, input:
    * 5
    * output:
    * "9" without quotes - no trailing space or newline 
    * assume all inputs will be positive numbers */
    int number=0,square=0;
    scanf("%d",&number);
    square = fun(&number);
    printf("%d",square);
    return 0;
}

int fun(int *ptr)
{
    int n=*ptr,i=1;

    while(i*i < n) {
        i++;
    }
    
    if(i * i == n)
        return n;
    else
    {
        return i*i;
    }
    
    
}
