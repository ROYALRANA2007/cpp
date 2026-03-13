#include <iostream>
using namespace std;

class Rectangle
{
private:
    int l;
    int b;

public:
    void setValue()
    {
        cout << "Enter length: ";
        cin >> l;

        cout << "Enter breadth: ";
        cin >> b;
    }

    int area()
    {
        return l * b;
    }

    int perimeter()
    {
        return 2 * (l + b);
    }
};

int main()
{
    Rectangle r1;

    r1.setValue();

    cout << "Area = " << r1.area() << endl;
    cout << "Perimeter = " << r1.perimeter();

    return 0;
}