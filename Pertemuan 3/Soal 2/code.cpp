#include <iostream>
using namespace std;

int main()
{
    int n[3];
    cout<<"Input a: "; cin>> n[0];
    cout<<"Input b: "; cin>> n[1];
    cout<<"Input c: "; cin>> n[2];

    int biggest=n[0];
    for(int loop=1; loop<3; loop++)
    {
        if(biggest<n[loop])
        {biggest=n[loop];}
    }
    cout<< biggest<< endl;
    return 0;
}
