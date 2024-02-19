/* tim so lon nhat */
#include<stdio.h>
#include<conio.h>
int main()
{
int ia, ib;//khai bao' a, b kieu so nguyen; i la ham int.

printf("nhap vao so a: ");
	scanf("%d", &ia);
printf("nhap vao so b: ");
	scanf("%d",&ib);

if(ia>ib)
	printf("a lon hon b (a bang %d)", ia);
else if(ib>ia)
	printf("b lon hon a (b bang %d)", ib);
getch();
}

