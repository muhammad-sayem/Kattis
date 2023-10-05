#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             cout << "YES" << endl
#define      no              cout << "NO" << endl
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);
#define      Srev(s)         reverse(s.begin(), s.end());
#define      sz(s)           s.size()
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    string s;
    cin >> s;
    int t = 0, c = 0, g = 0, i;

    for(i=0; i<s.size(); i++){
        if(s[i] == 'T') t++;
        if(s[i] == 'C') c++;
        if(s[i] == 'G') g++;
    }

    int minn = min({t, c, g});

    ll ans = (t*t) + (c*c) + (g*g) + (minn*7);

    cout << ans << endl;

    return 0;
}