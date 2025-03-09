#include"stdio.h"
main()
{

	int a = 1;
	while (a < 10)
	{
		printf("%d\n", a);
		a++;
	}

	
	int sayi, i = 1, toplam = 0;
	
	printf("Bir sayi giriniz:");
	scanf("%d",& sayi);
		
	while (sayi != 0)
	{
		toplam += sayi;
		
		printf("Bir sayi giriniz:");
		scanf("%d",& sayi);
	}
	
	printf("%d", toplam);
	
}
