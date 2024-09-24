#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>data;

    string input; cout<<"Input: "; getline(cin, input);


    int number[]={0,1,2,3,4,5,6,7,8,9};

    int placeholder, total_input=0;
    bool negative;

    for(int loop=1; input[loop]!='\0'; loop++)
    {

        if(loop>1)
        {
            if(negative==true){placeholder*=-1;}
            data.push_back(placeholder);
            total_input++;
        }

        negative=false;

        placeholder=0;

        if(input[loop]==32){loop++;}
        if(input[loop]==45){loop++; negative=true;}

        int pow=1;
        for(int ten=loop; input[ten]!=44 && input[ten]!=93; pow*=10, ten++){}
        pow/=10;

        for( ; ; )
        {
            placeholder+=number[input[loop]-48]*pow;
            pow/=10;

            loop++;

            if(input[loop]==93)
            {
                if(negative==true){placeholder*=-1;}
                data.push_back(placeholder);
                break;
            }

            if(input[loop]==44){break;}
        }
        if(input[loop]==93){break;}
    }

    cout<<"[";
    for(int all=total_input; all>-1; all--)
    {
        cout<<data[all];
        if(all>0){cout<<", ";}
    }
    cout<<"]"<< endl;
}
