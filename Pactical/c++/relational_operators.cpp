#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter nam1 value: ";
    cin>>num1;
    cout<<"Enter nam2 value: ";
    cin>>num2;
    if(num1==num2)
    {
        cout<<num1<<" is equal to "<<num2<<endl;
    }
    else
    {
        cout<<num1<<" is not equal to "<<num2<<endl;
    }
    if(num1<num2)
    {
        cout<<num1<<" is less than "<<num2<<endl;
    }
    else
    {
        cout<<num1<<" is not less then "<<num2<<endl;
    }
    if(num1>num2)
    {
        cout<<num1<<" is greater than "<<num2<<endl;
    }
    else
    {
        cout<<num1<<" is not greater then "<<num2<<endl;
    }
    if(num1<=num2)
    {
        cout<<num1<<" is less than or equal to "<<num2<<endl;
    }
    else
    {
        cout<<num1<<" is greater then  "<<num2<<endl;
    }
    if(num1>=num2)
    {
        cout<<num1<<" is greater than or equal to "<<num2<<endl;
    }
    else
    {
        cout<<num1<<" is less then  "<<num2<<endl;
    }
    return 0;
}