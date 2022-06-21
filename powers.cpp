#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long a, b;
    cin >> a >> b;

    long long ans;

    //odd
    if( a % 2 ){
        cout << 0;
    }
    else{
        ans = a/2;
        for( int i = 1; i < b; i++ ){
            ans *= ans;
            ans %= a;
            // cout << ans << endl;
        }
        cout << ans;
    }
}
