#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<char> vowels = {'A','E','I','O','U'};
    vector<int> index;
    vector<int> type;

    string word;
    getline( cin, word );

    stringstream ss(word);

    bool has_L = false;

    int index_i = 0;
    while( 1 ){
        char c;
        ss >> c;
        if( !ss ) break;
        if( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ){
            type.push_back(0);
        }else if( c == '_' ){
            type.push_back(2);
            index.push_back(index_i);
        }else{
            if( c == 'L' )
                has_L = true;
            type.push_back(1);
        }
        index_i++;
    }


    int bitwise;

    if(has_L)
        bitwise = 0;
    else
        bitwise = 1;
        
    // cout << "has_L" << has_L << endl;

    long long ans = 0;
    for( ; bitwise < pow(2,index.size()); bitwise++ ){

        long long choice = 1;
        int counter_L = 0;
        for( int i = 0; i < index.size(); i++ ){
            int mask = 1 << i;
            int masked = mask & bitwise;
            int bit = masked >> i;
            type[index[i]] = bit;
            if( bit == 0 ){
                choice *= 5;
            }
            else{
                counter_L++;
            }
        }

        long long permutation = pow(21, counter_L-1);
        long long choice_L = 0;
        for( int i = 1; i <= counter_L; i++ ){
            permutation *= (counter_L - i + 1);
            permutation /= i;
            choice_L += permutation * pow( -1, (i-1) );
            // cout << "permutation " << permutation << endl;
            permutation /= 21;
        }
        
        if( !has_L )
            choice *= choice_L;
        else{
            choice *= pow(21, counter_L);
        }
            

        int counter_0 = 0;
        int counter_1 = 0;
        int prev = 2;
        bool success = true;
        for( int i = 0; i < type.size(); i++ ){
            // cout << type[i];
            // cout << "counter_0 " << counter_0 << endl;
            // cout << "counter_1 " << counter_1 << endl;
            if( type[i] == 0 ){
                counter_0++;
            }
            else if( type[i] == 1 ){
                counter_1++;
            }
            if( i >= 3 ){
                prev = type[i-3];
            }
            if( prev == 0 ){
                counter_0--;
            }
            else if( prev == 1 ){
                counter_1--;
            }

            if( counter_0 == 3 || counter_1 == 3 ){
                success = false;
                break;
            }
        }
        // cout << endl;
        // cout << choice << endl;
        if( success ){
            ans += choice;
        }
    }
    cout << ans;

}
