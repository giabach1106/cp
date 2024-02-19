#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,tmp=0,max;
	cin >> n;
	int a[1000];
	for(int i=0;i<n;i++)
		if(a[i]%5==0)
			tmp++;
	cout << tmp << endl;
	for(int i=0;i<n;i++)
		if(a[i]>=30&&a[i]<=50)
			tmp++;
	cout << tmp <<endl;
	for(int i=0;i<n;i++)
		if(a[i]>70)
			cout << a[i];
		max = a[0];
	for(int i=0;i<n;i++)
	{
		if(max < a[i])
			max = a[i];
	}cout << max;
	


	return 0;
}