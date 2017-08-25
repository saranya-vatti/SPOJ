//http://www.geeksforgeeks.org/counting-inversions/
#include<stdio.h>
#include<stdlib.h>
#define MAX 200000
unsigned long long int  _mergeSort(unsigned long long int arr[], unsigned long long int temp[], unsigned long long int left, unsigned long long int right);
unsigned long long int merge(unsigned long long int arr[], unsigned long long int temp[], unsigned long long int left, unsigned long long int mid, unsigned long long int right);
void func(unsigned long long int n);
  
/* This function sorts the input array and returns the
   number of inversions in the array */
unsigned long long int mergeSort(unsigned long long int arr[], unsigned long long int array_size)
{
    unsigned long long int *temp = (unsigned long long int *)malloc(sizeof(unsigned long long int)*array_size);
    return _mergeSort(arr, temp, 0, array_size - 1);
}
unsigned long long int main(){
	unsigned long long int t,n;
	scanf("%llu",&t);
	while(t--){
		scanf("%llu",&n);
		func(n);
	}
	return (0);
}
void func(unsigned long long int n){
	unsigned long long int A[n],i;
	for(i=0;i<n;i++)
		scanf("%llu",&A[i]);
	printf("%llu\n",mergeSort(A, n));
}
/* An auxiliary recursive function that sorts the input array and
  returns the number of inversions in the array. */
unsigned long long int _mergeSort(unsigned long long int arr[], unsigned long long int temp[], unsigned long long int left, unsigned long long int right)
{
  unsigned long long int mid, inv_count = 0;
  if (right > left)
  {
    /* Divide the array into two parts and call _mergeSortAndCountInv()
       for each of the parts */
    mid = (right + left)/2;
  
    /* Inversion count will be sum of inversions in left-part, right-part
      and number of inversions in merging */
    inv_count  = _mergeSort(arr, temp, left, mid);
    inv_count += _mergeSort(arr, temp, mid+1, right);
  
    /*Merge the two parts*/
    inv_count += merge(arr, temp, left, mid+1, right);
  }
  return inv_count;
}
/* This funt merges two sorted arrays and returns inversion count in
   the arrays.*/
unsigned long long int merge(unsigned long long int arr[], unsigned long long int temp[], unsigned long long int left, unsigned long long int mid, unsigned long long int right)
{
  unsigned long long int i, j, k;
  unsigned long long int inv_count = 0;
  
  i = left; /* i is index for left subarray*/
  j = mid;  /* i is index for right subarray*/
  k = left; /* i is index for resultant merged subarray*/
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
  
     /*this is tricky -- see above explanation/diagram for merge()*/
      inv_count = inv_count + (mid - i);
    }
  }
  
  /* Copy the remaining elements of left subarray
   (if there are any) to temp*/
  while (i <= mid - 1)
    temp[k++] = arr[i++];
  
  /* Copy the remaining elements of right subarray
   (if there are any) to temp*/
  while (j <= right)
    temp[k++] = arr[j++];
  
  /*Copy back the merged elements to original array*/
  for (i=left; i <= right; i++)
    arr[i] = temp[i];
  
  return inv_count;
}
