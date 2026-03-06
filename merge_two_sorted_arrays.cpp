#include <iostream>
using namespace std;
int main()
{
    int a[50], b[50], c[100], i, j, k, n, m;

    cout << "enter the size of A array";
    cin >> n;
    cout << "enetr the value";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "enter the size of B array";
    cin >> m;
    cout << "enetr the value";
    for (j = 0; j < n; j++)
    {
        cin >> b[j];
    }
    i = 0;
    j = 0;
    k = 0;

    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < n)
    {
        c[k++] = a[i++];
    }
    while (j < m)
    {
        c[k++] = b[j++];
    }
    cout << "the sorted array is :";
    for (k = 0; k < n + m; k++)
    {
        cout << c[k] << " ";
    }
    return 0;
}