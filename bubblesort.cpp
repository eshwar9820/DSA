#include<bits/stdc++.h>
using namespace std;
void bubblesort(vector<int>& a){
	bool swapped;
	for(int i=0;i<a.size()-1;i++){
		swapped=false;
		for(int j=0;j<a.size()-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				swapped=true;
			}
		}
		if(swapped==false){
			break;
		}
	}
}
int main(){
	vector<int> a;
	cout<<"Enter array size: ";
	int n;
	cin>>n;
	cout<<"Enter the elements of the array: \n";
	for(int i=0;i<n;i++){
		int d;
		cin>>d;
		a.push_back(d);
	}
	bubblesort(a);
	cout<<"Array after sorting: \n";
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<endl;
	}
}
