/*
Program to find sum of elements in a given array
*/

#include <stdio.h>

	int arraySum(int arr[], int n)
	{
		int sum = 0;
		for (int i = 0; i < n; i++) // loops n times starting at 0
		{
			sum += arr[i]; // adds every element of the array
		}
		return sum;
	}
		
int main()
{
	int arr[] = { 12, 3, 4, 15 };
	int n = sizeof(arr) / sizeof(arr[0]); // n determined by deviding the total elements by the first elemt of the array.
	printf("The sum of the given array is %d:", arraySum(arr, n));
}





