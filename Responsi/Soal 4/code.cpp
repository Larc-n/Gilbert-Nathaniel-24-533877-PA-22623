#include <iostream>
using namespace std;

void find(int data[], int size);
int main (){
    int data1[]={2312,232,1234,43,123,63,35,9873};
    int size1= sizeof(data1)/sizeof(data1[0]);

    int data2[]={342,2134,123,45,1,734,7,33,6,12};
    int size2= sizeof(data2)/sizeof(data2[0]);

    int data3[]={-5234,2,-234,-54,24,43};
    int size3= sizeof(data3)/sizeof(data3[0]);

    cout<<"Biggest at data1= ";find(data1, size1);
    cout<<"Biggest at data2= ";find(data2, size2);
    cout<<"Biggest at data3= ";find(data3, size3);
}

void find(int data[], int size){
    int biggest=data[0];
    for(int loop=1; loop<size; loop++){
        if(biggest<data[loop]){
            biggest=data[loop];
        }
    }
    cout<<" "<<biggest<<endl;
}
