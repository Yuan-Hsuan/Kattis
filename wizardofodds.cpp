#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string N;
    cin >> N;
    vector<int> IntN;
    for( int i = N.size() - 1; i >= 0; i-- ){
        IntN.push_back(N[i]-'0');
        // cout << IntN.back() << endl;
    }

    string K;
    cin >> K;
    vector<int> IntK;
    for( int i = K.size() - 1; i >= 0; i-- ){
        IntK.push_back(K[i]-'0');
        // cout << IntK.back() << endl;
    }

    vector<int> exponent;
    exponent.push_back(1);
    int power = 1;
    for( int i = 0; i < IntK.size(); i++ ){
        // cout << "i " << i << endl;
        int counter = power*IntK[i];
        for( int j = 0; j < counter; j++ ){
            // cout << "j " << j << endl;
            //*2
            int carry = 0;
            for( int f = 0; f < exponent.size(); f++ ){
                exponent[f] *= 2;
                exponent[f] += carry;
                carry = exponent[f] / 10;
                exponent[f] %= 10;
            }

            //overflow
            while( carry > 0 ){
                exponent.push_back( carry % 10 );
                carry /= 10;
            }
            
            //print
            // for( int f = exponent.size() - 1; f >= 0; f-- ){
            //     cout << exponent[f];
            // }
            // cout << endl;
        }
        power *= 10;
    }

    if(IntN.size() > exponent.size()){
        cout << "You will become a flying monkey!";
    }
    else if(IntN.size() < exponent.size()){
        cout << "Your wish is granted!";
    }
    else{
        for( int i = exponent.size() - 1; i >= 0; i-- ){
            if( IntN[i] > exponent[i] ){
                cout << "You will become a flying monkey!";
                return 0;
            }
            else if( IntN[i] < exponent[i] ){
                cout << "Your wish is granted!";
                return 0;
            }
        }
        cout << "Your wish is granted!";
    }
}
