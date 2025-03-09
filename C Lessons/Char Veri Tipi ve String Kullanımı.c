#include "stdio.h"
#include "locale.h"
main(){
	setlocale(LC_ALL,"Turkish");
	char harf1 = 'a';
	printf("%c\n",harf1);
	printf("%d\n", harf1);
	
	char harf2 = 'KodTek';
	printf("%c\n",harf2);
	printf("%d\n", harf2);
	
	char harf3[10] = "KodTek";
	printf("%s\n",harf3);
	printf("%d\n", harf3);
}
