#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    string dessert;
    cout<<"Enter your name:\n";
    //这种写法只能读到空格之前
    //cin>>name;
    getline(cin,name);
    cout<<"Enter your favorite dessert:\n";
    cin>>dessert;
    cout<<"I have some delicious food"<<dessert<<" for you "<<name<<endl;
    return 1;
}
