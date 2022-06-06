// Q1 Reverse the array
#include<iostream>
using namespace std;
//Reversing an array
void ReverseArray(int arr[],int start, int end)
{
	while(start < end)
	{
		int temp = arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
void PrintArray(int arr[], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		cout<<arr[i];
	}
}
int main()
{
	int arr[]={1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
    
	//Initial Array
	PrintArray(arr,n);
    
	ReverseArray(arr,0,n-1);
	//Final Array after Reversing
	PrintArray(arr,n);
}
