#include"stdio.h"
main()
{
	int derece;
	
	printf("Bir derece giriniz:");
	scanf("%d",& derece);
	
	if (derece <= 0)
	{
		printf("Su bu dercede katidir.");
	}
	
	else if (derece > 0 && derece < 100)
	{
		printf("Su bu dercede sividir.");
	}
	
	else
	{
		printf("Su bu dercede gazdir.");
	}
	
}
