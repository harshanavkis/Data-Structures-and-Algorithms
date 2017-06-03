#include<iostream>
using namespace std;
struct A
{
    int num[100];
};

struct B
{
   void func();
};

void B::func(){}

int main()
{
    cout<<"size of struct A:"<<sizeof(A)<<endl;
    cout<<"size of struct B:"<<sizeof(B);
}
