#include<iostream>
using namespace std;
void swap(int* num1, int* num2) 
{ 
	int temp = *num1; 
	*num1 = *num2; 
	*num2 = temp; 
}
int divide(int A[], int low, int high) 
	{
		int pivot = A[high];
    	int i = (low - 1);
    	for (int j = low; j <= high- 1; j++) 
    	{ 
     	    if (A[j] <= pivot) 
            { 
                i++; 
			    swap(&A[i],&A[j]);
        	} 
    	} 
        swap(&A[i+1],&A[high]);
        return (i + 1); 
	}
    void quickSort(int A[], int low, int high)
	{
    	if (low < high) 
   	 	{ 
       		int p = divide(A,low,high); 
    		quickSort(A, low, p - 1); 
    		quickSort(A, p + 1, high); 
		} 
	}
int main()
{
int n;
cout<<"Enter nubers of element to be sorted"<<endl;
cin>>n;
int a[n];
cout<<"Enter the elements"<<endl;
for(int i=0;i<n;i++)
cin>>a[i];
quickSort(a,0,n);
cout<<"sorted list"<<endl;
for(int i=0;i<n;i++)
cout<<a[i]<<endl;
}