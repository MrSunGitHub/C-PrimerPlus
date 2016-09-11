#include<iostream>

float average(int a,int b)
{
    return 1.0/(1.0/a+1.0/b);
}
int main()
{
    int a,b;
    std::cout<<"Please input 2 intergers!\n";
    std::cin>>a;
    std::cin>>b;
    while(a*b)
    {
        std::cout<<"The result is:"<<average(a,b)<<std::endl;
        std::cout<<"Please input 2 intergers!\n";
        std::cin>>a;
        std::cin>>b;
    }


}
