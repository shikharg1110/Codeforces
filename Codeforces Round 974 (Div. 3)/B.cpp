#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int t = 0;
    cin>>t;
    while(t--) {
        int n = 0, k = 0, j = 0;
        cin>>n>>k;
        double leaf = 0, leaves = 0;
        for(int i = 1; i <= n; i++) {
            leaf = pow(i, i);
            leaves += leaf;
            if(j == k) {
                leaves -= pow(i-k, i-k);
                j = 0;
            }
            else
                j++;
        }
        int l = (int)leaves;
        if(l % 2 == 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}