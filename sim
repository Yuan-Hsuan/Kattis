#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    string line;
    getline(cin, line);
    
    
    for( int i = 0; i < T; i++ ){
        
        getline(cin, line);
        stringstream ss(line);

        list<char> ans;
        list<char>::iterator it = ans.begin();
        int index = 0;
        bool is_pushback = true;

        while(1){
            char c;
            ss >> noskipws >> c;
            if( !ss ) break;
            
            if( c == ']'){
                is_pushback = true;
                it = ans.end();
                // cout << "] " << distance(ans.begin(), it) << endl;
            }
            else if( c == '[' ){
                is_pushback = false;
                it = ans.begin();
                // cout << "[ " << distance(ans.begin(), it) << endl;
            }
            else if( c == '<' ){
                if( it != ans.begin() ){
                    if( it == ans.end() ){
                        ans.pop_back();
                        // cout << "erase " << distance(ans.begin(), it) << endl;
                    }
                    else{
                        --it;
                        // cout << "Before erase " << distance(ans.begin(), it)  << " " << (*it) << endl;
                        it = ans.erase( it );
                        // cout << "erase " << distance(ans.begin(), it) << endl;
                    }
                    
                }
            }
            else{
                if( is_pushback ){
                    ans.push_back( c );
                    // cout << "push " << distance(ans.begin(), it) << " " << c << endl;
                }
                else{
                    ans.insert(it, c);
                    // cout << "push " << distance(ans.begin(), it) << " " << c << endl;
                }
                
            }
        }
        for( auto e : ans ){
            cout << e;
        }
        
        cout << "\n";
        // cout << ans[2];
    }

    return 0;
}
