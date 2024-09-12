#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int main ()
{
    float a; cout<< "Input a: "; cin>> a;
    float b; cout<< "Input b: "; cin>> b;
    float c; cout<< "Input c: "; cin>> c;
    float D= b*b - 4*a*c;

    if(D>0)
    {
        float x1= (-b +sqrt(D))/(2*a);
        float x2= (-b -sqrt(D))/(2*a);
        printf("x1: %f and x2: %f\n", x1, x2);
    }
    else if(D==0)
    {
        float x= -b/(2*a);
        printf("x: %f\n", x);
    }
    else
    {printf("x1 dan x2 bersifat imaginer\n");}
    return 0;
}
