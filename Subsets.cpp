
#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

typedef vector<int> vi;
#define PB push_back
#define REP(i,a,b) for(i=a; i<b; i++)

const int N=1e5+5;

int32_t main()
{
	IOS;
	 vector<int> subset;
	int n=3;
    for (int b = 0; b < (1<<n); b++) {
   
    for (int i = 0; i < n; i++) {
    if (b&(1<<i)) subset.push_back(i);
}
}
 for(int i=0;i<subset.size();i++)
 cout<<subset[i];

	return 0;
}
