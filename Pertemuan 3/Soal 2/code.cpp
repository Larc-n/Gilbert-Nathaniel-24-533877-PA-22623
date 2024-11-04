#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int data[]={0,3,4, 6,21,9, 10,90,64};
    for(int a=0; a<7; a+=3)
    {
        int n[3];
        n[0]= data[a];
        n[1]= data[a+1];
        n[2]= data[a+2];

        int biggest=n[0];
        for(int loop=1; loop<3; loop++)
        {
            if(biggest<n[loop])
            {biggest=n[loop];}
        }
        printf("For %i, %i, and %i. Biggest = %i\n", data[a], data[a+1], data[a+2], biggest);
    }
}
