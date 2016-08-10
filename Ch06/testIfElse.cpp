#include<iostream>
using namespace std;

const int MAX=5;
int main()
{
    double fish[MAX];
    cout<<"Please enter the weights of your fish.\n";
    cout<<"you may enter up to :"<<MAX<<" q to quit the program.\n";
    cout<<"fish #1:";
    int i=0;
    while(i<MAX&&cin>>fish[i])
    {
        if(++i<MAX)
            cout<<"fish #"<<i+1<<" :";
    }

    //calculate average
    double total=0.0;
    for (int j=0;j<i;j++)
    {
        total+=fish[j];
    }
    if(0==i)
        cout<<"No fish!";
    else{
        cout<<"Average weight of fishes is :"<<total/i<<endl;
    }
    cout<<"Done!\n";

    return 1;
}
