#include"stdio.h"
main()
{
	int s1, s2, s3;
	
	printf("Birinci sayiyi giriniz:");
	scanf("%d",& s1);
	
	printf("Ikinci sayiyi giriniz:");
	scanf("%d",& s2);
	
	printf("Ucuncu sayiyi giriniz:");
	scanf("%d",& s3);
	
	if (s1 > s2 && s1 > s3)
	{
		printf("En buyuk sayi ilk girilen sayidir.");
	}
	else if (s2 > s1 && s2 > s3)
	{
		printf("En buyuk sayi ikinci girilen sayidir.");
	}
	else
	{
		printf("En buyuk sayi ucuncu girilen sayidir.");
	}
	
}
