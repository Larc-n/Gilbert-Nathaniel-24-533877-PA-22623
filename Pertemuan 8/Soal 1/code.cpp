#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct{
    long int NISN;
    string nama;
    int nilai;
}array;

const array asli[7] = {
    {9960312699, "Handi Ramadhan", 90},
    {9963959682, "Rio Alfandra", 55},
    {9950310962, "Ronaldo Valentino Uneputty", 80},
    {9970272750, "Achmad Yaumil Fadjri R.", 60},
    {9970293945, "Alivia Rahma Pramesti", 70},
    {9952382180, "Ari Lutfianto", 65},
    {9965653989, "Arief Budiman", 60}
};

void insertion(bool isNISN);
void selection(bool isNISN);
void bubble(bool isNISN);

int main()
{
    cout<<"Sorting berdasarkan NISN"<<endl;
    insertion(true); cout<<endl;
    selection(true); cout<<endl;
    bubble(true); cout<<endl<<endl;

    cout<<"Sorting berdasarkan nilai"<<endl;
    insertion(false); cout<<endl;
    selection(false); cout<<endl;
    bubble(false); cout<<endl;

}

void insertion(bool isNISN)
{
    array data[7];
    copy(begin(asli), end(asli), begin(data));

    for(int compare=1; compare<7; compare++)
    {
        array temp= data[compare];
        int with= compare-1;

        while(with>=0 && (isNISN? data[with].NISN : data[with].nilai) > (isNISN? temp.NISN : temp.nilai))
        {
            data[with+1]= data[with];
            with--;
        }
        data[with+1]= temp;
    }

    cout<<"--Insertion Sort--"<<endl;
    for(int loop=0; loop<7; loop++)
    { printf("NISN: %li, Nama: %s, Nilai: %i\n", data[loop].NISN, data[loop].nama.c_str(), data[loop].nilai); }
}


void selection(bool isNISN)
{
    array data[7];
    copy(begin(asli), end(asli), begin(data));

    array temp;
    for(int compare=0; compare<6; compare++)
    {
        int smallest=compare;
        for(int with=compare+1; with<7; with++)
        {
            if( (isNISN? data[smallest].NISN : data[smallest].nilai) > (isNISN? data[with].NISN : data[with].nilai) )
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


void bubble(bool isNISN)
{
    array data[7];
    copy(begin(asli), end(asli), begin(data));

    bool change;

    do{
        change=false;
        array temp;
        for(int compare=0; compare<6; compare++)
        {
            if( (isNISN? data[compare].NISN : data[compare].nilai) > (isNISN? data[compare+1].NISN : data[compare+1].nilai) )
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
