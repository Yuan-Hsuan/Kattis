#include<bits/stdc++.h>

using namespace std;
#define N 200
#define length (long long)10e17

struct BigInt{
    long long first;
    long long second;
    long long third;
    long long fourth;
    long long fifth;
    long long sixth;
    long long seventh;
    long long eighth;
    long long ninth;
    long long tenth;
    long long eleven;
    long long twelve;
    long long thirth;
    long long fourteen;
    long long fifteen;
};

vector< vector<BigInt> > matrix( N, vector<BigInt>( N ) );
vector< pair<int,int> > func;
long long c, d;

BigInt addBigInt( BigInt num1, BigInt num2 ){
    BigInt sum;
    //first
    long long temp = (num1.first + num2.first);
    sum.first = temp % length;
    long long carry = temp / length;

    //second
    temp = carry + num1.second + num2.second;
    sum.second = temp % length;
    carry = temp / length;

    //third
    temp = carry + num1.third + num2.third;
    sum.third = temp % length;
    carry = temp / length;

    //fourth
    temp = carry + num1.fourth + num2.fourth;
    sum.fourth = temp % length;
    carry = temp / length;

    //fifth
    temp = carry + num1.fifth + num2.fifth;
    sum.fifth = temp % length;
    carry = temp / length;

    //sixth
    temp = carry + num1.sixth + num2.sixth;
    sum.sixth = temp % length;
    carry = temp / length;

    //seventh
    temp = carry + num1.seventh + num2.seventh;
    sum.seventh = temp % length;
    carry = temp / length;

    //eighth
    temp = carry + num1.eighth + num2.eighth;
    sum.eighth = temp % length;
    carry = temp / length;

    //ninth
    temp = carry + num1.ninth + num2.ninth;
    sum.ninth = temp % length;
    carry = temp / length;

    //tenth
    temp = carry + num1.tenth + num2.tenth;
    sum.tenth = temp % length;
    carry = temp / length;

    //eleven
    temp = carry + num1.eleven + num2.eleven;
    sum.eleven = temp % length;
    carry = temp / length;

    //twelve
    temp = carry + num1.twelve + num2.twelve;
    sum.twelve = temp % length;
    carry = temp / length;

    //thirth
    temp = carry + num1.thirth + num2.thirth;
    sum.thirth = temp % length;
    carry = temp / length;

    //fourteen
    temp = carry + num1.fourteen + num2.fourteen;
    sum.fourteen = temp % length;
    carry = temp / length;

    //fourteen
    sum.fifteen = carry + num1.fifteen + num2.fifteen;

    return sum;
}

BigInt dp( int x, int y ){
    // cout << "enter dp x " << x << " y " << y << " " << matrix[x][y] << endl;
    if( matrix[x][y].first != -1 ){
        // cout << "return x " << x << " y " << y << " " << matrix[x][y] << endl;
        return matrix[x][y];
    }
    else{
        matrix[x][y].first = c;
        // cout << "Before ++ " << c << " " << matrix[x][y] << endl;
        for( auto& pair: func ){
            matrix[x][y] = addBigInt( matrix[x][y], dp(x-pair.first, y-pair.second) );
            // cout << "++ " << matrix[x][y];
        }
        // cout << "return x " << x << " y " << y << " " << matrix[x][y] << endl;
        return matrix[x][y];
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    string str;
    getline( cin, str );

    for( int count = 0; count < n; count++ ){
        
        getline( cin, str );
        istringstream strstr(str);
        
        func.clear();
        int pair = 0;
        while( strstr ){
            int a, b;
            strstr >> a >> b;
            c = a;
            d = b;
            if( !strstr ) break;
            // cout << "a " << a << " b " << b << endl;
            func.push_back(make_pair(a,b));
            pair++;
        }

        func.pop_back();
        // cout << "c " << c << " d " << d << endl;

        // initial
        for( int i = 0; i < N/2+1; i++ ){
            for( int j = 0; j < N; j++ ){
                matrix[i][j].first = d;
                matrix[i][j].second = 0;
                matrix[i][j].third = 0;
                matrix[i][j].fourth = 0;
                matrix[i][j].fifth = 0;
                matrix[i][j].sixth = 0;
                matrix[i][j].seventh = 0;
                matrix[i][j].eighth = 0;
                matrix[i][j].ninth = 0;
                matrix[i][j].tenth = 0;
                matrix[i][j].eleven = 0;
                matrix[i][j].twelve = 0;
                matrix[i][j].thirth = 0;
                matrix[i][j].fourteen = 0;
                matrix[i][j].fifteen = 0;
            }
        }
        for( int i = N/2+1; i < N; i++ ){
            for( int j = 0; j < N/2+1; j++ ){
                matrix[i][j].first = d;
                matrix[i][j].second = 0;
                matrix[i][j].third = 0;
                matrix[i][j].fourth = 0;
                matrix[i][j].fifth = 0;
                matrix[i][j].sixth = 0;
                matrix[i][j].seventh = 0;
                matrix[i][j].eighth = 0;
                matrix[i][j].ninth = 0;
                matrix[i][j].tenth = 0;
                matrix[i][j].eleven = 0;
                matrix[i][j].twelve = 0;
                matrix[i][j].thirth = 0;
                matrix[i][j].fourteen = 0;
                matrix[i][j].fifteen = 0;
            }
            for( int j = N/2+1; j < N; j++ ){
                matrix[i][j].first = -1;
                matrix[i][j].second = 0;
                matrix[i][j].third = 0;
                matrix[i][j].fourth = 0;
                matrix[i][j].fifth = 0;
                matrix[i][j].sixth = 0;
                matrix[i][j].seventh = 0;
                matrix[i][j].eighth = 0;
                matrix[i][j].ninth = 0;
                matrix[i][j].tenth = 0;
                matrix[i][j].eleven = 0;
                matrix[i][j].twelve = 0;
                matrix[i][j].thirth = 0;
                matrix[i][j].fourteen = 0;
                matrix[i][j].fifteen = 0;
            }
        }
        
        // cout << endl << "After initial" << endl;
        // for( int i = 0; i < N; i++ ){
        //     for( int j = 0; j < N; j++ ){
        //         cout << matrix[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        // output
        getline( cin, str );
        istringstream pairs(str);
        while( 1 ){
            int x, y;
            pairs >> x >> y;
            if( !pairs ) break;
            // cout << "x " << x + (N/2) << " y " << y + (N/2) << endl;
            BigInt ans = dp( x + (N/2) ,y + (N/2) );
            if( ans.fifteen != 0 ){
                // cout << 150;
                cout << ans.fifteen;
                cout << setfill('0') << setw(18) << ans.fourteen;
                cout << setfill('0') << setw(18) << ans.thirth;
                cout << setfill('0') << setw(18) << ans.twelve;
                cout << setfill('0') << setw(18) << ans.eleven;
                cout << setfill('0') << setw(18) << ans.tenth;
                cout << setfill('0') << setw(18) << ans.ninth;
                cout << setfill('0') << setw(18) << ans.eighth;
                cout << setfill('0') << setw(18) << ans.seventh;
                cout << setfill('0') << setw(18) << ans.sixth;
                cout << setfill('0') << setw(18) << ans.fifth;
                cout << setfill('0') << setw(18) << ans.fourth;
                cout << setfill('0') << setw(18) << ans.third;
                cout << setfill('0') << setw(18) << ans.second;
                cout << setfill('0') << setw(18) << ans.first << "\n";
            }
            else if( ans.fourteen != 0 ){
                // cout << 140;
                cout << ans.fourteen;
                cout << setfill('0') << setw(18) << ans.thirth;
                cout << setfill('0') << setw(18) << ans.twelve;
                cout << setfill('0') << setw(18) << ans.eleven;
                cout << setfill('0') << setw(18) << ans.tenth;
                cout << setfill('0') << setw(18) << ans.ninth;
                cout << setfill('0') << setw(18) << ans.eighth;
                cout << setfill('0') << setw(18) << ans.seventh;
                cout << setfill('0') << setw(18) << ans.sixth;
                cout << setfill('0') << setw(18) << ans.fifth;
                cout << setfill('0') << setw(18) << ans.fourth;
                cout << setfill('0') << setw(18) << ans.third;
                cout << setfill('0') << setw(18) << ans.second;
                cout << setfill('0') << setw(18) << ans.first << "\n";
            }
            else if( ans.thirth != 0 ){
                // cout << 130;
                cout << ans.thirth;
                cout << setfill('0') << setw(18) << ans.twelve;
                cout << setfill('0') << setw(18) << ans.eleven;
                cout << setfill('0') << setw(18) << ans.tenth;
                cout << setfill('0') << setw(18) << ans.ninth;
                cout << setfill('0') << setw(18) << ans.eighth;
                cout << setfill('0') << setw(18) << ans.seventh;
                cout << setfill('0') << setw(18) << ans.sixth;
                cout << setfill('0') << setw(18) << ans.fifth;
                cout << setfill('0') << setw(18) << ans.fourth;
                cout << setfill('0') << setw(18) << ans.third;
                cout << setfill('0') << setw(18) << ans.second;
                cout << setfill('0') << setw(18) << ans.first << "\n";
            }
            else if( ans.twelve != 0 ){
                // cout << 120;
                cout << ans.twelve;
                cout << setfill('0') << setw(18) << ans.eleven;
                cout << setfill('0') << setw(18) << ans.tenth;
                cout << setfill('0') << setw(18) << ans.ninth;
                cout << setfill('0') << setw(18) << ans.eighth;
                cout << setfill('0') << setw(18) << ans.seventh;
                cout << setfill('0') << setw(18) << ans.sixth;
                cout << setfill('0') << setw(18) << ans.fifth;
                cout << setfill('0') << setw(18) << ans.fourth;
                cout << setfill('0') << setw(18) << ans.third;
                cout << setfill('0') << setw(18) << ans.second;
                cout << setfill('0') << setw(18) << ans.first << "\n";
            }
            else if( ans.eleven != 0 ){
                // cout << 110;
                cout << ans.eleven;
                cout << setfill('0') << setw(18) << ans.tenth;
                cout << setfill('0') << setw(18) << ans.ninth;
                cout << setfill('0') << setw(18) << ans.eighth;
                cout << setfill('0') << setw(18) << ans.seventh;
                cout << setfill('0') << setw(18) << ans.sixth;
                cout << setfill('0') << setw(18) << ans.fifth;
                cout << setfill('0') << setw(18) << ans.fourth;
                cout << setfill('0') << setw(18) << ans.third;
                cout << setfill('0') << setw(18) << ans.second;
                cout << setfill('0') << setw(18) << ans.first << "\n";
            }
            else if( ans.tenth != 0 ){
                // cout << 100;
                cout << ans.tenth;
                cout << setfill('0') << setw(18) << ans.ninth;
                cout << setfill('0') << setw(18) << ans.eighth;
                cout << setfill('0') << setw(18) << ans.seventh;
                cout << setfill('0') << setw(18) << ans.sixth;
                cout << setfill('0') << setw(18) << ans.fifth;
                cout << setfill('0') << setw(18) << ans.fourth;
                cout << setfill('0') << setw(18) << ans.third;
                cout << setfill('0') << setw(18) << ans.second;
                cout << setfill('0') << setw(18) << ans.first << "\n";
            }
            else if( ans.ninth != 0 ){
                cout << ans.ninth;
                cout << setfill('0') << setw(18) << ans.eighth;
                cout << setfill('0') << setw(18) << ans.seventh;
                cout << setfill('0') << setw(18) << ans.sixth;
                cout << setfill('0') << setw(18) << ans.fifth;
                cout << setfill('0') << setw(18) << ans.fourth;
                cout << setfill('0') << setw(18) << ans.third;
                cout << setfill('0') << setw(18) << ans.second;
                cout << setfill('0') << setw(18) << ans.first << "\n";
            }
            else if( ans.eighth != 0 ){
                cout << ans.eighth;
                cout << setfill('0') << setw(18) << ans.seventh;
                cout << setfill('0') << setw(18) << ans.sixth;
                cout << setfill('0') << setw(18) << ans.fifth;
                cout << setfill('0') << setw(18) << ans.fourth;
                cout << setfill('0') << setw(18) << ans.third;
                cout << setfill('0') << setw(18) << ans.second;
                cout << setfill('0') << setw(18) << ans.first << "\n";
            }
            else if( ans.seventh != 0 ){
                // cout << 70;
                cout << ans.seventh;
                cout << setfill('0') << setw(18) << ans.sixth;
                cout << setfill('0') << setw(18) << ans.fifth;
                cout << setfill('0') << setw(18) << ans.fourth;
                cout << setfill('0') << setw(18) << ans.third;
                cout << setfill('0') << setw(18) << ans.second;
                cout << setfill('0') << setw(18) << ans.first << "\n";
            }
            else if( ans.sixth != 0 ){
                // cout << 60;
                cout << ans.sixth;
                cout << setfill('0') << setw(18) << ans.fifth;
                cout << setfill('0') << setw(18) << ans.fourth;
                cout << setfill('0') << setw(18) << ans.third;
                cout << setfill('0') << setw(18) << ans.second;
                cout << setfill('0') << setw(18) << ans.first << "\n";
            }
            else if( ans.fifth != 0 ){
                // cout << 50;
                cout << ans.fifth;
                cout << setfill('0') << setw(18) << ans.fourth;
                cout << setfill('0') << setw(18) << ans.third;
                cout << setfill('0') << setw(18) << ans.second;
                cout << setfill('0') << setw(18) << ans.first << "\n";
            }
            else if( ans.fourth != 0 ){
                // cout << 40;
                cout << length << endl;
                cout << ans.fourth;
                cout << setfill('0') << setw(18) << ans.third;
                cout << setfill('0') << setw(18) << ans.second;
                cout << setfill('0') << setw(18) << ans.first << "\n";
            }
            else if( ans.third != 0 ){
                cout << ans.third;
                cout << setfill('0') << setw(18) << ans.second;
                cout << setfill('0') << setw(18) << ans.first << "\n";
            }
            else if( ans.second != 0 ){
                cout << ans.second;
                cout << setfill('0') << setw(18) << ans.first << "\n";
            }
            else{
                cout << ans.first << "\n";
            }
        }
        cout << "\n";

        // cout << endl << "After cal" << endl;
        // for( int i = 0; i < N; i++ ){
        //     for( int j = 0; j < N; j++ ){
        //         cout << matrix[i][j] << " ";
        //     }
        //     cout << endl;
        // }
    }
}
