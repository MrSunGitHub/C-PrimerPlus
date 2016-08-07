#include<iostream>
#include<string>
using namespace std;

int main()
{
    string firstname;
    string lastname;
    string fullname;
    cout<<"Enter your first name:";
    cin>>firstname;
    cout<<"Enter your last name:";
    cin>>lastname;
    fullname=firstname+","+lastname;
    cout<<"Here is your name :"<<fullname;
    return 1;


}
