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
    
    stuff[0].name = "Plastic Container";
    stuff[0].price = 80;
    stuff[0].kode = 201;
    stuff[0].quantity = 120;

    stuff[1].name = "Glass Jar";
    stuff[1].price = 150;
    stuff[1].kode = 202;
    stuff[1].quantity = 70;

    stuff[2].name = "Steel Flask";
    stuff[2].price = 300;
    stuff[2].kode = 203;
    stuff[2].quantity = 25;

    stuff[3].name = "Cup Set";
    stuff[3].price = 100;
    stuff[3].kode = 204;
    stuff[3].quantity = 85;
  
    int total=0; float mean=0;

    for(int loop=0; loop<4; loop++)
    {
        total+=stuff[loop].quantity;
        mean+= (float)stuff[loop].price * (float)stuff[loop].quantity;
    }

    cout<<"\nJumlah semua barang: "<<total<< "\nHarga rata-rata barang: "<< mean/(float)total<< endl;
}
