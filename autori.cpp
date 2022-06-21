#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string line;
    cin >> line;

    cout << line[0];

    for( int i = 1; i < line.length(); i++ ){
       if( line[i] == '-' ){
            cout << line[i+1];
       }
    }

    return 0;
}
