#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    cout<<"What is your first name?\n";
    char firstname[30];
    cin.getline(firstname,30);

    cout<<"What is your last name?\n";
    char lastname[30];
    cin.getline(lastname,30);

    cout<<"What letter grade do you deserve?\n";
    char grade;
    cin>>grade;//read the Enter
    grade=grade+1;
    cout<<"What is your age?\n";
    int age;
    //How to read Integer?
    cin>>age;

    cout<<"Name: "<<lastname<<", "<<firstname<<endl;
    cout<<"Grade:"<<grade<<endl;
    cout<<"Age: "<<age<<endl;
    return 1;
}
