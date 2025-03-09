#include"stdio.h"
main()
{
	int a = 1, b = 2, c = 0, i, sayi;
	
	printf("Bir sayi giriniz:");
	scanf("%d",& sayi);
	
	printf("%d%d", a, b);
	for(i = 1; i <= sayi; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d", c);
	}
}
