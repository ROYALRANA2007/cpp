#include<iostream>
using namespace std;
void add(int &a,int &b,int &sum)
{
    sum=a+b;
}
int main()
{
    int *a=new int;
    int *b=new int;
    int *sum=new int;
    cout<<"enter any number :";
    cin>>*a;
    cout<<"enter any number :";
    cin>>*b;
    add(*a,*b,*sum);
    cout<<"the sum is :"<<*sum;
    delete a;
    delete b;
    delete sum;
    return 0;

}
