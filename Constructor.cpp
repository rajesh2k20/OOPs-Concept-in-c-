#include<bits/stdc++.h>
#define int         int64_t
#define ll          long long 
#define pb          push_back
#define endl        '\n'
#define pll         pair<int,int>
#define vll          vector<int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mi        map<int,int>
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class Product{

public:

     int price;
     string name;

     Product(int p, string n) : price(p) ,name(n){}

     Product(int p) : price(p){}
     Product(string n): name(n){}


};


void solve(){
   
   Product* p1=new Product(300, "iphone");
   Product * p2=new Product("Redmi");
   Product * p3= new Product(200);
   // cout<<"hello"<<endl;
   cout<<p1->name<<" "<<p1->price<<endl;
    cout<<p2->name<<" "<<p2->price<<endl;
     cout<<p3->name<<" "<<p3->price;

}
signed main(){
    ios
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
        
    int test=1;
    //cin>>test;
    while(test--){
        solve();
    }    
    return 0;
}
