/*
                In the name of Allah, The Most Gracious and The Most Merciful.
           Glory be to You(Allah)! We have no knowledge except what You have taught us.
                         It is you who are the Knowledgeable, the Wise.
           ***************************************************************************/

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define int long long int
using namespace std;
using namespace __gnu_pbds;
const int N = 2e5+10;
template<typename T> using pbds= tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

  void toh(int n,char a,char b,char c){
      if(n==0){
        return;
      }

      toh(n-1,a,c,b);
      cout<<"["<<n<<" =( "<<a<<"->"<<b<<" )"<<"]"<<endl;
      toh(n-1,c,b,a);
  }

void solve(){
    int n,k;
    cin>>n;

     char a,b,c;
     cin>>a>>b>>c;


    toh(n,a,b,c);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}