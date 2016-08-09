#include<iostream>
using namespace std;
int main()
{
    cout<<"Please input the number: input 0 to quit.\n";
    int number,sum=0;
    cin>>number;
    while(number!=0)
    {
        sum+=number;
        cout<<"The sum is:"<<sum<<endl;
        cin>>number;

    }
}
