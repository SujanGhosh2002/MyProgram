#include<iostream>
using namespace std;
#define concat(x,y)x##y
int main()
{
    int num1=10;
    string fullname="Sujan Ghosh";
    cout<<concat(num,1)<<endl;
    cout<<concat(full,name)<<endl;
    return 0;
}