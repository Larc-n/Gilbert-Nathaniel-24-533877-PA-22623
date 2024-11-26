#include <iostream>
using namespace std;
// soal no 4 dan 5

void palindrome(string n);
int length(string n);
int main (){
    string input[]={"madam", "awesome", "submission", "malam"};

    for(int loop=0; loop<4; loop++){
        cout<<"Input "<<loop+1<< ": ";
        palindrome(input[loop]);
    }
}

int length(string n){
    int loop=0;
    for(;n[loop]!='\0'; loop++){}
    return loop;
}

void palindrome(string n){
    int size= length(n)-1;
    string reversed={};

    for(int loop=size; loop>=0; loop--){
        reversed+=n[loop];
    }

    if(n == reversed){
        cout<< n<< " and " <<reversed<< " are palindrome.\n";}
    else{
        cout<< n<< " and " <<reversed<< " are not palindrome.\n";}
}


