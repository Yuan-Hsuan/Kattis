#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int P;
    
    cin >> P;
    
    for( int i = 0; i < P; i++ ){
        int K, N;
        cin >> K;
        cout << K << " ";
        cin >> N;
        cout << N + ((N+1)*N)/2 << "\n";
    }
    
    return 0;
}
