
#include<stdio.h>
#include<conio.h>

main(void)
{
	char luaChon;
	printf("Cau hoi 1, Con dog di bang may chan?\n");
	printf("A. 1\nB. 2\nC. 3\nD. 4\n");
	printf("Nhap dap an vao ban eiii(chon a, b, c, d): ");
	luaChon= getchar();
	
	switch(luaChon)
	{
		case 'a':
		case 'b':
		case 'c':
		case 'A':
		case 'B':
		case 'C':
			{
				printf("\nSai roi");
				break;
			}
		case 'd':
		case 'D':
			{
				printf("\a\nChinh xac! Cau trloi dung!");
				break;
			}
		default:
				printf("\nDap an khong phu hop, nhap lai!");

}}
	char luaChon2;

	printf("Cau hoi 1, Con dog di bang may chan?\n");
	printf("A. 1\nB. 2\nC. 3\nD. 4\n");
	printf("Nhap dap an vao ban eiii(chon a, b, c, d): ");
	luaChon= getchar();
	
	switch(luaChon2)
{

		case 'a':
		case 'd':
		case 'c':
		case 'A':
		case 'D':
		case 'C':
			{
				printf("\nSai roi");
				break;
			}
		case 'b':
		case 'B':
			{
				printf("\a\nChinh xac! Cau trloi dung!");
				break;
			}
		default:
				printf("\nDap an khong phu hop, nhap lai!");
}}

