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
    cout<<"num1 & num2 = "<<num<<endl;
    num=num1|num2;
    cout<<"num1 | num2 = "<<num<<endl;
    num=num1^num2;
    cout<<"num1 ^ num2 = "<<num<<endl;
    num=num1&num2;
    cout<<"num1 ~ num2 = "<<num<<endl;
    num=num1<<num2;
    cout<<"num1 << num2 = "<<num<<endl;
    num=num1>>num2;
    cout<<"num1 >> num2 = "<<num<<endl;
    return 0;
}