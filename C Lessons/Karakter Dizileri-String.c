/*
	karakter = 'N';
	karakter dizisi veya string = charray[15] = {'A', 'B', 'C', 'D'}
	int sayiDizisi[] = {15, 256, 1520, 65}
	char stringDizi[dizi_eleman_sayisi][karakter_sayýsý] = {"Ali", "Veli", "Mehmet"}
*/

#include"stdio.h"
main()
{
//	char karakter = 'A';
//	printf("%c", karakter);
	
	
//	char kDizi[] = {'L', 'o', 'v', 'e'};
//	printf("%s", kDizi);
	
	
//	char kDizi2[] = {"Love"};
//	printf("%s", kDizi2);
	
	
	int i;
//	for (i = 0; i < 5; i++)
//		printf("%c", kDizi2[i]);


//	char kDizi[20];
//	printf("Adinizi ve Soyadinizi Giriniz: ");
//	scanf("%s", kDizi);          Boþluða kadar yazar boþluktan sonradýný yazmaz yazmasý gets() ifadesi kullanlýlýr.
//	gets(kDizi);	
//	printf("%s", kDizi);
	
	
//	char sDizi[3][15] = {"Ali", "Veli", "Mehmet"};
//	printf("%c\n", sDizi[1][0]);
//	printf("%s\n", sDizi[1]);
//	for (i = 0; i < 3; i++)
//		printf("%s ", sDizi[i]);
	
	
	char sDizi[3][15];
	for (i = 0; i < 3; i++)
	{
		printf("Isim giriniz: ");
		gets(sDizi[i]);
	}
	
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", sDizi[i]);
	}
	
}
