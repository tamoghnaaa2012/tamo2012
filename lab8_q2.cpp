/* program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)*/

//define library
#include<iostream>
using namespace std;
 
//declare the function to have the largest element
int large(int arr[],int t)

{
		int n = arr[0];
		for (int i=1;i<1;i++)
		{				
			if n<arr[i]
			{ n = arr[i];
		 	  cout<< n;
			}
			else
			{
			  cout<<n
         }	
		 }
			cout<< "the largest element is"<< n << endl;
} 

//declare the function to have the smallest element
int min(int arr[],int t)

{ 
		int n = arr[0];
		for (int i=1;i<1;i++)
		{
			if n>arr[i]
			{ n = arr[i]
			  cout<< n;
			}
			else 
			{ 
			  cout<< n
			}
		}
			 cout << "Good news the smallest element is" << n << endl;
}

//declare the function to have the mean value of given elements
int mean(int arr[], int t)

{
