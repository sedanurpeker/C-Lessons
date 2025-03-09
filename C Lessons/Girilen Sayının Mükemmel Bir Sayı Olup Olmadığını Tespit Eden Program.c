#include"stdio.h"
main()
{
	int sayi, i, toplam = 0;
	
	printf("Bir sayi giriniz:");
	scanf("%d",& sayi);
	
	for(i = 1; i < sayi; i++)
	{
		if (sayi % i == 0)
		{
			printf("%d\n", i);
			toplam = toplam + i;
		}	
	}
	 if (toplam == sayi)
	 {
	 	printf("Girilen sayi mukemmel bir sayidir.");
	 }
	 else
	 {
	 	printf("Girilen sayi mukemmel bir sayi degildir.");
	 }
}
