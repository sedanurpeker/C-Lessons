#include"stdio.h"
int main()
{
/*
	for(döngü deðiþkeni = baþlangýç; koþul; artma veya azalma miktarý)
	{
	
	
	}
*/
	int a;
	for (a = 1; a < 10; a++)
	{
		printf("%d.secenek\n", a);
	}
	
	int x;
	int toplam = 0;
	for (x = 0; x <= 12; x++)
	{
		toplam = toplam + x;
	}
	printf("%d", toplam);
}
