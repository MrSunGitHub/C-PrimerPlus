#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Please input the lines:\n";
    cin>>number;
    for(int i=0;i<number;i++)
    {
        for(int j=0;j<number-i-1;j++)
        {
            cout<<".";
        }
        for(int m=0;m<i+1;m++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 1;
}
