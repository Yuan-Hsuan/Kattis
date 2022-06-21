#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<long long> list;

    long long num;
    long long prev;
    cin >> prev;
    list.push_back(prev);

    int bit;
    int prevbit = 0;
    long long temp = prev;
    while( temp >= 10 ){
        prevbit++;
        temp /= 10;
    }
    // cout << prevbit << endl;

    bool is_sabotage = false;

    for( int i = 1; i < n; i++ ){
        cin >> num;
        // cout << prevbit << " " << num << endl;
        if( is_sabotage ){
            list.push_back(num);
        }
        else{
            bit = prevbit;
            long long power = 1;
            while( prevbit-- ){
                power *= 10;
            }
            // cout << "power " << power << endl;
            long long temp = num/power;
            // cout << "temp " << temp << endl;

            if( temp >= 10 ){
                while( temp >= 10 ){
                    bit++;
                    temp /= 10;
                }
            }
            else{

                if( temp == 1 || list[i-1] == 0){
                    if( list[i-1]%power + 9*power > num ){
                        list[i-1] = list[i-1]%power + 9*power;
                        is_sabotage = true;
                    }
                }
                else{
                    // cout << "power " << power << endl;
                    if( num + (1-temp)*power < list[i-1] ){
                        num += (1-temp)*power;
                        is_sabotage = true;
                    }
                    
                    // power = pow(10,prevbit);
                    // temp = num % power;
                    // while( temp != 0 ){
                    //     prevbit--;
                    //     power = pow(10,prevbit);
                    //     int highbit = temp / power;
                    //     if( highbit ){
                    //         num -= highbit*power;
                    //         is_sabotage = true;
                    //         break;
                    //     }else{
                    //         temp %= power;
                    //     }
                    // }
                }
                
            }
            list.push_back(num);
            prevbit = bit;
        }
    }

    if( is_sabotage ){
        for( auto ans: list ){
            cout << ans << " ";
        }
    }
    else{
        cout << "impossible";
    }
    
    
    return 0;
    // 1000000000000000
    // 100000000000000
    // 999999999999999
}
