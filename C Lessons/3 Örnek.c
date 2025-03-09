#include"stdio.h"
int main()
{
	/*
1.ÖRNEK
	int kisa, uzun, cevre, alan;
	printf("Kisa kenari giriniz: ");
	scanf("%d",&kisa);
	
	printf("Uzun kenari giriniz: ");
	scanf("%d",&uzun);
	
	cevre = 2 * (kisa + uzun);
	alan = kisa * uzun;
	
	printf("Cevre :%d\n Alan :%d",cevre, alan);
	*/
	
	
	/*
2.ÖRNEK
	double s1, s2, s3, ort;
	printf("Birinci sayiyi giriniz:");
	scanf("%lf",& s1);
	
	printf("Ikinci sayiyi giriniz:");
	scanf("%lf",& s2);
	
	printf("Ucuncu sayiyi giriniz:");
	scanf("%lf",& s3);
	
	ort = (s1 + s2 + s3) / 3;
	
	printf("%lf", ort);
	*/


// 3.ÖRNEK
	float kdv, oran, tutar, fiyat;
	printf("Urunun fiyatini giriniz:");
	scanf("%f",& fiyat);
	
	printf("KDV oranini giriniz:");
	scanf("%f",& oran);
	
	kdv = fiyat * oran / 100;
	tutar = fiyat + kdv;
	
	printf("Urunun tutar:%f", tutar);




}
