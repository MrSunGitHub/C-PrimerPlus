#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    string dessert;
    cout<<"Enter your name:\n";
    //����д��ֻ�ܶ����ո�֮ǰ
    //cin>>name;
    getline(cin,name);
    cout<<"Enter your favorite dessert:\n";
    cin>>dessert;
    cout<<"I have some delicious food"<<dessert<<" for you "<<name<<endl;
    return 1;
}
