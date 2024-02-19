#include<stdio.h>
#include<conio.h>
main(void)
{
int a, b, c;

printf("Nhap so a: ");
	scanf("%d",&a);
printf("Nhap so b: " );
	scanf("%d", &b);
printf("Nhap so c: ");
	scanf("%d", &c);
	
if(a>b)
	if(a>c)
		printf("So lon nhat la : %d", a);
	else if(a=c)
		printf("Loi, nhap lai ");
	else
		printf("So lon nhat la: %d",c);
else 
	if(b>c)
		printf("So lon nhat la: %d", b);
	else if(c==b)
		printf("Loi, nhap lai");
	else
		printf("So lon nhat la: %d", c);
getch();
}

