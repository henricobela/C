#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

main()
{
	
int num;


	printf("-------------------------QUAL LADO VOCE VAI ESCOLHER?-------------------------\n");
	getch();

	system ("color 4");
	printf("1 - PILULA VERMELHA\n");
	getch();
	
	system ("color 0B");
	printf("2 - PILULA AZUL\n\n");
	getch();

	
	printf(":");
	
	scanf("%d",&num);
	
		system("cls");
			if (num==1)
				{
					system("color 2");
						srand(time(NULL));
							for(;;)
								printf("%d",rand()%2);
				}
			else
				{
					system("exit");
				}
}

