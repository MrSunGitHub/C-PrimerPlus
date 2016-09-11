#include<iostream>

int factorial(int n)
{
    if(n==1)
        return 1;
    else
        return n*factorial(n-1);
}

int main()
{
    std::cout<<"Please input an Interger:\n";
    int n;
    std::cin>>n;
    std::cout<<"The factorial result is:"<<factorial(n);

}
