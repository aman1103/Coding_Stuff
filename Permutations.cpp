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

// OR
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{ int n,x;
cin>>n;
    vector<int> permutation;
for (int i = 0; i < n; i++) {
    cin>>x;
permutation.push_back(x);
}
sort(permutation.begin(),permutation.end());
do {
    for(int j=0;j<n;j++)
    cout<<permutation[j]<<" ";
    cout<<endl;
} while (next_permutation(permutation.begin(),permutation.end()));
}
