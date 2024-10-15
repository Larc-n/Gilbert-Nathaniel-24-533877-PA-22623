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
    //TEST_CODE_1_________________________________________________________________________________________________________________________________________________________
    for(; ;)
    {
        int n=4;
        array stuff[n];

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

        cout<<"TEST CODE 1\nExpected Jumlah semua barang: 185\nExpected Harga rata-rata barang: 146.081081081\nJumlah semua barang: "<<total<< "\nHarga rata-rata barang: "<< mean/(float)total<< endl;
        break;
    }
    cout<< endl;
    //TEST_CODE_2_________________________________________________________________________________________________________________________________________________________
    for(; ;)
    {
        int n=4;
        array stuff[n];

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

        for(int loop=0; loop<n; loop++)
        {

            total+=stuff[loop].quantity;
            mean+= (float)stuff[loop].price * (float)stuff[loop].quantity;
        }

        cout<<"TEST CODE 2\nExpected Jumlah semua barang: 300\nExpected Harga rata-rata barang: 120.33333333\nJumlah semua barang: "<<total<< "\nHarga rata-rata barang: "<< mean/(float)total<< endl;
        break;
    }
    cout<< endl;
    //TEST_CODE_3_________________________________________________________________________________________________________________________________________________________
    for(; ;)
    {
        int n=4;
        array stuff[n];

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

        for(int loop=0; loop<n; loop++)
        {

            total+=stuff[loop].quantity;
            mean+= (float)stuff[loop].price * (float)stuff[loop].quantity;
        }

        cout<<"TEST CODE 3\nExpected Jumlah semua barang: 70\nExpected Harga rata-rata barang: 500\nJumlah semua barang: "<<total<< "\nHarga rata-rata barang: "<< mean/(float)total<< endl;
        break;
    }
}
