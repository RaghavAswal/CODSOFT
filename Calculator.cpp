#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x;
    double y;
    string op;
    cout<<"Enter the operator(+,-,*,/) = ";
    cin>>op;
    cout<<endl;
    cout<<"Enter the first number = ";
    cin>>x;
    cout<<endl;
    cout<<"Enter the second number = ";
    cin>>y;
    cout<<endl;
    if(op=="+")
    {
        cout<<x<<' '<<op<<' '<<y<<" = ";
        cout<<x+y;
    }
    else if(op=="-")
    {
        cout<<x<<' '<<op<<' '<<y<<" = ";
        cout<<x-y;
    }
    else if(op=="*")
    {
        cout<<x<<' '<<op<<' '<<y<<" = ";
        cout<<x*y;
    }
    else if(op=="/")
    {
        cout<<x<<' '<<op<<' '<<y<<" = ";
        cout<<x/y;
    }
    else
    {
        cout<<"Invalid Operator";
    }
    return 0;
}