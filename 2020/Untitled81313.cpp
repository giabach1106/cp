#include<stdio.h>
#include<conio.h>

main(void)
{
int ia, ib;
printf("Nhap vao so a: ");
	scanf("%d", &ia);
printf("Nhap vao so b: ");
	scanf("%d",&ib);
	
if(ia>ib)
	printf("so a lon hon so b.");
else if(ib>ia)
	printf("so b lon hon so a.");
else
	printf("a bang b");
getch();
}
