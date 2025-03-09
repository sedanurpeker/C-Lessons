#include"stdio.h"
main()
{
	int sayi, i;
	float toplam;
	
	printf("Bir sayi giriniz:");
	scanf("%d",& sayi);
	
	for(i = 1; i <= sayi; i++)
	{
		toplam = toplam + (1.0 / i);
	}
	
	printf("%f", toplam);
	
}
