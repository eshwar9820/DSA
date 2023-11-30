#include<bits/stdc++.h>
using namespace std;
void selectionsort(vector<int>& a){
	int ind;//mininimum value's index
	for(int i=0;i<a.size()-1;i++){
		ind = i;
		for(int j=i+1;j<a.size();j++){
			if(a[j]<a[ind]){
				ind = j;
			}
		}
		if(ind!=i){
			swap(a[i],a[ind]);
		}
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
	selectionsort(a);
	cout<<"Array after sorting: \n"; 
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<"\n";
	}
}
