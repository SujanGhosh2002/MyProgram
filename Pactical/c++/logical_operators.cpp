#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num=0;
    cout<<"Enter nam1 value: ";
    cin>>num1;
    cout<<"Enter nam2 value: ";
    cin>>num2;
    num=num1&num2;
    if(num1&&num2)
    {
        cout<<"Both are true"<<endl;
    }
    else
    {
        cout<<"Both or one are not true"<<endl;
    }
    if(num1||num2)
    {
        cout<<"Both or one are true"<<endl;
    }
    else
    {
        cout<<"Both are not true"<<endl;
    }
    if(!(num1==num2))
    {
        cout<<num1<<" is not equal to "<<num2<<endl;
    }
    else
    {
        cout<<num1<<" is equal to "<<num2<<endl;
    }
    return 0;
}