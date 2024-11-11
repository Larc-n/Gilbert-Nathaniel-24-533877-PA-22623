#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct{
    long int NISN;
    string nama;
    int nilai;
}array;

void fill(array data[]);

void insertion();
void selection();
void bubble();
int main()
{
    cout<<"Sorting berdasarkan NISN"<<endl;
    insertion(); cout<<endl;
    selection(); cout<<endl;
    bubble(); cout<<endl;
}

void insertion()
{
    array data[7];
    fill(data);

    for(int compare=1; compare<7; compare++)
    {
        array temp;
        for(int with=0; with<6; with++)
        {
            if(data[compare].NISN < data[with].NISN)
            {
                temp= data[with];
                data[with]= data[compare];
                data[compare]= temp;
            }
        }
    }

    cout<<"--Insertion Sort--"<<endl;
    for(int loop=0; loop<7; loop++)
    { printf("NISN: %li, Nama: %s, Nilai: %i\n", data[loop].NISN, data[loop].nama.c_str(), data[loop].nilai); }
}


void selection()
{
    array data[7];
    fill(data);

    array temp;
    for(int compare=0; compare<6; compare++)
    {
        int smallest=compare;
        for(int with=compare+1; with<7; with++)
        {
            if(data[smallest].NISN > data[with].NISN)
            {smallest= with;}
        }
        temp=data[compare];
        data[compare]=data[smallest];
        data[smallest]=temp;
    }

    cout<<"--Selection Sort--"<<endl;
    for(int loop=0; loop<7; loop++)
    { printf("NISN: %li, Nama: %s, Nilai: %i\n", data[loop].NISN, data[loop].nama.c_str(), data[loop].nilai); }
}


void bubble()
{
    array data[7];
    fill(data);

    bool change;

    do{
        change=false;
        array temp;
        for(int compare=0; compare<6; compare++)
        {
            if(data[compare].NISN > data[compare+1].NISN)
            {
                temp= data[compare];
                data[compare]= data[compare+1];
                data[compare+1]= temp;
                change=true;
            }
        }
    }while(change);

    cout<<"--Bubble Sort--"<<endl;
    for(int loop=0; loop<7; loop++)
    { printf("NISN: %li, Nama: %s, Nilai: %i\n", data[loop].NISN, data[loop].nama.c_str(), data[loop].nilai); }
}

void fill(array data[])
{
    data[0].NISN=9960312699;    data[0].nilai=90;     data[0].nama="Handi Ramadhan";
    data[1].NISN=9963959682;    data[1].nilai=55;     data[1].nama="Rio Alfandra";
    data[2].NISN=9950310962;    data[2].nilai=80;     data[2].nama="Ronaldo Valentino Uneputty";
    data[3].NISN=9970272750;    data[3].nilai=60;     data[3].nama="Achmad Yaumil Fadjri R.";
    data[4].NISN=9970293945;    data[4].nilai=70;     data[4].nama="Alivia Rahma Pramesti";
    data[5].NISN=9952382180;    data[5].nilai=65;     data[5].nama="Ari Lutfianto";
    data[6].NISN=9965653989;    data[6].nilai=60;     data[6].nama="Arief Budiman";
}
