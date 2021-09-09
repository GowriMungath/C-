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

#include<iostream>
using namespace std;
int main()
{
    string a="Gowri";
    string b="Mungath";
    cout<<a+" "+b<<endl;
    cout<<a.append(b)<<endl;
    int c=5;
    int d=7;
    cout<<c+d<<endl;
    //cout<<a+c; error
    cout<<a.length()<<endl;
    cout<<b.size()<<endl;
    cout<<a[2]<<endl;
    b[3]='p';
    cout<<b<<endl;
    string e,f;
    //cout<<"Enter your brother's full name: ";
    //cin>>e;
    //cout<<e<<endl;
    cout<<"Again enter and now see: ";
    getline(cin,f);
    cout<<f<<endl;
}
