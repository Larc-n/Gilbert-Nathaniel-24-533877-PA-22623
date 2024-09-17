#include <iostream>
using namespace std;

int main()
{
    int input;
    do
    {cout<<"Input: "; cin>>input;}
    while(input<0);

    int hasil=0;
    for(int loop=0; loop<input+1; loop++)
    {hasil+=loop;}

    cout<<hasil<< endl;
}
