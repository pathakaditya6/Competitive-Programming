// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
#define sz(v)	( (int) ( (v).size() ) )
#define all(v)	( (v).begin() ) , ( (v).end() )
#define allr(v)	( (v).rbegin() ) , ((v).rend())

void solve()
{
        int n ;
        cin >> n ;
        for (int i = 4 * n  ; i >=  ( (4 * n) / 2 + 2 ) ; i -= 2) {
                cout << i << " " ;
        }
        cout << endl ;
}

int32_t main()
{
        // #ifndef ONLINE_JUDGE
	//         freopen("input.txt", "r", stdin);
	//         freopen("output.txt", "w", stdout);
        // #endif
        fast ;
        int testcases = 1 ;
        cin >> testcases ;
        while(testcases--)
        {
                solve() ;
        }
        return 0;
}
/*  CODED BY:-
         ___________________________________
        |                       ___         |
        |  /\   /\  \ /  |  |  |___   |__|  |
        | /~~\ /~~\  |   |__|   ___|  |  |  |
        |___________________________________|
*/