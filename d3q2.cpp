#include <bits/stdc++.h>
using namespace std;
class Solution{
	public:
		void pushZerosToEnd(int arr[], int n) {
			int i=0;
			for(int j=0;j<n;j++){
				if(arr[j]!=0){
					int temp = arr[j];
					arr[j]=arr[i];
					arr[i]=temp;
					i++;
				}
			}
		}
};

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, i;
		cin >> n;
		int arr[n];
		for (i = 0; i < n; i++) {
			cin >> arr[i];
		}
		Solution ob;
		ob.pushZerosToEnd(arr, n);
		for (i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
