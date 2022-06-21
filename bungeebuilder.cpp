#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int ans = 0;

    string line;
    getline(cin, line);
    getline(cin, line);
    stringstream ss (line);

    stack< pair<int,int> > s;
    
    for( int i = 0; i < N; i++ ){
        
        int h;
        ss >> h;
        int bottom = h;

        while( !s.empty() ){
            pair<int,int> temp = s.top();
            s.pop();
            bottom = min(bottom, temp.second);
            if( temp.first > h ){
                s.push( make_pair(temp.first, bottom) );
                ans = max(ans, h - bottom);
                break;
            }
            ans = max(ans, temp.first - bottom);
        }
        s.push( make_pair(h, h) );
    }
    cout << ans;

    return 0;
}
