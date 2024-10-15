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
    
    stuff[0].name = "Tupperware";
    stuff[0].price = 125;
    stuff[0].kode = 101;
    stuff[0].quantity = 50;

    stuff[1].name = "Thermos";
    stuff[1].price = 250;
    stuff[1].kode = 102;
    stuff[1].quantity = 30;

    stuff[2].name = "Lunch Box";
    stuff[2].price = 175;
    stuff[2].kode = 103;
    stuff[2].quantity = 45;

    stuff[3].name = "Water Bottle";
    stuff[3].price = 90;
    stuff[3].kode = 104;
    stuff[3].quantity = 60;
    
    int total=0; float mean=0;

    for(int loop=0; loop<n; loop++)
    {
        total+=stuff[loop].quantity;
        mean+= (float)stuff[loop].price * (float)stuff[loop].quantity;
    }

    cout<<"\nJumlah semua barang: "<<total<< "\nHarga rata-rata barang: "<< mean/(float)total<< endl;
}
