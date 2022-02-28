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
  for (int i = 0; i < n; i++)
  {
     
   if (i % 2)
    cout << 2*i << " ";
   
   else
    cout << 2*i+1 << " ";
   
  }
  cout << endl;
 }
}