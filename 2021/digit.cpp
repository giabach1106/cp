#include <bits/stdc++.h>
using namespace std;
int check(double N){
	double TongChuSo = 0;
	for(double i = 1; i<=N; i++)
	{
	    double A = i;
        if(A<10)
        {
            TongChuSo = TongChuSo + 1;   
        }
        else
        {
            while(A>=10)
            {
                A = A/10;
                TongChuSo = TongChuSo + 1;
            }
            TongChuSo = TongChuSo + 1;
        }
	}
	return TongChuSo;
		

}
int main(){
freopen("digit.inp","r",stdin);
freopen("digit.out","w",stdout);

	double N;
	cin >> N;
	cout << check(N);
	return 0;
}