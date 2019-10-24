#include<stdio.h>
#include <stdlib.h>
int procl(int* arr, int arg4, int arg8);
void main()
{
	int arg4 = 100,output=0;
	int arr[100];
	int arg8 = 7;
	for (int i = 0; i < arg4; i++)
	{
		arr[i] = i + 1;
		//printf("%d", arr[i]);
	}
	output=procl(arr, arg4, arg8);
	printf("%d", output);
	system("pause");
}
int procl(int* arr, int arg4, int arg8)
{
	int var8 = 0,varC = 0,var10=0,temp=0;
	for (int var4 = 0; var4 < 100; var4++)
	{
		var8 = 1;
		for(var8;var8<arg8;var8++)
		{
			while(arr[varC] == 0)
			{
				temp = varC + 1;
				varC = temp % 100;
				
			}
				temp = varC + 1;
				varC = temp % 100;	//printf("var8=%d\n", var8);
		}
		while (arr[varC] == 0)
		{
			temp = varC + 1;
			varC = temp % 100;
		}

		     var10 = arr[varC];
		     arr[varC] = 0;
			// printf("var10=%d\n", var10);
	}
	return var10;
}
