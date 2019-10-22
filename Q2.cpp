#include<stdio.h>
#include <stdlib.h>
void compute_max(int* arr);
void add(int *arr)
{
	arr[9]=arr[9] + 1;
	compute_max(arr);
}
void findlocalmax(int *arr)
{
	int count = arr[9];
	if (arr[count] <= arr[8])
		add(arr);
	else
	{
		arr[8] = arr[count];
		add(arr);
	}

}
void compute_max(int* arr)
{
	if (arr[9] <= 7)
		findlocalmax(arr);
	else
		printf("%d", arr[8]);
}
void main()
{
	int arr[10] = { 0x0C,0x0F,0xDD,3,0x1B0,0x36,0x10,0x43,0,0 };
	compute_max(arr);
	system("pause");
}
