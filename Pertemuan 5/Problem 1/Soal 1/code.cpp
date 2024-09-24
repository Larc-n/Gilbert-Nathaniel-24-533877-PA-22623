#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector <string>output;

    for(int loop=1; loop<101; loop++)
    {
        string word="";
        if(loop%3==0){word+="Fizz";}
        if(loop%5==0){word+="Buzz";}
        if(loop%3!=0 && loop%5!=0){word+=to_string(loop);}
        output.push_back(word);
    }

    for(int print=0; print<100; print++)
    {cout<<output[print]<< " ";}
    cout<< endl;

}
