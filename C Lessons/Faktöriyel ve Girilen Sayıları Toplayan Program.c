#include"stdio.h"
main()
{
/*
	int sayi, x, carpma = 1;
	
	printf("Bir sayi giriniz:");
	scanf("%D",& sayi);
	
	for(x = 1; x <= sayi; x++)
	{
		carpma = carpma * x;
	}
	printf("%d", carpma);
*/
	
	int a, toplam = 0, i;
	
	for (i = 1; i <= 5; i++)
	{
		printf("%d. sayiyi giriniz:", i);
		scanf("%d",& a);
		
		toplam = toplam + a;
	}
	printf("%d", toplam);
	
}
