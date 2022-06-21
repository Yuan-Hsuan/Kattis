#include<bits/stdc++.h>
using namespace std;

#define upperbound 256
#define lowerbound -60

int main(){
    string op = "+-*/";

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int m;
    cin >> m;

    vector<int> ans;
    vector< vector<int> > solution;

    for( int i = 0; i < 4; ++i ){

        vector<int> eq{4, '+', 4, '+', 4, '+' , 4};
        eq[1] = op[i];

        for( int j = 0; j < 4; ++j ){

            eq[3] = op[j];

            for( int k = 0; k < 4; ++k ){

                eq[5] = op[k];

                vector<int> equation(eq);

                solution.push_back(equation);
                // cout << "Before loop" << endl;
                // int n = 0;
                // for( auto m: equation ){
                //     if( n%2 == 1 )
                //         cout << char(m);
                //     else
                //         cout << m;
                //     n++;
                // }
                // cout << endl;

                while( equation.size() != 1 ){
                    // cout << "enter while "<< endl;
                    for( int l = 1; l < equation.size()-1;  ){
                        if( equation[l] == '*'  ){
                            int temp = equation[l-1] * equation[l+1];
                            equation.erase( equation.begin() + l - 1, equation.begin() + l + 2);
                            equation.insert( equation.begin() + l -1, temp);
                            l = 1;
                            continue;
                        }else if( equation[l] == '/' ){
                            int temp = equation[l-1]/ equation[l+1];
                            equation.erase( equation.begin() + l -1, equation.begin() + l +2);
                            equation.insert( equation.begin() + l -1, temp);
                            l = 1;
                            continue;
                        }
                        l++;
                    }
                    break;
                }
                // cout << "After loop" << endl;
                // n = 0;
                // for( auto m: equation ){
                //     if( n%2 == 1 )
                //         cout << char(m);
                //     else
                //         cout << m;
                //     n++;
                // }
                // cout << endl;

                while( equation.size()!=1 ){
                    if( equation[1] == '+'  ){
                        int temp = equation[0] + equation[2];
                        equation.erase( equation.begin(), equation.begin() + 3);
                        equation.insert( equation.begin(), temp);
                    }else if( equation[1] == '-' ){
                        int temp = equation[0] - equation[2];
                        equation.erase( equation.begin(), equation.begin() + 3);
                        equation.insert( equation.begin(), temp);
                    }
                }

                ans.push_back(equation[0]);
                
            }
        }   
    }

    // for( int i = 0; i < ans.size(); i++ ){
    //     int n = 0;
    //     for( auto m: solution[i] ){
    //         if( n%2 == 1 )
    //             cout << char(m);
    //         else
    //             cout << m;
    //         n++;
    //     }
    //     cout << "=" << ans[i] << endl;
    // }

    for( int j = 0; j < m; j++ ){
        int a;
        cin >> a;
        bool has_ans = false;
        for( int i = 0; i < ans.size(); i++ ){
            if( ans[i] == a ){
                has_ans = true;
                int n = 0;
                for( auto m: solution[i] ){
                    if( n%2 == 1 )
                        cout << char(m);
                    else
                        cout << m;
                    cout << " ";
                    n++;
                }
                cout << "= " << ans[i] << endl;
                break;
            }
        }
        if( !has_ans ){
            cout << "no solution " << endl;
        }
    }

    return 0;
}
