#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter two integers:"<<endl;
    cin>>n1>>n2;
    
    char op;
    cout<<"Enter an operator (+,-,*,/,%):"<<op<<endl;
    cin>>op;
    
    switch(op){
    
    case '+' :
    cout<<"Addition of two integers:"<<n1+n2<<endl;
    break;
    
    case '-' :
    cout<<"Difference of two integers:"<<n1-n2<<endl;
    break;
    
    case '*' :
    cout<<"product of two integers:"<<n1*n2<<endl;
    break;
    
    case '/' :
    cout<<"division of two integers:"<<n1/n2<<endl;
    break;
    
    case '%' :
    cout<<"remainder of two integers:"<<n1%n2<<endl;
    break;
    
    default :
    cout<<"invalid operator:"<<endl;
    break;
    
    }
    return 0;
}
