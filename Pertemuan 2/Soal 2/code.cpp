#include <iostream>
using namespace std;

typedef struct
{
    string name;
    int gross;
    int installment;
    int insurance;
}array;

void fill(array data[]);
int main()
{
    array data[3];
    fill(data);

    for(int loop=0; loop<3; loop++)
    {
        string name= data[loop].name;
        int gross=data[loop].gross;
        int installment=data[loop].installment;
        int insurance=data[loop].insurance;

        int tax= gross*0.2;
        int net= gross-tax-installment-insurance;

        cout<<"Payslip for Employee\n";
        cout<<"---------------------\n";

        cout<< "Name: "<< name << endl;
        cout<< "Gross Salary: Rp"<< gross << endl;
        cout<< "Tax (20%): Rp"<< tax << endl;
        cout<< "Installment: Rp"<< installment<< endl;
        cout<< "Insurance: Rp"<< insurance<< endl;
        cout<< "Net Salary: Rp"<< net<< endl <<endl;
    }
}

void fill(array data[])
{
    data[0].name="John Doe";
    data[0].gross= 5000000;
    data[0].installment= 500000;
    data[0].insurance= 200000;

    data[1].name="Jane Smith";
    data[1].gross= 7500000;
    data[1].installment= 1000000;
    data[1].insurance= 300000;

    data[2].name="Alex Johnson";
    data[2].gross= 10000000;
    data[2].installment= 1500000;
    data[2].insurance= 500000;
}
