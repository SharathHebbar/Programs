#include <limits.h>
#include <stdio.h>

int min(int x, int y) { return (x < y) ? x : y; }

// Returns minimum number of
// jumps to reach arr[n-1] from arr[0]
int minJumps(int arr[], int n)
{
	// jumps[n-1] will hold the result
	int jumps[n];
    int jump_array[n];
	int i, j;

	if (n == 0 || arr[0] == 0)
		return INT_MAX;

	jumps[0] = 0;

	// Find the minimum number of
	// jumps to reach arr[i]
	// from arr[0], and assign this
	// value to jumps[i]
	for (i = 1; i < n; i++) {
		jumps[i] = INT_MAX;
		for (j = 0; j < i; j++) {
			if (i <= j + arr[j] && jumps[j] != INT_MAX) {
				if(jumps[j]+1<jumps[i])
   {
     jump_array[i] = j;
   }
  jumps[i] = min(jumps[i], jumps[j] + 1);
				break;
			}
		}
	}
 for(i=1;i<n;i++)
   printf("%d=%d\n",i,jump_array[i]);
 printf("\n");
	return jumps[n - 1];
}

// Driver program to test above function
int main()
{
	int arr[] = { 2,3,1,1,4};
	int size = sizeof(arr) / sizeof(int);
	printf("Minimum number of jumps to reach end is %d ",
		minJumps(arr, size));
	return 0;
}