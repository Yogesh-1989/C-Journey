#include<iostream>

using namespace std;

int main()
{

  int n1;
  cout<<"Enter first number: "<<endl;
  cin>>n1;

  int n2;
  cout<<"Enter second number: "<<endl;
   cin>>n2;

  char opr;
  cout<<"Enter a arithmatic operator to perform operation:"<<endl;
  cin>>opr;

  switch(opr)
    {
      case '+':
        cout<<n1+n2<<endl;
       

      case '-':
        cout<<n1-n2<<endl;
     

      case '*':
        cout<<n1*n2<<endl;
      

      case '/':
        cout<<n1/n2<<endl;
     

      case '%':
        cout<<n1%n2<<endl;
        break;

      default:
        cout<<"Invalid Operator"<<endl;
        break;
    }

  return 0;
}