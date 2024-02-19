#include<iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[50];
    a[0] = 3;
    a[1] = 4;
    for (int i = 2; i < n; i++)
    {
        a[i] = a[i - 1] + a[i - 2] - 2;   
    }
    cout << a[n-1];
}