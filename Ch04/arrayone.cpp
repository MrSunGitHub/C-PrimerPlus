#include<iostream>
#include<cstring>
#include<string>
using namespace std;

void testGetline()
{
    char name[20];
    cout<<"�������֣�"<<endl;
    cin.getline(name,20);
    cout<<"��������ǣ�"<<name;

}
void testGet()
{
    char name[20];
    cout<<"�������֣�"<<endl;
    cin.get(name,20);
    cout<<"��������ǣ�"<<name;

}

void testString()
{
    char charr1[20]="this is test";
    char charr2[20];
    strcpy(charr2,charr1);
    cout<<"charr2 is :"<<charr2;
    //�ַ������ӵ��ַ�����ĩβ
    strcat(charr1,"cat joint");
    cout<<"charr1 is :"<<charr1;

}

void testStringIO()
{
    char charr1[20];
    string str;
    cout<<"Before input charr1 length:"<<strlen(charr1)<<charr1[0]<<charr1[1]<<charr1[2]<<endl;
    cout<<"Enter a line to charr1:";
    cin.getline(charr1,20);
    cout<<"After input charr1 length:"<<strlen(charr1)<<endl;
    cout<<"��һ��getline��";
    //������һ��eiline
    getline(cin,str);
}
void testStruct()
{
    struct inflatable{
        char name[20];
        int age;
        double pay;
    };

    inflatable m;
    m.age=30;
    cout<<"m������Ϊ��"<<m.age;
}
void testEnum()
{
    enum color {red=1,yellow=3,blue=5,green=7,black=9,pink=11};
    color band;
    band=red;//=yellow
    cout<<band<<endl;
    band=green;
    cout<<band<<endl;
    int colorInt;
    colorInt=0+yellow;
    cout<<"colorInt is :"<<colorInt;
    color change=color(17799);//�˴���û������enum��ȡֵ��Χ��������Ȼ���Ա�������
    cout<<"change is:"<<change;
}

void testPoint()
{
    int a=32;
    cout<<"the address of a is :"<<&a;
    //����ָ�벻��ʼ��
    long* fellow;
    cout<<"δ��ʼ����fellow�ĵ�ַΪ��"<<fellow;
    *fellow=23323;
    cout<<"23323��ʼ����ĵ�fellow�ĵ�ַΪ��"<<fellow;

}
void testNew()
{
    int nights=1001;
    int* pt=new int;
    *pt=1001;
    cout<<"location nights:"<<&nights<<endl<<"location pt:"<<pt<<endl;
    cout<<"value nights:"<<nights<<endl<<"value pt:"<<*pt<<endl;
    cout<<"Show How to access array\n";
    double* p=new double[3];
    p[0]=0.1;
    p[1]=0.2;
    p[2]=0.3;
    cout<<"p0:"<<p[0]<<"p1:"<<p[1]<<"p2:"<<p[2];
    p=p+1;
    cout<<"\nNow p0:"<<p[0]<<"p1:"<<p[1]<<"p2:"<<p[2];

    cout<<"\n Point Add\n";
    double wage[3]={1.1,2.1,3.1};
    double *dpt=wage;
    double *dpt2=&wage[0];
    cout<<"this is dpt[0]:"<<dpt[0]<<"this is *(dpt+1)"<<*(dpt+1)<<endl;
    cout<<"this is dpt2[0]:"<<dpt2[0]<<"this is *(dpt2+1)"<<*(dpt2+1)<<endl;

    cout<<"Test Array Add\n";
    double wages[2]={1.2,1.4};
    double *pwage=wages+1;
    //wage=wage+1;����
    cout<<"*pwage��ֵΪ��"<<*pwage<<endl;

    cout<<"Test Several Array Add\n";
    short tell[20];
    cout<<"The address of tell is:"<<tell<<endl;
    cout<<"The address of &tell is:"<<&tell<<endl;
    cout<<"The address of tell+1 is:"<<tell+1<<endl;
    cout<<"The address of &tell+1 is:"<<&tell+1<<endl;

    cout<<"Test Point Length\n";
    short* shortP;
    int* intP;
    cout<<"shortP length:"<<sizeof shortP<<"    *shortP length:"<<sizeof(*shortP)<<endl;
    cout<<"intP length:"<<sizeof intP<<"     *intP length:"<<sizeof(*intP)<<endl;
}
void testPointStr()
{
    char animal[20]="cat";
    const char * bird="wren";
    char *ps;
    cout<<animal<<" is so cute"<<endl;
    cout<<bird<<" is so cute"<<endl;
    cout<<ps<<" is so cute"<<endl;

}

void testStrcpy()
{
    char animal[20]="fox";
    char *ps="fox";
    char *ps2="fox";
    cout<<"Before strlen  animal is:"<<animal<<"    ps is:"<<ps<<"    ps2 is:"<<ps<<endl;
    cout<<"Before strlen  animal address is:"<<(int *)animal<<"    ps address  is:"<<(int *)ps<<"    ps2 is:"<<(int *)ps2<<endl;

    ps=new char[strlen(animal)+1];
    cout<<"animal is:"<<animal<<"    ps is:"<<ps<<endl;
    cout<<"animal address is:"<<(int *)animal<<"    ps address  is:"<<(int *)ps<<endl;

}

void testNewStruct()
{
    struct things{
    int good;
    int bad;
    };
    things grubnose={3,234};
    things grubnose={3,234};
    things grubnose={3,234};
    things *grubnose2=new things;
}

int main()
{
    testNewStruct();
//    testStrcpy();
//    testPointStr();
//      testNew();
//    testPoint();
 //   testEnum();
//    testStringIO();
    //testString();
    //testGetline();
    //testGet();
    /*const int Size=20;
    int yam[3]={10,20,30};
    cout<<"Size of Array is:"<<sizeof(yam);
    //��ֹ����char�ı�ʾ��Χ
    char a[]={'a','b',111258558};
    //C����ַ���
    char dog[4]={'a','d','o','g'};
    char cat[4]={'c','a','t','\0'};
    cout<<"δ���ʱ�����Ϊ��"<<dog<<"��֮��"<<cat<<endl;
    char fish[10]="Bubbles";
    cout<<"fish �ĳ���Ϊ��"<<strlen(fish)<<endl;
    char name[Size];
    char dessert[Size];
    cout<<"Your name:"<<endl;
    cin>>name;
    cout<<"Your name is :"<<name<<endl;
    cout<<"Your favorite food is :"<<endl;
    cin>>dessert;
    cout<<"food result is:"<<dessert<<"getline����";
    cin.getline(name,20);
    cout<<"��������ǣ�"<<name<<endl;*/
    return 1;
}


