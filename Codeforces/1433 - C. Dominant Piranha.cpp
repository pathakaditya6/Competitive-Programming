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
        vector <int> v(n) ;
        for (auto &x : v) cin >> x ;
        int maxx = *max_element(all(v)) ;
        int minn = *min_element(all(v)) ;
        if (minn == maxx) cout << -1 << endl ;
        else {
                bool found = false ;
                for (int i = 0 ; i < n ; i++) {
                        if (v[i] == maxx and v[i + 1] < maxx) {
                                cout << i + 1 << endl ;
                                found = true ;
                                break ;
                        }
                }
                if (!found) {
                        for (int i = 0 ; i < n ; i++) {
                        if (v[i] == maxx and v[i - 1] < maxx) {
                                cout << i + 1 << endl ;
                                break ;
                        }
                }
                } 
        }
}

int32_t main()
{
        #ifndef ONLINE_JUDGE
	        freopen("input.txt", "r", stdin);
	        freopen("output.txt", "w", stdout);
        #endif
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