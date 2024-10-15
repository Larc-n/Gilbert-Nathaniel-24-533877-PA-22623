#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int main ()
{
    int data[3][3]=
    {
        { 1,13, 2},
        { 1, 2, 1},
        {10, 1, 4}
    };

    for(int loop=0; loop<3; loop++)
    {
        float a=data[loop][0];
        float b=data[loop][1];
        float c=data[loop][2];
        float D= b*b - 4*a*c;

        printf("Test %i\n", loop+1);
        printf("a=%f b=%f c=%f\n", a,b,c);

        if(D>0)
        {
            float x1= (-b +sqrt(D))/(2*a);
            float x2= (-b -sqrt(D))/(2*a);
            printf("x1: %f and x2: %f\n\n", x1, x2);
        }
        else if(D==0)
        {
            float x= -b/(2*a);
            printf("x: %f\n\n", x);
        }
        else
        {printf("x1 dan x2 bersifat imaginer\n\n");}
    }

}
