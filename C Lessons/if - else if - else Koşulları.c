#include"stdio.h"
int main()
{
/*
	int sayi;
	printf("Bir sayi giriniz:");
	scanf("%d",& sayi);
	
	if (sayi < 0)
	{
		printf("Girilen sayi sifirden kucuktur.");
	}
	
	else if (sayi == 0)
	{
		printf("Girilen sayi sifirdir.");
	}
	
	else
	{
		printf("Girilen sayi sifirden buyuyktur.");
	}
*/


	float puan;
	int a;
	printf("Bir puan giriniz:");
	scanf("%f",& puan);
	
	for (a = 0; a < 10; a++)
	{
	if (puan >= 0 && puan <= 44 )
	{
		printf("1");
		break;
	}
	
	else if (puan >= 45 && puan <= 54 )
	{
		printf("2");
		break;
	}
	
	else if (puan >= 55 && puan <= 69 )
	{
		printf("3");
		break;
	}
	
	else if (puan >= 70 && puan <= 84 )
	{
		printf("4");
		break;
	}
	
	else if (puan >= 85 && puan <= 100 )
	{
		printf("5");
		break;
	}
	
	else
	{
		printf("Puani tekrar giriniz:");
		scanf("%f",& puan);
	}
	}
	
	
}
