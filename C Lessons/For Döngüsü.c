#include"stdio.h"
int main()
{
/*
	for(d�ng� de�i�keni = ba�lang��; ko�ul; artma veya azalma miktar�)
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
