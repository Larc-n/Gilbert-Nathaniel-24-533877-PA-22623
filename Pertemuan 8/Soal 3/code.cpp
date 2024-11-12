#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct {
    long int NISN;
    string nama;
    int nilai;
} array;

void sequential_search(array data[], int target);

int main() {
    int target=60;
    array data[7] = {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };

    printf("Before change\n");
    for(int loop=0; loop<7; loop++)
    { printf("NISN: %li, Nama: %s, Nilai: %i\n", data[loop].NISN, data[loop].nama.c_str(), data[loop].nilai); }

    printf("\nAfter change\n");
    sequential_search(data, target);
    for(int loop=0; loop<7; loop++)
    { printf("NISN: %li, Nama: %s, Nilai: %i\n", data[loop].NISN, data[loop].nama.c_str(), data[loop].nilai); }



}

void sequential_search(array data[], int target)
{
    for(int loop= 0; loop<7; loop++)
    {
        if(data[loop].nilai==60)
        {
            data[loop].nama="Joko";
            break;
        }
    }
}
