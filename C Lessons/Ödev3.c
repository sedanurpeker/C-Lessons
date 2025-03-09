#include"stdio.h"
#include"math.h"
int main()
{
/*
1.Örnek
	int i;
	for (i = 1; i < 1000; i++)
	{
		printf("%d\n", i);
	}
*/
	
/*
2.Örnek
	int sayi, i, fak = 1;
	
	printf("Faktoriyelini istediginiz sayiyi giriniz:");
	scanf("%d",& sayi);
	
	for (i = 1; i <= sayi; i++)
	{
		fak *= i;
	}
	printf("%d\n", fak);
*/
	
/*
3.Örnek
	int sayi, i, toplama = 0;
	
	printf("Sayi giriniz:");
	scanf("%d",& sayi);	
	
	for (i = 1; i <= sayi; i++)
	{
		toplama += i; 
	}
	printf("%d", toplama);
*/

/*
4.Örnek
	int sayi, i, toplama = 0;
	
	printf("Sayi giriniz:");
	scanf("%d",& sayi);	
	
	for (i = 0; i <= sayi; i += 2)
	{
		toplama += i; 
	}
	printf("%d", toplama);
*/
	
/*
5.Örnek
	int sayi, i;
	
	printf("Sayi giriniz:");
	scanf("%d",& sayi);
	
	for (i = 2; i <= sayi / 2; i++)
	{
		if (sayi % i == 0)
		{
			printf("%d\n", i);
		}
	}
*/

/*
6.Örnek
	int sayi, i, top1 = 0, top2 = 0;
	float oran;
	
	for (i = 1; i < 20; i++)
	{
		printf("%d. sayiyi giriniz:", i);
		scanf("%d",& sayi);
		
		if (sayi % 2 == 0)
		{
			top1 += sayi;
		}
		else
		{
			top2 += sayi;
		}
	}
	
	printf("Girilen cift sayilarin toplami: %d\n", top1);
	printf("Girilen tek sayilarin toplami: %d\n", top2);
	
	oran = top1 / top2;
	printf("%f", oran);
*/

/*
7.Örnek
	int i;
	
	for (i = 4; pow(i,2) < 1000; i++)
	{
		printf("%d\n", pow(i,2));
	}
*/

/*
8.Örnek
	int i, sayi, toplam = 0, carpma = 1, adet = 1;
	
	for (i = 1; i < 9; i++)
	{
		printf("%d. sayiyi giriniz:", i);
		scanf("%d",& sayi);
		
		if (sayi % 2 == 1)
		{
			toplam += sayi;
		}
		else if (sayi % 2 == 0)
		{
			carpma *= sayi;
		}
		else if (sayi == 7)
		{
			adet++;
		}
		
	}
	
	printf("Tek sayilarin toplami: %d\n", toplam);
	printf("Cift sayilarin carpimi: %d\n", carpma);
	printf("7 sayisinin adeti: %d\n", adet);
*/

	













	
}
