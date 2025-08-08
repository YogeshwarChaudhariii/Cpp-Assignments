//Accept one number from user and print that number of * on screen

#include<iostream>
using namespace std;

void Accept(int iNo)
{
    int iCnt = 0;

    for ( iCnt = 0; iCnt < iNo; iCnt++)
    {
        cout<<"*"<<endl;
    }
    
}

int main()
{
    int iValue = 0;

    cout<<"Enter a number: "<<endl;
    cin>>iValue;

    Accept(iValue);


    return 0;
}