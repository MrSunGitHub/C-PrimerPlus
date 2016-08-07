#include<iostream>
using namespace std;

int main()
{
    struct CandyBar{
    string  brand;
    float weight;
    int calorie;
    };
    CandyBar snack={"Mocha Munch",2.3,350};
    cout<<"The CandyBar snack is :"<<snack.brand<<"  "<<snack.weight<<"   "<<snack.calorie<<endl;
    return 1;
}
