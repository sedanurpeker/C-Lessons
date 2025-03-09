#include"stdio.h"
main()
{
	int sayi, i, adet = 0;
	
	for (i = 1; i <= 10; i++)
	{
		printf("%d. sayiyi giriniz:", i);
		scanf("%d",& sayi);
		
		if (sayi % 3 == 0 && sayi %  5 == 0)
		{
			adet++;
		}
	}
	printf("%d", adet);
}
