/* Chuong trinh tinh phep chia */
#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("Nhap so bi chia :"); 
    	scanf("%d", &a);
    printf(" Nhap so chia : ");
    	scanf("%d", &b);
    c = a/b;
    d = a%b;
    if(d > 0)//truong hop khong chia het( du >0)
    {
        printf("%d chia cho %d duoc %d du %d", a, b, c, d);
    }
    else if(d==0)// truong hop chia het( du=0)
    {
        printf("%d chia cho %d duoc %d", a, b, c);
    }
    return 0;
}
