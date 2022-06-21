#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<bool> alart(201, false);
    alart[200] = true;

    vector< vector<int> > constraint(10, vector<int>() );
    constraint[0] = {0};
    constraint[1] = {0,1,2,3,4,5,6,7,8,9};
    constraint[2] = {2,3,5,6,8,9,0};
    constraint[3] = {3,6,9};
    constraint[4] = {4,5,6,7,8,9,0};
    constraint[5] = {5,6,8,9,0};
    constraint[6] = {6,9};
    constraint[7] = {7,8,9,0};
    constraint[8] = {8,9,0};
    constraint[9] = {9};

    int num;
    for( int i = 0; i <= 9; i++ ){
        num = i * 10;
        for( int j = 0; j < constraint[i].size(); j++ ){
            alart[num+constraint[i][j]] = true;
            alart[num+100+constraint[i][j]] = true;
            // cout << num << endl;
        }
    }

    for( int i = 0; i <= 9; i++ ){
        alart[i] = true;
    }

    // cout << "hi" << endl;

    int T;
    cin >> T;
    for( int i = 0; i < T; i++ ){
        int t;
        cin >> t;
        for( int j = 0; j < 200; j++ ){
            if( alart[t+j] ){
                cout << t+j << "\n";
                break;
            }
            if( alart[t-j] ){
                cout << t-j << "\n";
                break;
            }
        }
    }

    return 0;
}
