#include"stdio.h"
#define PI 3.14

double cevre_hesapla(double yaricap)
{
	double cevre;
	
	cevre = 2 * PI * yaricap;
	return cevre;
}

double alan_hesapla(double yaricap)
{
	double alan;
	
	alan = PI * (yaricap * yaricap);
	return alan;
}
main()
{
	double r, alan, cevre;
	
	printf("Yaricapi giriniz: ");
	scanf("%lf",& r);
	
	cevre = cevre_hesapla(r);
	alan =alan_hesapla(r);
	
	printf("%lf\n", cevre);
	printf("%lf", alan);
}
