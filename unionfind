#include<bits/stdc++.h>
using namespace std;

vector< int > set_list;

int getroot( int num ){
    if( set_list[num] == num )
        return num;
    else{
        return set_list[num] = getroot(set_list[num]);
    } 
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, Q;
    cin >> N >> Q;

    for( int i = 0; i < N; i++ ){
        set_list.push_back(i);
    }
    
    for( int i = 0; i < Q; i++ ){
        char operation;
        int a, b;

        // cout << "set_list" << endl;
        // for( int i = 0; i < N; i++ ){
        //     cout << set_list[i];
        // }
        // cout << endl;

        cin >> operation >> a >> b;

        if( operation == '?' ){
            if( getroot(a) != getroot(b) ){
                cout << "no\n";
            }
            else{
                cout << "yes\n";
            }

        }else{
            int left, right;
            if( a < b ){
                left = a;
                right = b;
            }
            else{
                left = b;
                right = a;
            }

            int root_left = getroot(left);
            int root_right = getroot(right);

            if( root_left != root_right ){
                set_list[root_right] = root_left;
            }

        }
    }

    return 0;
}
