#include <iostream>
using namespace std;
  
int largest(int arr[], int n) 
{ 
    int i; 
    int max = arr[0]; 
  
    for (i = 1; i < n; i++) 
        if (arr[i] > max) 
            max = arr[i]; 
  
    return max; 
} 

int main() 
{ 
    int a[20],i,n ; 
    cout<<"enter the no. of elements";
	cin>>n;
	cout<<"enter the elements";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
    cout << "Largest in given array is " 
         << largest(a, n); 
    return 0; 
} 