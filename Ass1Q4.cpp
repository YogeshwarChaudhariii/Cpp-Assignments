//Accept one number and check whether is divivsible by 5 or not

#include<iostream>
using namespace std;

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if ((iNo % 5) == 0)
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

    cout<<"Enter bumber: "<<endl;
    cin>>iValue;

    bRet = Check(iValue);

    if (bRet == TRUE)
    {
        cout<<"Divisible by 5"<<endl;
    }
    else
    {
        cout<<"Not Divisible by 5"<<endl;
    }

    return 0;
}