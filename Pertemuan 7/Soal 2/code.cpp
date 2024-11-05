#include <iostream>
#include <stdio.h>
using namespace std;

void fill(int data[], int a); //fungsi untuk mengisi array dengan angka 0 (menghindari trash value)
int convert(char input); //fungsi untuk mengkonversi char menjadi integer
void to_int (string input, int data[]); //fungsi untuk mengkonversi string dari user menjadi integer
float recursive(int data[], int n);

int main()
{
    string test[]= {"5 6 7", "565 566 567", "234 5543 345"};
    for(int test_run=0; test_run<3; test_run++)
    {
        string n=test[test_run];

        int spasi=1;
        for(int loop=0; n[loop]!='\0'; loop++)
        { if(n[loop]==' '){spasi++;} }

        int data[spasi]; //untuk menyimpan integer yang didapatkan dari string input user
        fill(data, spasi); //untuk memberi nilai 0 ke semua array data

        to_int(n, data);
        printf("Input: %s\nOutput: %.2f\n\n", test[test_run].c_str(), recursive(data,spasi)/spasi);
    }
}


void fill(int data[], int a)
{
    for(int loop=0; loop<a; loop++)
    {data[loop]=0;} //mengisi array daripada data dengan 0 (menghindari trash value)
}

int convert(char input)
{
    int data[]={0,1,2,3,4,5,6,7,8,9};
    int store= data[input-48]; //mengkonversi bentuk char menjadi integer
    return store;
}

void to_int(string input, int data[])
{
    for(int loop=0, inside=0; input[loop]!='\0'; loop++)
    {
        if(input[loop]>47 && input[loop]<58) //jika bertemu dengan char angka
        { data[inside] = data[inside]*10 + convert(input[loop]); } //mengkonversi char menjadi int dan menambahkan pada data array
        else{inside++;} //jika terdapat char bukan angka, maka array data naik ke array selanjutnya
    }
}

float recursive(int data[], int n)
{
    if (n == 1)
    {return data[0];}
    else
    {return data[n - 1] + recursive(data, n - 1);}
}
