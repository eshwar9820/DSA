#include <bits/stdc++.h>

using namespace std;

class Solution{
	public:

		int findZeroes(int arr[], int n, int m) {

			int count1=0;
			int i=0;
			int j=0;
			int count0=0;
			while(j<n)
			{
				if(arr[j]==0)
					count0++;
				if(count0>m)
				{
					if(arr[i]==0)
						count0--;
					i++;
				}
				count1=max(count1,j-i+1);
				j++;
			}
			return count1;
		}  
};


int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, i, m;
		cin >> n;
		int arr[n];
		for (i = 0; i < n; i++) {
			cin >> arr[i];
		}
		cin >> m;
		Solution ob;
		auto ans = ob.findZeroes(arr, n, m);
		cout << ans << "\n";
	}
	return 0;
}
