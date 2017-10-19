#include <iostream>
#include <stdio.h>

using namespace std;

int maxSum(int arr[], int N)
{
    int i , j , max = 0;
    int MSis[N];


    for(i = 0; i<=N; i++)
    {
        MSis[i] = arr[i];
    }
    /* Compute maximum sum values in bottom up manner */
    for(i=1; i < N; i++)
    {
      for(j=0; j < i; j++)
      {
          if(arr[j] < arr[i] && MSis[i] < MSis[j] + arr[i])
            MSis[i] = MSis[j] + arr[i];

      }
    }
    /*Find the max value of array MSis */
    for(i=0; i < N; i++)
    {
        if(max < MSis[i])
            max = MSis[i];
    }
    return max;
}
int main() {
	int arr[] = {1, 101, 2, 3, 100, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Sum of maximum sum increasing subsequence is %d",
           maxSum( arr, n ) );
	return 0;
}
