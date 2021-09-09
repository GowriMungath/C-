#include<iostream>
using namespace std;
int main()
{
    int ch;
    cout<<"1.English\n2.Spanish\n3.French\n4.Italian\n";
    cout<<"Enter your choice:";
    cin>>ch;
    switch (ch)
    {
    case 1:
        cout<<"Hello";
        break;
    case 2:
        cout<<"Hola";
        break;
    case 3:
        cout<<"Salut";
        break;
    case 4:
        cout<<"Salve";
        break;
    default:
        cout<<"Invalid Entry!";
        break;
    }
    
}

#include<iostream>
using namespace std;
int main()
{
    int a,b,ch;
    cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
    cout<<"Enter the operands: ";
    cin>>a>>b;
    cout<<"Enter your choice: ";
    cin>>ch;
    switch (ch)
    {
    case 1:
        cout<<a+b;
        break;
    case 2:
        cout<<a-b;
        break;
    case 3:
        cout<<a*b;
        break;
    case 4:
        cout<<a/float(b);
        break;
    default:
        cout<<"Invalid Entry!";
        break;
    }
    
}
