#include<iostream>
using namespace std;

int main()
{
    cout<<"Please enter your salary :\n";
    int salary=0;
    int finalsalary=0;
    while(cin>>salary&&salary>0)
    {
        if(salary>35000)
        {
            finalsalary+=(salary-35000)*0.2;
            salary=35000;
        }
        if(salary>15000)
        {
            finalsalary+=(salary-15000)*0.15;
            salary=15000;
        }
        if(salary>5000)
        {
            finalsalary+=(salary-5000)*0.1;
            salary=5000;
        }
        cout<<"Your final tax is : "<<finalsalary<<endl;
        cout<<"Please enter your salary: \n";

    }
    return 1;
}
