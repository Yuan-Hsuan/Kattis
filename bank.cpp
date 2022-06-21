#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, T;
    cin >> N >> T;

    long long ans = 0;
    vector< pair<int,int> > people;

    for( int j = 0; j < N; j++ ){
        int c;
        int t;
        cin >> c >> t;
        people.push_back(make_pair(t, c));
    }

    sort(people.begin(), people.end());
    
    priority_queue<int> avaliable;

    int index = N-1;
    for( int i = T-1; i >= 0; i-- ){

        while( index >= 0 && people[index].first >= i ){
            avaliable.push(people[index].second);
            // cout << people[index].second << endl;
            index--;
        }

        if( !avaliable.empty() ){
            ans += avaliable.top();
            // cout << "top " << avaliable.top() << endl;
            avaliable.pop();
        }
    }
    cout << ans;

    return 0;
}
