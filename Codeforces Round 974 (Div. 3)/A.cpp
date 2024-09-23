#include<iostream>
using namespace std;
int main() {
    int t = 0;
    cin>>t;
    while(t--) {
        int n = 0, k = 0;
        cin>>n>>k;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        int gold = 0;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] >= k)
                gold = gold+a[i];
            else if(a[i] == 0 && gold) {
                cnt++;
                gold--;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}