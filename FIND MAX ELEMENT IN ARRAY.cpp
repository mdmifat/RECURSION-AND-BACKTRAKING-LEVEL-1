/*
                In the name of Allah, The Most Gracious and The Most Merciful.
           Glory be to You(Allah)! We have no knowledge except what You have taught us.
                         It is you who are the Knowledgeable, the Wise.
           ***************************************************************************/

#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define int long long int
using namespace std;
//using namespace __gnu_pbds;
const int N = 2e5+10;
//template<typename T> using pbds= tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

 int MAX(int i,vector<int>v){
     if(i==v.size()-1){
        return v[i];
     }

     int op1=MAX(i+1,v);

     return max(op1,v[i]);
 }

void solve(){
     int n;
     cin>>n;

     vector<int>v(n);
     for(int i=0;i<n;i++)cin>>v[i];

     cout<< MAX(0,v)<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}