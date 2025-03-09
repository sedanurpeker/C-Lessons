#include"stdio.h"
main()
{
	int puan;
	
	printf("Puaninizi giriniz:");
	scanf("%d",& puan);
	
	switch (puan)
	{
		case 90 ... 100:
			{
				printf("AA");
				break;
			}
		case 80 ... 89:
		{
			printf("BA");
			break;
		}
		case 70 ... 79:
		{
			printf("BB");
			break;
		}
		case 60 ... 69:
		{
			printf("CB");
			break;
		}
		case 50 ... 59:
		{
			printf("CC");
			break;
		}
		case 40 ... 49:
		{
		printf("DC");
			break;
		}
		case 30 ... 39:
		{
			printf("DD");
			break;
		}
		case 0 ... 29:
		{
			printf("Kaldiniz.");
			break;
		}
		default:
		{
			printf("Gecersiz not girdiniz.");
			break;
		}
	}
	
	
	
	
}
