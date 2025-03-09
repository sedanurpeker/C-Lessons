#include"stdio.h"
main()
{
	int sayi, j, kontrol = 0;
	
	printf("Bir sayi giriniz:");
	scanf("%d",& sayi);
	
	for(j = 2; j < (sayi / 2); j ++)
	{
		if(sayi % j == 0)
		{
			kontrol = 1;
			printf("Sayi asal degildir.");
			break;
		}
	}
	if (kontrol == 0)
	{
		printf("Sayi asaldir.");
	}
}
