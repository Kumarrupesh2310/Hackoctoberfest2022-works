// Problem
// John participates in an annual walking competition called Walktober. The competition runs for a total of N days and tracks the daily steps of the participants for all the N days. Each participant will be assigned a unique ID ranging from 1 to M where M is the total number of registered participants. A global scoreboard is maintained tracking the daily steps of each participant.

// John is determined to win Walktober this year and his goal is to score the maximum daily steps on each of the N days among all the participants. Having participated in Walktober last year as well, he wanted to know how many steps he fell short of in achieving his goal. Given the previous year scoreboard, calculate the minimum additional steps he needed over his last year score in order to achieve his goal of scoring the maximum daily steps every day.

// Input
// The first line of the input gives the number of test cases, T. T test cases follow.
// The first line of each test case contains three integers M, N, and P denoting the total number of participants, the total number of days the competition runs, and the last year participant ID of John.
// The next M lines describe the scoreboard of the previous year and contains N integers each. The j-th integer of the i-th line denotes the step count Si,j of the participant with ID i on the j-th day of the competition.

// Output
// For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the minimum total additional steps needed by John to achieve his goal.

// solution

// gfg competative coding template
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i, a, b) for (ll i = a; i < b; i++)
#define rf(i, a, b) for (ll i = a; i >= b; i--)
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define ff first
#define ss second
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define setBits(x) builtin_popcount(x)
#define endl "\n"
#define inf 1e9
#define pi 3.14159265358979323846
#define mod 1000000007
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

void solve() {
    int m,n,k;
    int steps = 0;
    cin>>m>>n>>k;
    int a[m+1][n];
    f(i,0,m){
        f(j,0,n){
            cin>>a[i][j];
        }
    }
    f(i,0,n){
        a[m][i]=0;
    }
    f(i,0,n){
        f(j,0,m){
            a[m][i]=max(a[m][i],a[j][i]);
        }
        if(a[k-1][i]<a[m][i]){
            steps += a[m][i]-a[k-1][i];
        }
    }
    cout<<steps<<endl;
}

int main() {
    fast;
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
     cout << "Case #" << it << ": ";
        solve();
    }
    return 0;
}
