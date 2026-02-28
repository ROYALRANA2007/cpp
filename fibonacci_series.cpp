#include <iostream>
using namespace std;
int main()
{
    int i, first = 0, second = 1, n, next;
    cout << "eneter the range : ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}