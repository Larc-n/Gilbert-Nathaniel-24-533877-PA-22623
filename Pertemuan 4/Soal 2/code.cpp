#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int test[6];
    test[0]=6;
    test[1]=-1;
    test[2]=0;
    test[3]=45;
    test[4]=-7;
    test[5]=2;

    string expected[6];
    expected[0]="6 12 18 24 30 36 42 48 54 60";
    expected[1]="-1 -2 -3 -4 -5 -6 -7 -8 -9 -10";
    expected[2]="0 0 0 0 0 0 0 0 0 0";
    expected[3]="45 90 135 180 225 270 315 360 405 450";
    expected[4]="-7 -14 -21 -28 -35 -42 -49 -56 -63 -70";
    expected[5]="2 4 6 8 10 12 14 16 18 20";


    for(int loop=0; loop<6; loop++)
    {
        cout<<endl;
        int input=test[loop];
        cout<<"Test "<< loop+1<<"\nExpected: "<< expected[loop]<< endl;
        for(int loop=1; loop<11; loop++)
        {printf("%i x %i = %i\n", input, loop, input*loop);}
    }
}


