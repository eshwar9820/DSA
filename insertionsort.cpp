#include<bits/stdc++.h>
using namespace std;
void selectionsort(vector<int> &a){
	int key,j;
	for (int i = 1; i < n; i++) {
		key = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = key;
	}	    
}
int main(){
	vector<int> a;
	cout<<"Enter the size of the array: ";
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int d;
		cin>>d;
		a.push_back(d);
	}
	insertionsort(a);
	cout<<"Array after sorting: \n";
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<"\n";
	}
}
