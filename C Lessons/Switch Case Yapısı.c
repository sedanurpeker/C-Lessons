/*
	switch (deðiþken)
	{
		case 1: Ýþlemler; break;
		case 2: Ýþlemler; break;
		case 3: Ýþlemler; break;
		default: Þartlar saðlanmazsa çalýþacak kod bloðu
	}
*/

#include"stdio.h"
main()
{
	int topla, cikar, carp, bol, mod, islem, sayi1, sayi2;
	
	printf("1.Toplama\n2.Cikarma\n3.Carpma\n4.Bolme\n5.Kalan Hesaplama \n Lutfen islemlerden birini seciniz:");
	scanf("%d",& islem);
	
	printf("Birinci sayiyi giriniz:");
	scanf("%d",& sayi1);
	
	printf("Ikinci sayiyi giriniz:(Eger Kalan Hesaplama secenegini sectiyseniz buraya 0 sayisini giriniz.)");
	scanf("%d",& sayi2);
	
	switch (islem)
	{
		case 1:
			{
				topla = sayi1 + sayi2;
				printf("%d", topla);
				break;
			}
			
		case 2:
			{
				cikar = sayi1 - sayi2;
				printf("%d", cikar);
				break;
			}
		
		case 3:
		{
				carp = sayi1 * sayi2;
				printf("%d", carp);;
				break;
		}	
		
		case 4:
			{
				bol = sayi1 / sayi2;
				printf("%d", bol);;
				break;
			}
		
		case 5:
			{
				mod = (sayi1 + sayi2) % 2;
				printf("%d", mod);;
				break;
			}
			
		default:
			{
				printf("Hatali islem secimi yaptiniz.");
			}
	}
	
	
	
	
	
}
