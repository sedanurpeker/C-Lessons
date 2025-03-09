// (5! + 7!) / (9! - 6!)
/*
------------------------ Manuel ------------------------
#include"stdio.h"
main()
{
	int fak1 = 1, fak2 = 1, fak3 = 1, fak4 = 1, i;
	
	for (i = 1; i <= 5; i++)
	{
		fak1 *= i;
	}
	
	for (i = 1; i <= 6; i++)
	{
		fak2 *= i;
	}
	
	for (i = 1; i <= 7; i++)
	{
		fak3 *= i;
	}
	
	for (i = 1; i <= 9; i++)
	{
		fak4 *= i;
	}
	
	printf("%d\n", fak1);
	printf("%d\n", fak2);
	printf("%d\n", fak3);
	printf("%d\n", fak4);
	printf("%lf", double(fak1 + fak3) / (fak4 - fak2));

	
}
*/

// ------------------------ FONKSÝYONLU ------------------------
/*
#include"stdio.h"

int faktoriyel(int sayi)
{
	int i, fak = 1;
	
	for (i = 1; i <= sayi; i++)
	{
		fak *= i;
	}
	return fak;
}

main()
{
	double islem;
	islem = (faktoriyel(5) + faktoriyel(7)) / (faktoriyel(9) - faktoriyel(6));
	printf("%lf", islem);
}
*/


