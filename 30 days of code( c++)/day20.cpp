#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    // Write Your Code Here
    int no_of_swaps=0;
    for(auto i=0;i<n;i++) {
        // to store swaps in current iteration
        int temp=0;
        for(auto j=0;j<n-1-i; j++) {
            if(a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
                temp++;
            }
        }
        if(temp==0) {
            // array already sorted
            break;
        }
        no_of_swaps+=temp;
    }
    cout<<"Array is sorted in "<<no_of_swaps<<" swaps."<<endl;
    cout<<"First Element: "<<*a.begin()<<endl;
    cout<<"Last Element: "<<*a.rbegin();
    return 0;
}