#include<iostream>
#include<stdio.h>
void testwhile()
{
    using std::cout;
    using std::endl;
    int guest=1;
    while(guest++<10)
        cout<<"guest is:"<<guest<<endl;
}

void testcin()
{
    using namespace std;
    char ch;
    int count=0;
    cout<<"Enter characters;enter # to quit:\n";
    cin.get(ch);
    while(ch!='#')
    {
        cout<<ch;
        ++count;
        cin.get(ch);
    }
}

void testEOF()
{
    using namespace std;
    char ch;
    int count=0;
    cout<<"Enter characters;enter # to quit:\n";
    cin.get(ch);
    while(cin.fail()==false)
    {
        cout<<ch;
        ++count;
        cin.get(ch);
    }
    cout<<endl<<count<<" characters read\n";
}
void testGetEOF()
{

    using namespace std;
    char ch;
    int count=0;
    cout<<"Enter characters;enter # to quit:\n";
    ch= cin.get();
    while(ch != EOF)
    {
        cout.put(ch);
        ++count;
        ch=cin.get();
    }
    cout<<endl<<count<<" characters read\n";
}

int main()
{
    testGetEOF();
//    testcin();
    return 1;
}
