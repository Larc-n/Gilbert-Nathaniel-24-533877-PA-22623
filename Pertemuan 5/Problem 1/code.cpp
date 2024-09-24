#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <string> data;
    for(int loop=1; loop<101; loop++)
    {
        string store="";
        if(loop%3==0){store+="Fizz";}
        if(loop%5==0){store+="Buzz";}
        if(loop%3!=0 && loop%5!=0){store+=to_string(loop);}
        data.push_back(store);
    }

    for(int output=0; output<100; output++)
    {cout<< data[output] << " ";}
    cout<< endl;
}
