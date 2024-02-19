#include<iostream>
using namespace std;

int main(){
	int a[100], n,max,min;
	cin >>n;
	for(int i=1;i<=n;i++){
		cout << i ;
		cin >> i;}
	max=a[1];
	for(int i=1;i<=n;i++)
	{
		if(a[i]>max)
			max=a[i];

	}cout << max << endl;
	min=a[1];
	for(int i=1;i<=n;i++)
		{if(a[i]<min)
			min=a[i];
		}
	cout<<min;

	return 0;
}