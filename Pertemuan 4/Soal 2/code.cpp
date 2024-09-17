#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int input;cout<<"Input: "; cin>>input;

    for(int loop=1; loop<11; loop++)
    {
        printf("%i x %i = %i\n", input, loop, input*loop);
    }
}
