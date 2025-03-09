#include"stdio.h"
main()
{
	int sayi;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",& sayi);
	
	if (sayi % 2 == 0)
	{
		printf("Sayi cifttir.");
	}
	else
	{
		printf("Sayi tektir.");
	}
	
	
}
