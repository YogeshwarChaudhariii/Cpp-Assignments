//Accept one number from user and print that number of * on screen

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int i = 0;

    if(i >= iNo)
    {
        while (i > iNo)
        {
            cout<<"*";
            i--;
        }
    }
    else
    {
        return;
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    Display(iValue);


    return 0;
}