#include<stdio.h>

main(void){
	
char c;
printf("Nhap: ");
	scanf("%c", &c);
if(c<='z'&&c>='a')
	{
		c=c-32;
		printf("Chu hoa co chu ban vua nhap la: %c",c);
	}
else if(c<='Z'&&c>='A')
	{
		c=c+32;
		printf("Chu thuong cua chu ban vua nhap la: %c", c);
	}
a	printf("So ban vua nhap la %c", 
}
