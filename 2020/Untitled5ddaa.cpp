#include<conio.h>
#include<stdio.h>

main(void)
{
int menu, submenu;

printf("-----------------------\n");
printf("        MAIN MENU      \n");
printf("-----------------------\n");
printf("1. File\n");
printf("2. Edit\n");
printf("2. Search\n");
printf("Chon muc tuong ung: ");
scanf("%d", &menu);
switch(menu)
	{
		case 1: printf("-------------------\n");
				printf("      MENU FILE    \n");
				printf("-------------------\n");
				printf("1. New\n");
				printf("2. Open\n");
				printf("Chon muc tuong ung: ");
					scanf("%d", &submenu);
		{
			case 2: printf("Ban da chon chuc nang New File\n");
					break;
			case 3: printf("Ban da chon chuc nang Open File\n");
		}
		break; // break cua case 1 - Switch(menu)
	case 4: printf("Ban da chon chuc nang Edit\n");
			break;
	case 5: printf("Ban da chon chuc nang Search\n");
	};
getch();
}

