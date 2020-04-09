/*


*/

#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define int long long int
using namespace std;
#define pii pair <int, int>
#define pb push_back
#define deb(x) cout << #x << " " << x << endl
#define deb2(x, y) cout << #x << " " << x << " " << #y << " " << y << endl
#define Loop(s, e, itr) for (int itr = s; itr < e; itr++)
#define loop(n) for(int i = 0; i < n; i++)
#define vin vector<int>
#define w(t) int tc; cin >> tc; for(int t = 1; t <= tc; t++)
#define vec vector

int32_t main1(){
    fastio;
    int arr[60][60];
    w(t){
        int n, k;
        cin >> n >> k;
        if(k%n) cout << "Case #" << t << ": IMPOSSIBLE\n";
        else{
            int d = k/n;
            
            loop(n){
                Loop(0, n, j){
                    arr[i][(i+j)%n] = (d+j-1)%k+1;
                    // cout << i << " " << (i+j)%n << endl;
                }
            }
            Loop(0, n, i) Loop(0, n, j) if(arr[i][j]%n) arr[i][j] %= n; else arr[i][j] = n; 
            cout << "Case #" << t << ": POSSIBLE" << endl;
            Loop(0, n, i) {Loop(0, n, j) cout << arr[i][j] << " "; cout << endl;}
        }
    }
}

void Case(int t, bool pos = true){
    if(pos) cout << "Case #" << t << ": POSSIBLE" << endl;
    else cout << "Case #" << t << ": IMPOSSIBLE" << endl;
}

void print3(int a, int b, int c){
    cout << a << " " << b << " " << c << endl;
}

void print4(int a, int b, int c, int d){
    cout << a << " " << b << " " << c << " " << d << endl;
}

void print5(int a, int b, int c, int d, int e){
    cout << a << " " << b << " " << c << " " << d << " " << e << endl;
}

int32_t main(){
    int n, k;
    w(t){
        cin >> n >> k;
        if(n == 2){
            if(k == 2){
                Case(t);
                cout << "1 2\n2 1\n";
            }
            else if(k == 3){
                Case(t, false);
            }
            else if(k == 4){
                Case(t);
                cout << "2 1\n1 2\n";
            }
        }
        else if(n == 3){
            if(k == 3){
                Case(t);
                print3(1,2,3);
                print3(3,1,2);
                print3(2,3,1);
            }
            else if(k == 4){
                Case(t, false);
            }
            else if(k == 5){
                Case(t, false);
            }
            else if(k == 6){
                Case(t);
                print3(2,3,1);
                print3(1,2,3);
                print3(3,1,2);
            }
            else if(k == 7){
                Case(t, false);
            }
            else if(k == 8){
                Case(t, false);
            }
            else if(k == 9){
                Case(t);
                print3(3,1,2);
                print3(2,3,1);
                print3(1,2,3);
            }
        }
        else if(n == 4){
            if(k == 4){
                Case(t);
                print4(1,2,3,4);
                print4(4,1,2,3);
                print4(3,4,1,2);
                print4(2,3,4,1);
            }
            else if(k == 5){
                Case(t, false);
            }
            else if(k == 6){
                Case(t);
                print4(1,2,3,4);
                print4(2,1,4,3);
                print4(3,4,2,1);
                print4(4,3,1,2);
            }
            else if(k == 7){
                Case(t);
                print4(1,3,4,2);
                print4(2,1,3,4);
                print4(3,4,2,1);
                print4(4,2,1,3);
            }
            else if(k == 8){
                Case(t);
                print4(2,3,4,1);
                print4(1,2,3,4);
                print4(4,1,2,3);
                print4(3,4,1,2);
            }
            else if(k == 9){
                Case(t);
                print4(1,3,2,4);
                print4(3,2,4,1);
                print4(4,1,3,2);
                print4(2,4,1,3);
            }
            else if(k == 10){
                Case(t);
                print4(2,3,1,4);
                print4(3,2,4,1);
                print4(4,1,3,2);
                print4(1,4,2,3);
            }
            else if(k == 11){
                Case(t);
                print4(1,3,4,2);
                print4(3,4,2,1);
                print4(2,1,3,4);
                print4(4,2,1,3);
            }
            else if(k == 12){
                Case(t);
                print4(3,4,1,2);
                print4(2,3,4,1);
                print4(1,2,3,4);
                print4(4,1,2,3);
            }
            else if(k == 13){
                Case(t);
                print4(2,4,3,1);
                print4(4,3,1,2);
                print4(1,2,4,3);
                print4(3,1,2,4);
            }
            else if(k == 14){
                Case(t);
                print4(3,4,1,2);
                print4(4,3,2,1);
                print4(1,2,4,3);
                print4(2,1,3,4);
            }
            else if(k == 15){
                Case(t, false);
            }
            else if(k == 16){
                Case(t);
                print4(4,1,2,3);
                print4(3,4,1,2);
                print4(2,3,4,1);
                print4(1,2,3,4);
            }
        }
        else if(n == 5){
            if(k == 5){
                Case(t);
                print5(1,2,3,4,5);
                print5(5,1,2,3,4);
                print5(4,5,1,2,3);
                print5(3,4,5,1,2);
                print5(2,3,4,5,1);
            }
            else if(k == 6){
                Case(t, false);
            }
            else if(k == 7){
                Case(t, false);
            }
            else if(k == 8){
                Case(t);
                print5(1,3,4,5,2);
                print5(2,1,5,3,4);
                print5(3,2,1,4,5);
                print5(5,4,3,2,1);
                print5(4,5,2,1,3);
            }
            else if(k == 9){
                Case(t);
                print5(3,4,1,5,2);
                print5(1,2,3,4,5);
                print5(5,1,2,3,4);
                print5(2,5,4,1,3);
                print5(4,3,5,2,1);
            }
            else if(k == 10){
                Case(t);
                print5(2, 3, 4, 5, 1);
                print5(1, 2, 3, 4, 5);
                print5(5, 1, 2, 3, 4);
                print5(4, 5, 1, 2, 3);
                print5(3, 4, 5, 1, 2);
            }
            else if(k == 11){
                Case(t);
                print5(1,4,3,5,2);
                print5(3,2,1,4,5);
                print5(5,3,2,1,4);
                print5(2,5,4,3,1);
                print5(4,1,5,2,3);
            }
            else if(k == 12){
                Case(t);
                print5(4,1,2,3,5);
                print5(5,3,1,4,2);
                print5(1,2,3,5,4);
                print5(2,4,5,1,3);
                print5(3,5,4,2,1);
            }
            else if(k == 13){
                Case(t);
                print5(4,2,1,5,3);
                print5(5,4,3,1,2);
                print5(1,3,2,4,5);
                print5(3,1,5,2,4);
                print5(2,5,4,3,1);
            }
            else if(k == 14){
                Case(t, false);
            }
            else if(k == 15){
                Case(t);
                print5( 3, 4, 5, 1, 2);
                print5( 2, 3, 4, 5, 1);
                print5( 1, 2, 3, 4, 5);
                print5( 5, 1, 2, 3, 4);
                print5( 4, 5, 1, 2, 3);
            }
            else if(k == 16){
                Case(t);
                print5(4,3,2,1,5);
                print5(1,4,5,2,3);
                print5(2,5,3,4,1);
                print5(5,2,1,3,4);
                print5(3,1,4,5,2);
            }
            else if(k == 17){
                Case(t);
                print5(2,4,5,1,3);
                print5(1,2,3,5,4);
                print5(5,3,4,2,1);
                print5(3,5,1,4,2);
                print5(4,1,2,3,5);
            }
            else if(k == 18){
                Case(t);
                print5(5,3,2,1,4);
                print5(1,5,4,2,3);
                print5(2,1,3,5,1);
                print5(4,2,1,3,5);
                print5(3,4,5,1,2);
            }
            else if(k == 19){
                Case(t);
                print5(5,4,1,2,3);
                print5(2,5,3,1,4);
                print5(1,3,4,5,2);
                print5(3,1,2,4,5);
                print5(4,2,5,3,1);
            }
            else if(k == 20){
                Case(t);
                print5(4,5,1,2,3);
                print5(3,4,5,1,2);
                print5(2,3,4,5,1);
                print5(1,2,3,4,5);
                print5(5,1,2,3,4);
            }
            else if(k == 21){
                Case(t);
                print5(5,4,3,1,2);
                print5(1,5,2,3,4);
                print5(3,2,4,5,1);
                print5(2,3,1,4,5);
                print5(4,1,5,2,3);
            }
            else if(k == 22){
                Case(t);
                print5(5,3,1,2,4);
                print5(3,5,4,1,2);
                print5(4,2,5,3,1);
                print5(2,1,3,4,5);
                print5(1,4,2,5,3);
            }
            else if(k == 23){
                Case(t,false);
            }
            else if(k == 24){
                Case(t, false);
            }
            else if(k == 25){
                Case(t);
                print5(5,1,2,3,4);
                print5(4,5,1,2,3);
                print5(3,4,5,1,2);
                print5(2,3,4,5,1);
                print5(1,2,3,4,5);
            }
        }
    }
}