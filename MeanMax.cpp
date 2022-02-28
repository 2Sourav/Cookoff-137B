#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>

#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;

const int mod = 1e9 + 7;
#define endl "\n"
#define debug(x) cout<<x<<endl;





int main()
{
   
    ios_base::sync_with_stdio(false);
   
    cin.tie(0);
    ll t;
    cin >> t;
   
    while (t--)
    {
        ll n;
       
        cin >> n;
        vector<ll> a(n);
       
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
           
            cin >> a[i];
            sum += a[i];
           
        }
        sort(a.begin(), a.end());
       
        double ans = 0;
        double sum2 = 0;
       
        for (int i = n - 1; i >= 1; i--)
        {
            sum2 += a[i];
           
            sum -= a[i];
            ans = max(ans, (1.0) * sum2 / (n - i)  + (1.0) * (sum) / i);
           
        }
        printf("%.6f\n", ans );
    }
}