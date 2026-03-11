#include <iostream>
using namespace std;
// 1 question
/*struct student
{
    string names;
    int roll, classes;

};
int main()
{
    student royal;

    cout<<"enter the your name "<<endl;
    getline(cin,royal.names);
    cout<<"enter the roll no"<<endl;
    cin>>royal.roll;
    cout<<"enter the class"<<endl;
    cin>>royal.classes;

    cout<<"name is : "<<royal.names<<endl;
    cout<<"roll no  is : "<<royal.roll<<endl;
    cout<<"class is : "<<royal.classes<<endl;
    return 0;*/

// 2 question

/*struct Employee
{
    string names;
    int id, amt;
};
int main()
{
    Employee e[3];

    for (int i = 0; i < 3; i++)

    {

        cout << "enter the your name " << endl;
        cin.ignore();
        getline(cin, e[i].names);
        cout << "enter the id" << endl;
        cin >> e[i].id;
        cout << "enter the amount" << endl;
        cin >> e[i].amt;
    }
    int max = 0;
    for (int i = 0; i < 3; i++)
    {
        if (e[i].amt > e[max].amt)
        {
            max = i;
        }
    }
    cout << "name " << e[max].names;
    cout << "max salary is :" << e[max].amt;
    return 0;
}*/

struct book
{
    int id, p;
    string name;
};
int main()
{
    book b[5];
    for (int i = 0; i < 5; i++)

    {
        cout << "enter the your name " << endl;
        cin.ignore();
        getline(cin, b[i].name);
        cout << "enter the id" << endl;
        cin >> b[i].id;
        cout << "enter the price" << endl;
        cin >> b[i].p;
    }
    cout << "all list of books " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "name is : " << b[i].name << endl;
    }
    int key;
    cout << "enter the id of the book ";
    cin >> key;
    for (int i = 0; i < 5; i++)
    {
        if (b[i].id == key)
        {
            cout<<"book find"<<endl;
            cout<<"book name is :"<<b[i].name<<endl;
        }
    }
    cout<<"the book have price more than 500"<<endl;
    for (int i = 0; i < 5; i++)
    {
        if (b[i].p > 500)
        {
            
            cout<<b[i].name<<endl;
        }
    }
    return 0;

}
