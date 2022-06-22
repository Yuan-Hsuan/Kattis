#include<bits/stdc++.h>

# define M_PI           3.14159265

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
	int N;

	cin >> N;

	int ans = 1;
	int layer = 0;
	int total = 1;
	while( 1 ){
		if( N < total ){
			break;
		}
		else{
			ans += 2;
			layer++;
			total += ans*ans;
		}
	}

	cout << layer;
    
    return 0;
}

