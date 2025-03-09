#include"stdio.h"
main()
{
	int sayi, i, bolen = 2;
	
	printf("Bir sayi giriniz:");
	scanf("%d",& sayi);
	
	while(sayi >= bolen)
	{
		if(sayi % bolen == 0)
		{
			sayi /= bolen;
			printf("%d\n", bolen);
		}
		else
		{
			bolen++;
		}
	}
	
}
