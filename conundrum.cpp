#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string line;
    
    getline(cin, line);
    
    int ans = 0;
    for( int i = 0; i < line.size(); i += 3 ){
        if( !(line[i] == 'p') && !(line[i] == 'P')){
            ans++;
        }
        if( !(line[i+1] == 'e') && !(line[i+1] == 'E')){
            ans++;
        }
        if( !(line[i+2] == 'r') && !(line[i+2] == 'R')){
            ans++;
        }
        
    }
    cout << ans;
    
    return 0;
}
