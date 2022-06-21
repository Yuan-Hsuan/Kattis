#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
	int N;
    char trump;

    cin >> N;
    cin >> trump;

    char num;
    char suit;

    int ans = 0;

    for( int i = 0; i < N*4; i++){
		cin >> num;
		cin >> suit;
        if(suit == trump) {
			switch(num) {
				case 'A':
					ans += 11;
					break;
				case 'K':
					ans += 4;
					break;
				case 'Q':
					ans += 3;
					break;
				case 'J':
					ans += 20;
					break;
				case 'T':
					ans += 10;
					break;
				case '9':
					ans += 14;
					break;
				default:
					break;
			}
        }
        else {
            switch(num) {
				case 'A':
					ans += 11;
					break;
				case 'K':
					ans += 4;
					break;
				case 'Q':
					ans += 3;
					break;
				case 'J':
					ans += 2;
					break;
				case 'T':
					ans += 10;
					break;
				default:
					break;
			}
        }
		// cout << ans << endl;
    }

    cout << ans;
    
    return 0;
}

