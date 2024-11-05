#include <iostream>
using namespace std;

int fibo(int n);
int main()
{
    int n; cout<<"Input: "; cin>>n;
    int output= fibo(n);
    cout<< output<< endl;
}

int fibo(int n)
{
    if(n>2)
    {return fibo(n-1)+fibo(n-2);}
    else
    {return 1;}
}
