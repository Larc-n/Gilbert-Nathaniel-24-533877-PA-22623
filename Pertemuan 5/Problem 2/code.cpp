#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>data; //vector used to store value that isnt inverted

    string input; cout<<"Input: "; getline(cin, input);

    int number[]={0,1,2,3,4,5,6,7,8,9}; //necessary to turn string into integer

    int placeholder; //use to store integer value from string before inserting into vector
    int total_input=0; //keep count of how many number there is in the input
    bool negative; //to know whether a value is negative or not


    for(int loop=1; input[loop]!='\0'; loop++)
    {

        if(loop>1)//to skip the first looping
        {
            if(negative==true){placeholder*=-1;}//turning intger into negative if condition is met
            data.push_back(placeholder); //inserting integer into vector
            total_input++;//update total number
        }

        negative=false; //reset negative to false

        placeholder=0;//reset placeholder to zero

        if(input[loop]==32){loop++;}//if the current loop is on a space, then skip it and go into next char
        if(input[loop]==45){loop++; negative=true;} //if the current loop is on a negative symbol (-), turn negative into true, and skip to next char


        //use to count the highest power of ten in the current number
        int pow=1;
        for(int ten=loop; input[ten]!=44 && input[ten]!=93; pow*=10, ten++){}
        pow/=10;

        for( ; ; )//loop until it reaches a comma, or the end braket
        {
            placeholder+=number[input[loop]-48]*pow; //turn string into integer
            pow/=10; //lowering the power of ten for the next single digit

            loop++; //move to next char

            if(input[loop]==93) //if the char is currently the end braket (])
            {
                if(negative==true){placeholder*=-1;}
                data.push_back(placeholder);
                break;
            }

            if(input[loop]==44){break;}
        }
        if(input[loop]==93){break;}
    }


    vector<int>new_data; //new vector consists of the inverted data from the previous vector

    cout<<"Output: [";
    for(int all=total_input; all>-1; all--)//loop from the last
    {
        new_data.push_back(data[all]);
        cout<<new_data[total_input-all];
        if(all>0){cout<<", ";}
    }
    cout<<"]"<< endl;
}
