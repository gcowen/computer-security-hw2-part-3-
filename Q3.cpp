#include<stdio.h>
#include <stdlib.h>

void main()
{
	int a1ch = 100;
	int b18h, c14h, d10h;

	for (int i = a1ch; i <= 999; i++)
	{
		b18h = i / 100;
		c14h = (i - (100*b18h)) / 10;
		d10h = i - (((i / 10) * 4 + (i / 10)) * 2);

		if (b18h*b18h*b18h + c14h * c14h*c14h + d10h * d10h*d10h == i){
			printf("%d\n", i);
		}
	}
	system("pause");
}
