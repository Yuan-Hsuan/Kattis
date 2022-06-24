#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string line;
    
    getline(cin, line);
    
    int ans = 0;
    for( int i = 0; i < line.size(); i++ ){
        
        if( line[i] == 'a' ||
            line[i] == 'e' ||
            line[i] == 'i' ||
            line[i] == 'o' ||
            line[i] == 'u' ||
            line[i] == 'A' ||
            line[i] == 'E' ||
            line[i] == 'I' ||
            line[i] == 'O' ||
            line[i] == 'U' ){
            ans++;
        } 
    }
    cout << ans;
    
    return 0;
}
