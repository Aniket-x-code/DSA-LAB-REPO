#include<iostream>

using namespace std;

//  function to calculate second minimum element
int SecondSmallest(int *a, int n)
{
	int s, ss, i;
	// A variable 's' keeping track of smallest number.
	s = a[0];
	// A variable 'ss' keeping track of second smallest number.
	ss = a[0];

	// Traverse the data array.
	for(i = 1; i < n; i++)
	{
		// If array element is lesser than current 's' value then update.
		if(s > a[i])
		{
			ss = s;
			s =  a[i];
		}
		// Otherwise the number can be second smallest number so check for the condition and update 'ss'.
		else if(ss > a[i])
		{
			ss = a[i];
		}
	}
	// Return second smallest number.
	return ss;
}

int main()
{
	int n, i;
	cout<<"Enter the number of element in dataset: ";
	cin>>n;

	int a[n];

	for(i = 0; i < n; i++)
	{
		cout<<"Enter "<<i+1<<"th element: ";
		cin>>a[i];
	}
	cout<<"\n\nThe second Smallest number of the given data array is: "<<SecondSmallest(a, n);

	return 0;
}
