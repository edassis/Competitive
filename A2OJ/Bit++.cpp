#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vll vector<ll>
#define ll long long
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define ii pair<int,int>
#define ff first
#define ss second

#define PRIMO 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int x = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        
        if (s[1] == '+') { 
            x++;
        } else {
            x--;
        }
    }

    cout << x << endl;
    
    return 0;
}