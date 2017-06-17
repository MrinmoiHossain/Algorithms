#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//Template: coder - Mrinmoi Hossain Mokit
/*Long Data Type*/
typedef long long int          ll;
typedef unsigned long long int ull;
typedef long double            ld;

/*VECTOR Declaration */
typedef vector<int>             VI;
typedef vector<ll>              VL;
typedef vector<char>            VC;
typedef vector<string>          VS;
typedef vector<int,int>         VII;
typedef vector<char,int>        VCI;
typedef vector<ll, ll>          VLL;

/*Pair Declaration*/
typedef pair<int, int>          ipair;

/*Constant Value */
const double pi = acos(-1.0);
const double eps = 1e-11;
#define RAD             (PI/180.00)
#define mod             1000000007                      /*Modular Size*/
#define sz              100002                          /*array_size*/
#define ff              first
#define ss              second
#define pb              push_back
#define mp              make_pair                       /*make_pair()*/
#define all(x)         (x.begin(),x.end())

/*File Section*/
#define read()          freopen("input.txt", "r", stdin)
#define write()         freopen("output.txt", "w", stdout)

/*Input Section*/
#define Ci(a)           cin >> a
#define Cii(a,b)        cin >> a >> b
#define Ciii(a,b,c)     cin >> a >> b >> c
#define Ciiii(a,b,c,d)  cin >> a >> b >> c >> d
#define sl(a)           scanf("%lld", &a)
#define s2(a,b)         scanf("%lld %lld", &a, &b)
#define s3(a,b,c)       scanf("%lld %lld %lld", &a, &b, &c)
#define s4(a,b,c,d)     scanf("%lld %lld %lld %lld", &a, &b, &c, &d)

/*Max-Min Section*/
#define min3(a,b,c)     min(a,min(b,c))
#define min4(a,b,c,d)   min(min(a,b),min(c,d))
#define min5(a,b,c,d,e) min(min3(a,b,c),min(d,e))
#define max3(a,b,c)     max(a,max(b,c))
#define max4(a,b,c,d)   max(max(a,b),max(c,d))
#define max5(a,b,c,d,e) max(max3(a,b,c),max(d,e))

/*Output section*/
#define SP              printf(" ")
#define NL              printf("\n")
#define pl(a)           printf("%lld\n", a)
#define pll(a,b)        printf("%lld %lld\n", a, b)
#define plll(a,b,c)     printf("%lld %lld %lld\n", a, b, c)
#define fast ios_base:: sync_with_stdio(0),cin.tie(0)
#define IT(it,c) for(__typeof(c.begin()) it=c.begin();it!=c.end();it++)    /*to iterate the iterator*/

/*Template Section*/
template<class T> inline T sqr(T a)      {  return a * a; }
template<class T> inline T gcd(T a, T b) {  if(a < 0) return gcd(-a, b);
                                            if(b < 0) return gcd(a, -b);
                                            return (b == 0)? a:gcd(b, a % b); }
template<class T> inline T lcm(T a, T b) {  if(a < 0) return lcm(-a, b);
                                            if(b < 0) return lcm(a, -b);
                                            return a * (b / gcd(a, b)); }

/*Function Declaration*/
//Translator ->//
bool isUpper(char a) { return (a >= 'A' && a <= 'Z'); }
bool isLower(char a) { return (a >= 'a' && a <= 'z'); }
bool isLetter(char a){ return (a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'); }
bool isDigit(char a) { return (a >= '0' && a <= '9'); }
char toLower(char a) { return (isUpper(a))? (a + 32):a; }
char toUpper(char a) { return (isLower(a))? (a - 32):a; }

int main(void)
{
    return 0;
}
