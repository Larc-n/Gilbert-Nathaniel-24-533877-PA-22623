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
    int n;
    do{cout<<"Input: "; cin>> n;}
    while(n>50);
    
    array stuff[n];
    int total=0; float mean=0;

    for(int loop=0; loop<n; loop++)
    {
        cout<<endl;
        cout<<"Name: "; cin.ignore(); getline(cin, stuff[loop].name);
        cout<<"Price: "; cin>> stuff[loop].price;
        cout<<"Kode: "; cin>> stuff[loop].kode;
        cout<<"Total: "; cin>> stuff[loop].quantity;

        total+=stuff[loop].quantity;
        mean+= (float)stuff[loop].price * (float)stuff[loop].quantity;
    }

    cout<<"\nJumlah semua barang: "<<total<< "\nHarga rata-rata barang: "<< mean/(float)total<< endl;
}
