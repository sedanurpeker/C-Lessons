/* Önden ve sondan arttýrma, azaltma oparatörü

deðiþken++ : sondan arttýrma
deðiþken-- : sondan azaltma
++deðiþken : önden arttýrma
--deðiþken : önden azaltýrma

*/

#include"stdio.h"
int main()
{
	int a = 10, b = 4, c = 23, d, e = 19, f, g = 37;
	a = a + 1;
	b += 3; 
	c++;
	d = e++;
	f = g-- + c;
	
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d\n", e);
	printf("%d\n", f);
	printf("%d\n", g);
	
	
}
