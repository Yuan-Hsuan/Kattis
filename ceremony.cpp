#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> heights;
    heights.resize(1000001, 0);

    for( int i = 0; i < n; i++ ){
        int height;
        cin >> height;
        heights[height]++;
    }

    vector<pair<int,int> > towers;

    int size = n;
    int ans = 0;
    for( int i = 1000000; i > n; i-- ){
        size -= heights[i];
        ans += heights[i];
    }

    for( int i = n; i > 0; i-- ){
        if( heights[i] != 0 ){
            towers.push_back(make_pair(i, heights[i]));
        }
    }

    // // after group
    // for( int i = 0; i < towers.size(); i++ ){
    //     cout << "tower " << towers[i].first << " count " << towers[i].second << endl;
    // }
    // cout << size << endl;
    // return 0;
    
    
    while( size > 0 ){
        // cout << "size" <<size << endl;
        // for( int i = 0; i < towers.size(); i++ ){
        //     cout << "tower " << towers[i].first << " count " << towers[i].second << endl;
        // }
        if( towers.front().first >= size ){
            size -= towers.front().second;
            ans += towers.front().second;
            towers.erase(towers.begin());
        }
        else{
            for( vector<pair<int,int>>::iterator itr = towers.begin(); itr != towers.end(); itr++ ){
                (*itr).first--;
            }
            if( towers.back().first == 0 ){
                size -= towers.back().second;
                towers.pop_back();
            }
            ans++;
        }
    }

    cout << ans;
    return 0;
}
