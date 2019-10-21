#include<stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	int aa[5] = {3,5,0};
	int b = aa[0] * aa[1];
	int sign = aa[0] >> 31;
	printf("%d\n", sign);
	int c = aa[0] + sign;
	c = c / 2;
	aa[2] = b - c;
	int d = aa[2];
	printf("%d\n", d);
	system("pause");
	return 0;
}
