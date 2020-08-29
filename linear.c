#include <stdio.h>
#include <conio.h>

int search(int a[], int n)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (a[i] == n)
		{
			return i;
		}
	}
	return -1;
}

void main(void)
{
	int x, i;
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	printf("Enter the number to be searched: ");
	scanf("%d", &x);

	i = search(a, x);

	if (i != -1)
	{
		printf("The number %d is present at the index %d", x, i);
	}
	else
	{
		printf("The number is not present in the array");
	}
}