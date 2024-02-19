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
void swapp (int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
void timmaxvachuyen (int a[], int &n)
{
    int maxx = a[0], vtrmax = 0;
    for (int i = 0; i < n; i++)
    {
        if (maxx < a[i])
        {
            maxx = a[i];
            vtrmax = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        swapp (a[0], a[vtrmax]);
    }

}
int main ()
{
    int n;
    cin >> n;
    int a[n];
    nhap (a, n);
    timmaxvachuyen (a, n);
    xuat (a, n);
    return 0;
}
