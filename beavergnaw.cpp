#include<bits/stdc++.h>

# define M_PI           3.14159265

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
	double D, V;
    while(cin >> D && cin >> V) {

		if( D == 0 && V == 0 ){
			break;
		}

        double shape = ( pow(D/2, 2) * D * 2 / 3 * M_PI - V ) * 1.5;

        double r = pow((shape / (2 * M_PI)), (1.0/3));

        cout << fixed << setprecision(9) << r * 2 << endl;
    }
    
    return 0;
}

