#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
//	string separator="+--------+--------+--------+\n";
//	string h1="length", h2="width", h3="area";
//	int length=10,width=5;
//	string headers="| "+h1+" | "+h2+"  |  "+h3+"  |\n";
//	int area=length*width;
//	cout<<separator<<headers<<separator<<"| "<<setw(4)<<length<<setw(5)<<" | "<<setw(3)<<width<<setw(6)<<" | "<<setw(4)<<area<<setw(5)<<" | "<<endl<<separator;
    int n[10];
    for(int i=0;i<10;i++)
    {
        n[i]=i+100;
    }
    cout<<setw(13)<<"Element"<<setw(13)<<"Value"<<endl;
    for(int j=0;j<10;j++)
    {
        cout<<setw(7)<<j<<setw(17)<<n[j]<<endl;
    }
	return 0;
}