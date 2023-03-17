#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter the size of array " << endl;
    cin >> n;
    int arr[n];
    int target;
    cout << "enter the target element" << endl;
    cin >> target;
    cout << "enter the elements os array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a, b;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == target)
            {
                a = i;
                b = j;
                break;
            }
    }
    if (a < n && b < n)
    {
        cout << a << " " << b << endl;
    }
    else
    {
        cout << "no such indices" << endl;
    }

    return 0;
}