#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a[100],max1,max2;
	int vtri1,vitri2;
	cin >>n;
	for (int i=0;i<n;i++)
		cin >> a[i];
	max1 = a[0];
	max2 =a[0];

	for(int i=0;i<n;i++)
		if(max1 < a[i]){
			max1 = a[i];
			vtri1=i;
		}cout << max1 << endl << vtri1<< endl;
	for(int i=0;i<n;i++)
		if(max1>a[i]&&a[i]>max2){
			max2=a[i];
			vtri2=i;
		}cout << max2 << endl<< vtri2;

	return 0;
}