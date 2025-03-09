#include"stdio.h"

int en_buyuk(int sayi1, int sayi2, int sayi3)
{
	int enb;
	
	if(sayi1 > sayi2 && sayi1 > sayi3)
	{
		enb = sayi1;
	}
	else if(sayi2 > sayi1 && sayi2 > sayi3)
	{
		enb = sayi2;
	}
	else
	{
		enb = sayi3;
	}
	return enb;
}

int en_kucuk(int sayi1, int sayi2, int sayi3)
{
	int enk;
	
	if(sayi1 < sayi2 && sayi1 < sayi3)
	{
		enk = sayi1;
	}
	else if(sayi2 < sayi1 && sayi2 < sayi3)
	{
		enk = sayi2;
	}
	else
	{
		enk = sayi3;
	}
	return enk;
}

main()
{
	int a, b, c, fark;
	
	printf("Birinci sayiyi giriniz:");
	scanf("%d",& a);
	printf("Ikinci sayiyi giriniz:");
	scanf("%d",& b);
	printf("Ucuncu sayiyi giriniz:");
	scanf("%d",& c);
	
	fark = en_buyuk(a , b, c) - en_kucuk(a , b, c);
	
	printf("%d", fark);
}
