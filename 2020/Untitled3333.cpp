/*hoan vi 2 so a,b neu a>b */

#include<stdio.h>
#include<conio.h>

int main()
{
int ia, ib, itam;
printf("Nhap a: ");
	scanf("%d", &ia);
printf("Nhap b: ");
	scanf("%d", &ib);

if(ia>ib)
	{
		itam=ia; //hoan vi a va b
		ia=ib;
		ib=itam;
	}
printf("%d , %d.\n", ia, ib);
getch();
}

