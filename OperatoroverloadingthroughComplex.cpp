#include<bits/stdc++.h>
// #define int         int64_t
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
class Complex{

public:

    int real;
    int img;

    Complex(int r, int m): real(r), img(m){}

    void display(){
        cout<<this->real<<" + " <<"i"<<this->img<<endl;
    }


    // prefix increament Overloading

    void operator ++(){
        ++this->real;
        ++this->img;
    }

    //postfix increament Overloading
     void operator ++(int){ // must be int data type in parameter.

        ++this->real;
        ++this->img;
     }

     // Arithmatic operator


     Complex operator +(Complex const  & c){

        Complex c1(0,0);
        c1.real= this->real+ c.real;
        c1.img= this->img + c.img;
         return c1;
     }


     // similar with -ve Arithmatic 


     // Comparison Operator

     bool operator < (Complex  const &c){


        if(this->real <=c.real){
            return true;
        }else{
            return false;
        }

     }

};
void solve(){

    Complex c1(3,4);
    c1.display();
    ++c1;
    c1.display();
    c1++;
    c1.display();
    Complex c2= c1+c1;
    c2.display();
    cout<<(c2<c1)<<endl;

    
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
