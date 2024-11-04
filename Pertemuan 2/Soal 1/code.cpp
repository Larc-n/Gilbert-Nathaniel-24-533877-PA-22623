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

        if(D>0)
        {
            float x1= (-b+ sqrt(D))/2*a;
            float x2= (-b- sqrt(D))/2*a;
            printf("For a=%.2f, b=%.2f, c=%.2f\nx1= %f\nx2= %f\n\n", a, b, c, x1, x2);
        }
        else if(D==0)
        {
            float x= -b/(2*a);
            printf("For a=%.2f, b=%.2f, c=%.2f\nx: %f\n\n", a, b, c, x);
        }
        else
        {
            printf("For a=%.2f, b=%.2f, c=%.2f\nThere are no real roots\n\n", a, b, c);
        }

    }
}
