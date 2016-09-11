#include<iostream>

struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float valume;
};

int transValue(box box_value)
{
    std::cout<<"Box_value height is:"<<box_value.height<<std::endl;
    return 1;
}
int transAddress(box *box_add)
{
    std::cout<<"Box_value height is:"<<box_add->height<<std::endl;
    return 1;
}
int callFunction(int (*v)(box),int (*add)(box *),box box_test)
{
    std::cout<<"Test trans Value!\n";
    v(box_test);
    std::cout<<"Test trans address!\n";
    add(&box_test);
    return 1;
}

int main()
{
    box Box={"Box",0.1,1,2,3};
    callFunction(transValue,transAddress,Box);
}
