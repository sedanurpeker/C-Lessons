#include"stdio.h"
main()
{
	int sayi, j, toplam = 0;
	
	for(j = 1; j <= 10; j++)
	{
		printf("Bir sayi giriniz:"),
		scanf("%d",& sayi);
		
		if (sayi % 2 == 0)
		{
			toplam = toplam + sayi;
		}
	}
	printf("%d", toplam);
	
	
}
