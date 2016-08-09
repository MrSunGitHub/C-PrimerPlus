#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char word[20];
    int counter=0;
    cout<<"Enter words(to stop ,type the word done):\n";
    cin>>word;
    for(;strcmp(word,"done");)
    {
        cin>>word;
        counter++;

    }
    cout<<"You entered a total of "<<counter<<" words";
    return 1;
}
