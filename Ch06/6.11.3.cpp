#include<iostream>
using namespace std;

int main()
{
    cout<<"Please enter one of the following choices:";
    cout<<"\nc)carnivore\tp)pianist\nt)tree\tg)game\n";
    char input;
    while(cin.get(input).get())
    {
        switch(input)
        {
            case 'c':cout<<"A maple is a carnivore.\n";
                     break;

            case 'p':cout<<"A maple is a pianist.\n";
                     break;
            case 't':cout<<"A maple is a tree.\n";
                     break;
            case 'g':cout<<"A maple is a game.\n";
                     break;
            default:cout<<"Please enter a,c,p,t or g:";
                    break;
        }
    }
}


