#include <iostream>
using namespace std;

int main(){
	int n,a[1000],soluong=0,tmp=1;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];

	for(int i=0;i<n;i++)
		if(a[i]<=a[i+1])
			tmp++;
		else {soluong=max(soluong,tmp);
				tmp =1;
			}
cout << soluong;

	return 0;
}