#include <iostream>
#include <stdio.h>
using namespace std;

int fibo(int n);
int main()
{
    int data[]={10, 15, 20};
    for(int loop=0; loop<3; loop++)
    {
        int n=data[loop];
        int output= fibo(n);
        printf("Input: %i\nOutput:%i\n\n", data[loop], fibo(n));
    }
}

int fibo(int n)
{
    if(n>2)
    {return fibo(n-1)+fibo(n-2);}
    else
    {return 1;}
}
