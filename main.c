#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include "Prime.c"
#include "Factor.c"
#include "Factorial.c"
#include "ArmStr.c"
#include "Table.c"
#include "Word.c"
#include "Max.c"
#include "Ascii.c"
#include "Palidrome.c"
#include "Square.c"
#include "Cube.c"
#include "Automorphic.c"
 main()
{
	int ch,i;
	while(1==1)
	{
		system("cls");
		printf("\n\t\t\t--: College Activity :--");
		printf("\n\t\t\t\t1.Factor.");
		printf("\n\t\t\t\t2.Prime.");
		printf("\n\t\t\t\t3.Factorial.");
		printf("\n\t\t\t\t4.Arm Strong Number.");
		printf("\n\t\t\t\t5.Table.");
		printf("\n\t\t\t\t6.Automorphic.");
		printf("\n\t\t\t\t6.Number to Word.");
		printf("\n\t\t\t\t7.Word");
		printf("\n\t\t\t\t8.Maximum Number");
		printf("\n\t\t\t\t9.Word to Ascii");
		printf("\n\t\t\t\t10.Palidrome");
		printf("\n\t\t\t\t11.Square");
		printf("\n\t\t\t\t12.Cube");
		printf("\n\t\t\t\t13.Exit.");
		printf("\n\n\tEnter Your Choice : ");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1 :
            system("cls");
                    Factor();
                    getch();
				break;
			case 2 :
				system("cls");
                Prime();
				getch();
				break;
			case 3 :
			system("cls");
                Factiorial();
				getch();
				break;
			case 4 :
			system("cls");
				Arm();
				getch();
				break;
			case 5 :
			system("cls");
				table();
				getch();
				break;
			case 6 :
			system("cls");
				Auto();
				getch();
				break;
			case 7 :
			system("cls");
				Word();
				getch();
				break;
			case 8 :
			system("cls");
				Max();
				getch();
				break;
			case 9:
			system("cls");
				Ascii();
				getch();
				break;
			case 10:
			system("cls");
				Palidrome();
				getch();
				break;
			case 11:
			system("cls");
				Square();
				getch();
				break;
			case 12:
			system("cls");
				Cube();
				getch();
				break;
			case 13 :
			system("cls");
				printf("\n\tThank you for using my app.....!!!!");
				getch();
				exit(0);
		}
	}
}