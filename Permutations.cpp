#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	sort(arr,arr+n); // sorting the array
	
	  do { cout<<endl;
	    for(int i=0;i<n;i++)
	    cout<<arr[i]<<" ";
	}
	while(next_permutation(arr,arr+n)); // shows next permutation lexicographically
	return 0;
}
