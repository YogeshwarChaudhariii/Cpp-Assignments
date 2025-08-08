//Accept one number from user and print that number of * on screen

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 1;

    while (iCnt <= iNo)
    {
        cout<<"*";
        iCnt++;
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