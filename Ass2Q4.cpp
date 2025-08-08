//Accept two numbers from user and display first number in second number of times

#include<iostream>
using namespace std;

void Display(int iNo, int iFrequency)
{
    int i = 0;

    if (iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for ( i = 0; i < iFrequency; i++)
    {
        cout<<iNo<<"\t";
    }
    
}

int main()
{
    int iValue = 0, iCount = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    cout<<"Enter Frequency: "<<endl;
    cin>>iCount;

    Display(iValue, iCount);



    return 0;
}