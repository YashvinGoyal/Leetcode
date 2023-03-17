#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of array " << endl;
    cin >> n;
    int arr[n];
    int count = 0;
    cout << "enter the elements os array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count = count + 1;
            }
        }
    }
    count=count-n;
    if(count>=2){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}