#include <iostream>
using namespace std;
class student
{
private:
    int roll, marks;
    string name;

public:
    void input() ;
    void display();
};
void student::input()
{
    cout<<"enter the name";
    getline(cin,name);
    cout<<"enter the roll no";
    cin>>roll;
    cout<<"enter the marks";
    cin>>marks;
}
void student::display()
{
    cout<<"name is : "<<name<<endl;
    cout<<"roll no is : "<<roll<<endl;
    cout<<"marks is : "<<marks<<endl;


}
int main()
{
    student s1;
    s1.input();
    s1.display();
    return 0;
}