#include <stdio.h>

void print_array(int *a, int n)
{
	if (n <= 0)
	{
		printf("\n");
		return;
	}

	printf("%d", a[0]);

	for (int i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}

	printf("\n");
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = 5;

	printf("Array elements: ");
	print_array(arr, n);

	return (0);
}

