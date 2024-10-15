#include <iostream>
using namespace std;

typedef struct
{
    string name;
    int price;
    int kode;
    int quantity;
}array;

int main()
{
    array stuff[4];
  
    stuff[0].name = "Food Processor";
    stuff[0].price = 550;
    stuff[0].kode = 301;
    stuff[0].quantity = 15;

    stuff[1].name = "Blender";
    stuff[1].price = 350;
    stuff[1].kode = 302;
    stuff[1].quantity = 25;

    stuff[2].name = "Microwave";
    stuff[2].price = 900;
    stuff[2].kode = 303;
    stuff[2].quantity = 10;

    stuff[3].name = "Coffee Maker";
    stuff[3].price = 450;
    stuff[3].kode = 304;
    stuff[3].quantity = 20;

    
    int total=0; float mean=0;

    for(int loop=0; loop<4; loop++)
    {
        cout<<endl;
        cout<<"Name: "; cin.ignore(); getline(cin, stuff[loop].name);
        do{cout<<"Price: "; cin>> stuff[loop].price;}while(stuff[loop].price<0);
        cout<<"Kode: "; cin>> stuff[loop].kode;
        do{cout<<"Total: "; cin>> stuff[loop].quantity;}while(stuff[loop].quantity<0);

        total+=stuff[loop].quantity;
        mean+= (float)stuff[loop].price * (float)stuff[loop].quantity;
    }

    cout<<"\nJumlah semua barang: "<<total<< "\nHarga rata-rata barang: "<< mean/(float)total<< endl;
}
