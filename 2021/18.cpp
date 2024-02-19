#include <iostream>

using namespace std;
void nhap (int a[], int n)
{
    for (int i = 0; i < n; i++) cin >> a[i];
}
void xuat (int a[], int n)
{
    for (int i = 0; i < n; i++) cout << a[i] << " ";
}
void swapnum (int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
void sapxep (int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(a[i] < a[j])
                swapnum (a[i], a[j]);
        }
    }
}
int main ()
{
    int n;
    cin >> n;
    int a[n];
    nhap (a, n);
    sapxep (a, n);
    xuat (a, n);
    return 0;
}
