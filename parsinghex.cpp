#include<bits/stdc++.h>
using namespace std;

void toint( string hex, int hexlen ){
    int deg = 0;
    long long num = 0;
    for( int i = hexlen-1; i >= 0; i-- ){
        if( hex[i] <= 'F' && hex[i] >= 'A' ){
            num += (hex[i] - 'A' + 10) * pow(16, deg);
        }
        else if( hex[i] <= 'f' && hex[i] >= 'a' ){
            num += (hex[i] - 'a' + 10) * pow(16, deg);
        }
        else{
            num += (hex[i] - '0') * pow(16, deg);
        }
        deg++;
    }
    cout << num << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;
    while( getline(cin, str) ){
        auto lower = str.find("0x");
        auto upper = str.find("0X");
        // cout << "lower" << lower << endl;
        // cout << "upper" << upper << endl;

        while( 1 ){
            int hexlen = 0;


            if( lower < upper && lower != string::npos ){
                // cout << "findlower " << lower << endl;
                
                lower +=2;

                string::iterator itr = str.begin() + lower;

                while(  (
                    ((*itr) <= 'F' && (*itr) >= 'A') ||
                    ((*itr) <= 'f' && (*itr) >= 'a') ||
                    ((*itr) <= '9' && (*itr) >= '0') ) ){
                    itr++;
                    hexlen++;
                }

                string hex = str.substr( lower, hexlen );
                cout << "0x" << hex << " ";
                toint(hex, hexlen);

                int end = lower + hexlen;
                lower = str.find("0x", end);
                upper = str.find("0X", end);
                // cout << "lower " << lower << endl;
                // cout << "upper " << upper << endl;
            }
            else if( lower > upper && upper != string::npos ){
                // cout << "findupper " << upper << endl;

                upper +=2;

                string::iterator itr = str.begin() + upper;

                while( (
                    ((*itr) <= 'F' && (*itr) >= 'A') ||
                    ((*itr) <= 'f' && (*itr) >= 'a') ||
                    ((*itr) <= '9' && (*itr) >= '0') ) ){
                    itr++;
                    hexlen++;
                }

                string hex = str.substr( upper, hexlen );
                cout << "0X" << hex << " ";
                toint(hex, hexlen);

                int end = upper + hexlen;
                lower = str.find("0x", end);
                upper = str.find("0X", end);
                // cout << "lower " << lower << endl;
                // cout << "upper " << upper << endl;
            }
            else{
                break;
            }
        }
    }
    return 0;
}
