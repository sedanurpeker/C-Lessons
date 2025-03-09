#include"stdio.h"

void topla(int sayi1, int sayi2)
{
	printf("%d\n", sayi1 + sayi2);
	
}

main()
{
	int a, b, c, d;
	a = 15;
	b = 20;
	c = 7;
	d = 12;
	
	topla(a, b);
	topla(a, c);
	topla(c, d);
}
