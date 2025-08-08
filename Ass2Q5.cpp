//Accept number from user and check whether number is even or odd


#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if ((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    bRet = ChkEven(iValue);

    cout<<bRet;


    return 0;
}