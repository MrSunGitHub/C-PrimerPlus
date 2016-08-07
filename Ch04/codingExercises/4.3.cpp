#include<iostream>
#include<cstring>
using namespace std;
int main()
 {
     char firstname[20];
     char lastname[20];
     char fullname[40];
     cout<<"Enter your first name:";
     cin>>firstname;
     cout<<"Enter your last name:";
     cin>>lastname;
     //copy 2 names to fullname
     strcpy(fullname,firstname);
     strcat(fullname,",");
     strcat(fullname,lastname);
     cout<<"fullname is:"<<fullname;
     return 1;
 }
