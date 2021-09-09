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
