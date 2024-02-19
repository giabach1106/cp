#include <iostream>

using namespace std;
void nhap (int a[], int n)
{
    for (int i = 0; i < n; i++) cin >> a[i];
}
void tim (int a[], int n)
{
    int maxx1 = a[0], vtr1 = 0;
    int maxx2 = a[0], vtr2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (maxx1 < a[i])
        {
            maxx1 = a[i];
            vtr1 = i;
        }
    }
    cout << maxx1 << " " << vtr1 + 1 << endl;
    for (int j = 0; j < n; j++)
    {
        if (maxx1 > a[j] && a[j] > maxx2)
        {
            maxx2 = a[j];
            vtr2 = j;
        }
    }

    cout << maxx2 << " " << vtr2 + 1;
}
int main ()
{
    int n;
    cin >> n;
    int a[n];
    nhap (a, n);
    tim (a, n);
    return 0;
}
