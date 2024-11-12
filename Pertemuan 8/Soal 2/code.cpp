#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct {
    long int NISN;
    string nama;
    int nilai;
} array;

void insertion(array data[]);
int binary_search(array data[], long int target);

int main() {
    long int cari = 9950310962;

    array data[7] = {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    }; insertion(data);

    for(int loop=0; loop<7; loop++)
    {printf("%i. %li\n", loop+1, data[loop].NISN);}
    cout<< endl;

    int urutan= binary_search(data, cari);
    printf("The NISN you're looking for is: %li\nThe NISN is in %i\n", cari, urutan+1);
}

void insertion(array data[])
{
    for (int compare = 1; compare < 7; compare++)
    {
        array temp= data[compare];
        int with= compare - 1;

        while (with >= 0 && data[with].NISN > temp.NISN)
        {
            data[with + 1]= data[with];
            with--;
        }
        data[with + 1]= temp;
    }
}

int binary_search(array data[], long int target)
{
    int low=0; int high=6;
    int mid=0;
    do
    {
        int mid= (low + high)/2;
        if(data[mid].NISN>target)
        {
            high/=2;
        }
        else if(data[mid].NISN<target)
        {
            low=mid;
        }
        else
        {return mid;}
    }while(low<=high);
    return mid;
}
