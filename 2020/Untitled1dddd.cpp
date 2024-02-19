#include<stdio.h>
#include<conio.h>

main(void){
	float fdiem;
	printf("Nhap diem vao ban eiii: ");
		scanf("%f", &fdiem);
	if(fdiem>=0&&fdiem<=10)
		{
			if(fdiem>=9)
				printf("Ban that xuat sac.\n");
			else if(fdiem>=8)
				printf("Ban kHa' gioi.\n");
			else if(fdiem>=7)
				printf("Ban....Kha.\n");
			else if(fdiem>=6)
				printf("Ban trung binh kha.\n");
			else if(fdiem>=5)
				printf("Ban hoc trung binh.\n");
			else
				printf("Ban ngu vc.\n");
		}
	else
		printf("diem nhap khong hop le.\n");
}
