#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    set<string> parts;
    
    int P, N;
    
    cin >> P >> N;
    
    bool success = false;
    for( int i = 0; i < N; i++ ){
        string temp;
        cin >> temp;
        
        parts.insert(temp);
        
        if( parts.size() == P ){
            success = true;
            cout << i + 1;
            break;
        }
    }
    
    if( !success ){
        cout << "paradox avoided";
    }
    
    
    
    return 0;
}
