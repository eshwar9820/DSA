#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int spaces = n-1;
        int stars = 1;
        for(int i = 0 ; i < n ;i++ , stars += 2 , spaces--){
            for(int j = 0 ; j < spaces ; j++){
                cout<< " ";
            }
            for(int j = 0; j < stars ;j++){
                cout << "*";
            }
            cout << endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}