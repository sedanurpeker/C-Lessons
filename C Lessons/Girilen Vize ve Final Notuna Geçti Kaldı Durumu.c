#include"stdio.h"
main()
{
	int vize, final;
	float ort;
	
	printf("Vize notunuzu giriniz:");
	scanf("%d",& vize);
	
	printf("Final notunuzu giriniz:");
	scanf("%d",& final);
	
	ort = (vize * 0.3) + (final * 0.7);
	
	printf("Ortalama :%f\n", ort);
	
	if(ort > 50 && final > 50)
	{
		printf("Gectiniz.");
	}
	
	else
	{
		printf("Kaldiniz.");
	}
}
