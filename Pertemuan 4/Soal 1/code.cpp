#include <iostream>
using namespace std;


int main()
{
    int test[6];
    test[0]=5;
    test[1]=0;
    test[2]=123;
    test[3]=7;
    test[4]=68;
    test[5]=1;

    int expected[6];
    expected[0]=15;
    expected[1]=0;
    expected[2]=7626;
    expected[3]=28;
    expected[4]=2346;
    expected[5]=1;


    for(int loop=0; loop<6; loop++)
    {
        int input=test[loop];
        int hasil=0;
        for(int loop=0; loop<input+1; loop++)
        {hasil+=loop;}

        if(hasil==expected[loop]){cout<<"Test "<<loop+1<< " sesuai, ";}
        cout<<hasil<< endl;
    }



}
