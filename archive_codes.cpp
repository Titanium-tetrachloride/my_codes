/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
    multiset<int> s;
    int g, c, l;
    cin >> g >> c >> l;
    s.insert(g);
    s.insert(c);
    s.insert(l);
    int m = *s.begin();
    int i = *--s.end();
    if((i-m)>=10) cout << "check again\n";
    else cout <<"final " <<*(++s.begin());
}*/
/*#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
signed main()
{
    ll a = 4; ll b = 18;
    cout << (4*(3+15))/2;
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int t; cin >> t;
    while(t--){
    int a, b, c, d;
    cin >> a >>b>>c>>d;
    if(a==b && b==c && c==d) cout << "Yes\n";
    else cout << "No\n";
}
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int n;
    cin >> n;
    cout << n+1 << '\n';
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int t; cin >> t;
    while(t--){
    map<char, int> m;
    m.insert(make_pair('T',1));
    m.insert(make_pair('i',1));
    m.insert(make_pair('m',1));
    m.insert(make_pair('u',1));
    m.insert(make_pair('r',1));
    map<char, int> mp;
    int n; cin >> n;
    for(int i=0; i<n; ++i)
    {
        char c; cin >> c;
        mp[c]++;
    }
    if(mp == m) cout << "Yes\n";
    else cout << "No\n";
}
}*/
/*#include <bits/stdc++.h>
using namespace std;
void sol()
{
    map<char, int> m1;
    map<char, int> m2;
    int n; cin >> n;
    for(int i=0; i<n; ++i)
    {
        char c; cin >> c; m1[c]++;
    }
    for(int i=0; i<n; ++i)
    {
        char c; cin >> c; m2[c]++;
    }
    if(m1==m2) cout << "YES\n";
    else cout << "NO\n";
}
int main()
{
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while(t--)
    {
        sol();
    }
}*/
/*#include <iostream>
using namespace std;
const int N = 26;
int cnt1[N];
int cnt2[N];
signed main()
{
    int t; cin >> t;
    while(t--)
    {
        for(int i=0; i<26; ++i) cnt1[i]=cnt2[i]=0;
        int n; cin >> n;
        string s, f; cin >> s >> f;
        for(char &c : s) cnt1[c-'a']++;
        for(char &c : f) cnt2[c-'a']++;
        bool ans = true;
        for(int i=0; i<26; ++i)
        {
            if(cnt1[i]!=cnt2[i]) ans = false;
        }
        puts(ans ? "YES":"NO");
    }
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> v;
        for(int i=0; i<n; ++i)
        {
            int x; cin >> x;
            v.push_back(x);
        }
        for(int i=0; i<(n-1); ++i)
        {
            if((v[i]%2)!=(v[i+1]%2))
            {
                swap(v[i],v[i+1]);
            }
            for(int i=0; i<n; ++i)
            {
                cout << v[i] << " "; 
            }
            cout << endl;
        }
    }
}*/
/*#include <bits/stdc++.h>
using namespace std;
void sol()
{
    vector<int> v;
    int n, k; cin >> n >> k;
    for(int i=0; i<n; ++i)
    {
        int x; cin >> x; v.push_back(x);
    }
    vector<int> &r = v;
    sort(r.begin(), r.end());
    if(v==r) cout << "YES\n";
    if(k==1) cout << "NO\n";
    if(k>1) cout << "YES\n";
}
signed main()
{
    int t; cin >> t;
    while(t--)
    {
        sol();
    }
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int n, sum=0;
    cin >> n;
    for(int i=1; i<=n; ++i) sum +=i;
    cout << sum << endl;
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
    vector<int> v; int n, ans=0; cin >> n;
    for(int i=0; i<n; ++i)
    {
        int x; cin >> x; v.push_back(x);
    }
    for(int r=0; r<n; ++r)
    {
        for(int l=0; l<r; ++l)
        {
            int s=0;
            for(int i=l; i<=r; ++i) s+=v[i];
            bool flag = true;
            for(int k=l; k<=r; ++k)
            {
                if(s%v[k]==0) flag=false;
            }
            if(flag) ans++;
        }
    }
    cout << ans << endl;
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
  int n ; cin >> n; int c=0; vector<int> v;
  for(int i=0; i<n; ++i)
  {
    int x; cin >> x; v.push_back(x);
  }
  
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int n; cin >> n;
    int arr[n][n];
    for(int i=0; i<n; ++i)
    {
        for(int j=0;j<n; ++j) cin >> arr[i][j];
    }
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j) cout << arr[j][i] << " ";
        cout << '\n';
    }
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int t; cin >> t;
    while(t--){
    int n; cin >> n; bool even = false, odd=false;
    vector<int> v;
    for(int i=0; i<n; ++i)
    {
        int x; cin >> x;
        v.push_back(x);
        if(v[i]&1) even = true;
        else odd = true;
       }
       if(even and odd) sort(v.begin(), v.end());
       for(int i=0; i<n; ++i) cout << v[i] << " ";
       cout << '\n';
}
}*/
/*#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
int gcd(int A, int B)
{
    int m = min(A,B);
    set<int> s;
    for(int i=1; i<=m; ++i)
    {
        if(A%i==0 && B%i==0) s.insert(i);
    }
    return *--s.end();
}
void sol()
{
    int n;ll ans=0; cin >> n;
    vector<int> v;
    bool ok = false;
    for(int i=0; i<n; ++i)
    {
        int b; cin >> b;
        v.push_back(b);
    }
    for(int i=1; i<=n; ++i)
    {
        for(ll x=2; x<=1e18; ++x)
        {
            if(gcd(v[i],x) == 1)
            {
                 ok = true;
                 ans = x;
                 break;
            }
        }
    }
    if(ok) cout << ans<< '\n';
    else cout << -1 << '\n';
}
signed main() 
{
    int t; cin >> t;
    while(t--)
    {
        sol();
    }
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int __;
    for(cin >> __; __--;)
    {
    vector<int> v; int ans = 0;
    int x, n; cin >> x >> n;
    for(int i=0; i<n; ++i)
    {
        if(i&1) v.push_back(x*-1);
        else v.push_back(x);
    }
    for(int i=0; i<n; ++i)
    {
        ans+=v[i];
    }
    cout << ans << '\n';
}
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int __;
    for(cin >> __;__--;)
    {
        int n, k; cin>> n >> k;
        vector<int> v(n);
        for(int i=0; i<n; ++i) cin >> v[i];
        vector<int> r=v;
        sort(r.begin(), r.end());
        if(v==r) cout << "YES\n";
        else if(k>=2) cout << "YES\n";
        else cout << "NO\n";
    }
}*/
/*#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, m, ans;
	cin >> n >> m;
	while(m--)
    {
        n=n-1;
        if(n==0) break;
    }
    cout << n << '\n';

}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int n, m, x=0;
    cin >> n >> m;
    for(int i=0; i<n; ++i)
    {
        x+=1;
    }
}*/
/*#include <bits/stdc++.h>
#include <numeric>
using namespace std;
signed main()
{
  int t; scanf("%d", &t);
while(t--)
{
  int x; cin >> x;
  int y, b;
 vector<int> v;
for(y=1; y<=x;++y){
   b = gcd(x,y)+y;
   v.push_back(b);
}
sort(v.begin(), v.end());
cout << v[v.size()-1] << '\n';
}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; scanf("%d", &t);
    while(t--)
    {
        int n, x=0; scanf("%d",&n);
        vector<int> v(n);
        for(int i=0; i<n; ++i) scanf("%d",&v[i]);
        vector<int> r=v; sort(r.begin(), r.end());
        if(r==v) cout << 0 << '\n';
        else{
            while(v!=r){
        for(int i=0; i<n-1; ++i)
        {
            if(v[i]>v[i+1]) v.erase(v.begin()+i);
            ++x;
        }
            printf("%d\n", x);
    }}
}}*/
/*include <bits/stdc++.h>
using namespace std;
int main()
{
	optimize();
    int n, m;
    cin >> n >> m;
	int arr[n][m];
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			cin >> arr[i][j];
		}
	}
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
void printhello()
{
	cout << "Hello World";
}
int main()
{
	printhello();
}*/
/*#include <bits/stdc++.h>
using namespace std;
int sum(int a, int b)
{
	return a + b;
}
int main()
{
	cout << sum(2,3) << endl;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int digit_sum(int n)
{
	int sum = 0;
	while(n)
	{
		int last_digit = n % 10;
		sum += last_digit;
		n = n/10;
	}
	return sum;
}
int main()
{
	int n, m;
	cin >> n >> m;
	cout << digit_sum(n) + digit_sum(m);
}*/
/*#include <bits/stdc++.h>
using namespace std;
void increment(int &n)
{
	n++;
}
int main()
{
	int a = 3;
	cout << a << endl;
	increment(a);
	cout << a << endl;
}*/
/*#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << a << " " << b;
}
void sum(int &a, int &b)
{
	cout << a+b << endl;
}
int main()
{
	int a, b;
	cin >> a >> b;
	sum(a, b);
	swap(a, b);
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	pair<int, string> p;
	//p = make_pair(2, "abc");
	p = {2, "abc"};
	cout << p.first << " " << p.second <<endl;
	pair<int, string> &p1 = p;
	p1.first = 45;
	cout << p.first<< " " << p.second;
	cout << p1.first<< " " << p1.second;
}*/
/*#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
int main()
{
	int arr[] = {1, 2, 3};
	int brr[] = {2, 3, 4};
	pair<int, int> p_arr[3];
	p_arr[0] = {1, 2};
	p_arr[1] = {2, 3};
	p_arr[2] = {3, 4};
	swap(p_arr[0], p_arr[2]);
	for(int i = 0; i<3; ++i)
	{
		cout<<p_arr[i].f<<" "<<p_arr[i].s<<endl;
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define REP for(int i = 0; i<3; ++i)
int main()
{
	pair<string,int> candies[3];
	REP{
		cin >> candies[i].f >> candies[i].second;
	}
	REP{
		cout <<"I have "<<candies[i].s<<" "<<candies[i].f<<endl;
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
#define optimize() ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define f first
#define s second
int main()
{
	optimize();
	int t;
	cin >> t;
	pair<int, int> p[t];
	int max = -1;
	int index = -1;
	for(int i=0;i<t;++i)
	{
			cin>>p[i].f>>p[i].s;
			int sum=p[i].f+p[i].s;
			if(sum>max)
			{
				max = sum;
				index = i + 1;
			}
	}
	cout << index;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int index = 0;
	for(int i = 0; i<t; ++i)
	{
		int n;
		cin >> n;
		int min = 1001;
		if(min > n)
		{
			min = n;
			index = i+1;
		}
	}
	cout << index;
 }*/
/*#include <bits/stdc++.h>
using namespace std;
#define PB push_back
void privec(vector<int> v)
{
	for(int i=0;i<v.size();++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}
int main()
{
	vector<int> v;
	int n;
	cin >> n;
	for(int i=0;i<n;++i)
	{
		int x;
		cin >> x;
		v.PB(x);
	}
	privec(v);
}*/
/*#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void privec(vector<string> v)
{
	for(int i=0;i<v.size();++i)
	{
		cout << v[i] << endl;
    }
}
int main()
{
	vector<string> v;
	int n;
	cin >> n;
	cin.ignore();
	for(int i=0;i<n;++i)
	{
		string str;
		getline(cin, str);
		v.pb(str);
	}
	privec(v);
}*/
/*#include <bits/stdc++.h>
using namespace std;
void privec(vector<int> v)
{
	for(int i=0;i<v.size();++i)
	{
		cout << v[i] << endl;
    }
}
int main()
{
	vector<int> v;
	int n;
	cin >> n;
	for(int i=0;i<n;++i)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	//cout << v[v.size()-2];
	privec(v);
}
*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	int n;
	cin >> n;
	for(int i=0;i<n;++i)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	cout << v[v.size()-2];
}*/
/*#include <bits/stdc++.h>
using namespace std;
void privec(vector<pair<int, int>> &v)
{
	for(int i=0; i<v.size(); ++i)
	{
		cout << v[i].first<<" "<<v[i].second<<endl;
	}
}
int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	for(int i=0;i<n;++i)
	{
		int x, y;
		cin >> x>> y;
		v.push_back({x, y});
	}
	privec(v);
}*/
/*#include <bits/stdc++.h>
using namespace std;
void privec(vector<int> &v)
{
	for(int i=0;i<v.size();++i)
	{
		cout<<v[i]<<" ";
	}
	cout << endl;
}
int main()
{
	int N;
	cin >> N;
	vector<int> v[N];
	for(int i=0;i<N;++i)
	{
		int n;
		cin >> n;
		for(int j=0;j<n;++j)
		{
			int x;
			cin >> x;
			v[i].push_back(x);
		}
	}
	for(int i=0; i<N;++i)
	{
		privec(v[i]);
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
void privec(vector<int> &v)
{
	for(int i=0; i<v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}
int main()
{
	int N;
	cin >> N;
	vector<vector<int>> v;
	for(int i=0; i<N; ++i)
	{
		int n;
		cin >> n;
		vector<int> temp;
		for(int j=0;j<n;++j)
		{
			int x;
			cin >> x;
			temp.push_back(x);
		}
		v.push_back(temp);
	}
	for(int i=0; i<N; ++i)
	{
		privec(v[i]);
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
void privec(vector<int> &v)
{
	for(int i=0; i<v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}
int main()
{
	int N;
	cin >> N;
	vector<vector<int>> v;
	for(int i=0; i<N; ++i)
	{
		int n;
		cin >> n;
		vector<int> temp;
		for(int j=0; j<n; ++j)
		{
			int x;
			cin >> x;
			temp.push_back(x);
		}
		v.push_back(temp);
	}
	for(int i=0; i<v.size(); ++i)
	{
		privec(v[i]);
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
void privec(vector<int> &v)
{
	for(int i=0; i<v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}
int main()
{
	int N;
	cin >> N;
	vector<vector<int>> v;
	for(int i=0; i<N; ++i)
	{
		int n;
		cin >> n;
		v.push_back(vector<int>());
		for(int j=0; j<n; ++j)
		{
			int x;
			cin >> x;
			v[i].push_back(x);
		}
	}
	for(int i=0; i<v.size(); ++i)
	{
		privec(v[i]);
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		int diff = b-a;
		if(diff==0)
		{
			cout << 0 << endl;
		}
	    if(diff > 0)
	    {
	    	if(diff%2==0)
	    	{
	    		cout << 2 << endl;
	    	}
	    	else{
	    		cout << 1 <<endl;
	    	}
	    }
	    if(diff < 0)
	    {
	    	if(abs(diff) % 2!= 0)
	    	{
	    		cout << 1 << endl;
	    	}
	    	else{
	    		cout << 2 << endl;
	    	}
	    }
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
	string s;
	cin >> s;
	int index = -1;
	for(int i =s.size()-1; i>0; --i)
	{
		if(s[i] == 's' && s[i-1] == 'u')
		{
			index = i - 1;
			break;
		}
	}
	if(index != -1)
	{
		s[index]='i';
		s.erase(index+1, 1);
	}
	cout << s << endl;
}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int rating;
		cin >> rating;
		if(1900<=rating)
		{
			cout << "Division 1" << endl;
		}
		if(1600 <= rating && rating<=1899)
		{
			cout << "Division 2" << endl;
		}
		if(1400<=rating && rating<=1599)
		{
			cout << "Division 3" << endl;
		}
		if( rating<=1399)
		{
			cout << "Division 4" << endl;
		}
	}
}*/
/*#include  <bits/stdc++.h>
using namespace std;
#define ll long long
#define fraction() cout.unsetf(ios::floatfield); cout.precision(0); cout.setf(ios::fixed,ios::floatfield);
int main()
{
	fraction();
	double n, m, a;
	cin >> n >> m >> a;
	double a1 = ceil(n/a);
	double a2 = ceil(m/a);
	cout <<fixed<<a1*a2 << endl;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if(1<=n && n<=100){
	 if(n == 2)
	 {
	 	cout << "NO" << endl;
	 }
	if(n%2 == 0)
	{
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
  }
  else{
  	return 0;
  }
}*/
/*include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
	string str;
	cin >> str;
	if(str.size()>10){
	string newstring;
	cout << str[0];
	newstring=str.erase(0, 1);
0	cout << newstring.size()-1;
	cout<< str[str.size()-1] << endl;

	}
	else{
		cout << str << endl;
	}
}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int arr[n];
	int count = 0;
	for(int i=0; i<n; ++i)
	{
		cin >> arr[i];
	}
	for(int i=0; i<n; ++i)
	{
		if(arr[i] >= arr[k-1] && arr[i] > 0)
		{
			count++;
		}
	}
	cout << count;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char arr[n];
	int count = 0;
	for(int i=0; i<n; ++i)
	{
		cin >> arr[i];
	}
	for(int i=0; i<n; ++i)
	{
		if(arr[i]==arr[i+1])
		{
			count++;
		}
	}
	cout << count;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v = {2, 3, 4, 5};
	vector<int> :: iterator it = v.begin();
	cout << (*it) << endl;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
0	int n;
	cin >> n;
	for(int i=0; i<n; ++i)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	vector<int> :: iterator it = v.begin();;

for(it = v.begin(); it!= v.end(); ++it)
{
	cout << (*it) << endl;
}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x = 0;
	int n;
	cin >> n;
	for(int i=0; i<n; ++i)
	{
		string s;
		cin >> s;
		if(s=="X++")
			{
		x++;
	}
	if(s=="++X")
	{
		++x;
	}
	if(s=="--X")
	{
		--x;
	}
	if(s=="X--")
	{
		x--;
	}
  }
  cout << x << endl;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	string t;
	cin >> s >> t;
	reverse(t.begin(), t.end());
	if(s == t)
	{
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		int count;
		cin >> n;
		int arr[n];
		for(int i = 1, j = 0; i<=n && j<n; ++i, ++j)
		{
			arr[j]=i;
		}
		for(int i=0; i<n ; ++i)
		{
			for(int j=0; j<n; ++j)
			{
				if(arr[i]+arr[j] == n)
				{
					count++;
				}
			}
		}
		cout << count << endl;
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
#define REP for(int i=0; i<arr.size(); ++i)
void print(int &arr[])
{
	REP{
		cout<< arr[i] << " ";
	}
}
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=1, j=0; i<=n && j<n; ++i,++j)
	{
		arr[j] = arr[i];
	}
	print(arr);
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[5][5];
	for(int i=0; i<5; ++i)
{
	for(int j=0; j<5; ++j)
	{
		cin >> arr[i][j];
	}
}
for(int i=0; i<5; ++i)
{
	for(int j=0; j<5; ++j)
	{
		cout << arr[i][j] << " ";
	}
	cout << endl;
  }
  cout << arr[2][2];
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, t; cin >> n >> t; char arr[n];
	for(int i=0; i<n; ++i)
	{
		cin >> arr[i];
	}
	for(int i=0; i<n; ++i)
	{
		if(arr[i]=='B')
		{
			char temp;
			arr[i]=temp;
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
		if(arr[i]=='G')
		{
			char temp;
			arr[i]=temp;
			arr[i]=arr[i-1];
			arr[i-1]=temp;
		}
	}
	for(int i=0; i<n; ++i)
	{
		cout<< arr[i];
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin >> str;
	bool isvalid = true;
	for(int i=0; i<str.size(); ++i)
	{
		if(str[i] != '4' && str[i] != '7')
		{
			isvalid=false;
			break;
		}
	}
	cout << (isvalid?"YES":"NO");
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, h, sum=0; cin >> n >> h;
	vector <int> v;
	for(int i=0; i<n; ++i)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	for(int i=0; i<v.size(); ++i)
	{
		if(v[i]<=h)
		{
			v[i]=1;
			sum += v[i];
		}
		else{
			v[i]=2;
			sum+=v[i];
		}
	}
	cout << sum << endl;
}*/
/*#include <bits/stdc++.h>
using namespace std;
#define fraction() cout.unsetf(ios::floatfield); cout.precision(0); cout.setf(ios::fixed,ios::floatfield);
int main()
{
	fraction();
	int t;
	cin >> t;
	while(t--){
		vector<int> arr;
	int x, y, a;
	cin >> x >> y >> a;
	double sum=0;
	for(long long int i=0; i<1e18; ++i)
	{
		if(i%2==0)
		{
			arr.push_back(x);
			sum+=arr[i];
		}
		if(i%2!=0){
			arr.push_back(y);
			sum+=arr[i];
		}
		if(sum>a && arr[i]==x)
		{
			cout<< "NO" << endl;
			break;
		}
		if(sum>a && arr[i]==y)
		{
			cout << "YES" << endl;
			break;
		}
	}
}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
	int x, y, a;
	cin >> x >> y >> a;
	if(a%(x+y) < x)
	{
		cout << "NO\n";
	}
	else{
		cout << "YES\n";
	}
  }
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int l, r, a, u;
	cin >> l >> r >> a >> u;
	l*=-1;
	a*=-1;
	int AB = sqrt(pow((r-l), 2) + pow((0-0), 2));
	int BC = sqrt(pow((0-r), 2) + pow((a-0), 2));
	int CD = sqrt(pow((0-0), 2) + pow((u-a), 2));
1	int DA = sqrt(pow((0-l), 2) + pow((u-0), 2));
	if(AB==BC && BC==CD && CD == DA)
	{
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << n*2 << endl;
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
	int n, k, p;
	cin >> n >> k >> p;
	if(-n *p<=k && k<=n*p)
	{
		cout << (abs(k)+p-1)/p << "\n";
	}
	else {
		cout << -1 << endl;
	}
}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{

	int n, x;
	string s;
	while(n--)
	{
		cin >> s;
		
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
void bang()
{
	string s;
	cin >> s;
	for(int i=1; i<s.size(); ++i)
	{
		if(s[i-1]==s[i])
		{
			cout << 1 << endl;
			return;
		}
	}
	cout << s.size() << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		bang();
	}
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		int n;
		cin >> n;
		vector<int> arr;
		while(n--)
		{
			cin >> s;
			for(int i=0; i<s.size(); ++i)
			{
3				if(s[i]=='#')
				{
					arr.push_back(i+1);
				}
				}
			}
			reverse(arr.begin(), arr.end());
			for(int pos : arr)
		{
			cout << pos << " ";
		}
		cout << endl;
	}
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
void privec(vector<int> v)
{
	for(int i=0; i<v.size(); ++i)
		{
			cout << v[i] << " ";
		}
		cout << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
	vector<int> v;
	for(int i=0; i<n; ++i)
	{
		v.push_back(i+1);
	}
	next_permutation(v.begin(), v.end());
	for(int i=2, j=0; i<=n, j<n-1; ++i, ++j)
	{
		if(max(v[j], v[j+1])%i==i-1)
		{
			privec(v);
		}
		else{
			cout << -1 <<'\n';
		}
	}
}
}
*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, l;
	cin >> n;
	while(n--)
	{
		string s;
		int count = 0;
		int count2 = 0;
		cin >> s;
		
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int k; cin >> k;
		if(k%2!=0)
		{
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
void ds(int n)
{
      int digit_sum = 0;
      while(n > 0)
      {
         int last_digit = n%10;
         digit_sum += last_digit;
         n = n/10;
      }
      cout << digit_sum << endl;
   }
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	string n;
	vector<auto> v;
	cin >> n;
	int l = stoi(n);
	for(int i=10; i<n.size(); i*10)
	{
		l = l/i;
		auto f = n/ds(n);
		v.push_back(f);
	}
	auto min = min_element(v.begin(), v.end());
	cout << min << '\n';
  }
}*/
/*#include <bits/stdc++.h>
using namespace std;
void sumoi(int n)
{
	int sum = 0;
	while(n>0)
	{
		int last_digit = n % 10;
		sum += last_digit;
		n = n/10;
	}
	cout << sum << endl;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n; sumoi(n);
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
void INIT(string a, string b)
{
	char temp;
	temp = a[0];
	a[0] = b[0];
	b[0] = temp;
	cout << a << " " << b << '\n';
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		string a, b; cin >> a >> b;
		INIT(a, b);
	}
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<pair<int, int>> v_p = {{1,2}, {2,3}};
	vector<pair<int, int>>::iterator it;
	for(it=v_p.begin(); it!=v_p.end(); it++)
	{
		cout<<(it->first)<<" "<<(it->second)<<'\n';
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v = {1, 2, 3, 4};
	for(int &val : v)
	{
		++val;
		cout << val << endl;
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<pair<int,int>> v_p = {{1,2},{2,3}};
	for(pair<int,int> &val : v_p)
	{
	cout << val.first << " " << val.second << '\n';
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
void stro(string a)
{
	int count1=0, count2=0;
	for(int i=0; i<a.size(); ++i)
	{
		if(a[i]=='A')
			{count1++;}
		else{count2++;}
	}
	if(count1>count2)
		{cout << "A\n";}
	else{cout << "B\n";}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		stro(s);
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
void mm(int x, int y)
{
	cout << min(x, y)<<" ";
	cout << max(x,y) << '\n';
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int x, y; cin>>x>>y;
		mm(x, y);
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		string str1, str2, str3;
		cin >> str1>>str2>>str3;
		cout << str1[0] << str2[0] <<str3[0] << '\n';
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<pair<int,int>> v_p = {{1,2},{2,3}};
	for(auto &value : v_p)
	{
		cout<<value.first<<" "<<value.second<<'\n';
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int c = a*b;
	cout << c/2 << endl;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<int, string> mp;
	mp.insert({4, "abc"});
	map<int, string> :: iterator it;
	for(auto pr : mp)
	{
		cout << pr.first << " "<<pr.second<< '\n';
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<int, string> m;
	m.insert({1, "afdcg"});
	map<int, string> :: iterator it;
	{
		for(it=m.begin(); it!=m.end(); ++it)
		{
			cout << (*it).first << " " << (*it).second << endl;
		}
	}
	for(auto &pr : m)
	{
		cout << pr.first << " " << pr.second << endl;
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int GHP, FHP, GKHP, FKHP;
		cin >> GHP >> FHP >> GKHP >> FKHP;
		int k = 1;
		while(k++ && GHP>0 && FHP>0)
		{
			if(k%2!=0)
			{
				if(FKHP<=0)
				{
					--FHP;
				}
				else if(FHP>0 && FKHP>0){
				--FKHP;}
				continue;
			}
			if(k%2==0)
			{
				if(GKHP<=0){--GHP;}
				else if(GHP>0 && GKHP>0){--GKHP;}
				continue;
			}
		}
		if(GHP<=0)
		{
			cout << "Flower\n";
		}
		else if(FHP<=0)
		{
			cout << "Gellyfish\n";
		}
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	int arr[t];
	for(int i = 0; i<t; ++i)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	for(int i=0; i<t; ++i)
	{
		cout << arr[i];
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	int n;
	cin >> n;
	for(int i=0; i<n; ++i)
	{
		int x; cin >> x;
		v.push_back(x);
	}
	for(auto i=0; i<v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	int t; cin >> t;
	while(t--){
	int query;
	cin >> query;
	if(query == 0)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	else if(query == 2){v.pop_back();}
	else if(query == 1)
	{
		int x;
		cin >> x;
		cout << v[x] << endl;;
	}
}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> v;
	for(int i=0; i<n; ++i)
	{
		int x;
		cin >> x ;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	for(int i=0; i<v.size(); ++i)
	{
		cout << v[i] << " ";
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{ 
	vector<int> v;
	int n; cin>>n;
	for(int i=0;i<n;++i){
		int x; cin >> x;
		v.push_back(x);
	}
	int x;
	cin>>x;
	v.erase(v.begin()+(x-1));
	int y, z; cin>>y>>z;
	v.erase(v.begin()+(y-1), v.begin()+(z-1));
	cout << v.size() << endl;
	for(int i=0;i<v.size();++i){
		cout << v[i] << " ";
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	int t; cin >> t;
	while(t--){
	int n; //size of vector v
	cin >> n;
	int s=0;
	for(int i=0; i<n; ++i)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	int min=*min_element(v.begin(),v.end());
	int max=*max_element(v.begin(),v.end());
	if((min+max)%2!=0)
	{
		for(int i=0; i<v.size(); ++i)
		{
			if(v[i]%2!=0)
			{
				v.erase(v.begin()+i);
				++s;
			}
		}
			cout << s << endl;
	}
	else{
   	cout << 0 << endl;
   }
}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if(c<a)
	{
		cout << "Yes\n";
	}
	else if(a==c && d<b)
	{
		cout << "Yes\n";
	}
	else{
		cout << "No\n";
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll x;
	ll M;
	cin >> x >> M;
	long long fact = 1;
	for(int i=2; i<=x; ++i)
	{
		fact= (fact*i)%M;
	}
	cout << fact << '\n';
}*/
/*#include<bits/stdc++.h>
using namespace std;
void privec(vector<pair<int,int>> &v)
{
	for(int i=0 ;i<v.size(); ++i)
	{
		cout << v[i].first<<" "<<v[i].second;
	}
	cout << endl;
}
int main()
{
	int n;
	cin >> n;
	vector<pair<int,int>> v;
	for(int i=0;i<n;++i)
	{
		int x, y;
		cin >> x >> y;
		v.push_back({x,y});
	}
	privec(v);
}*/
/*#include <bits/stdc++.h>
using namespace std;
void privec(const vector<int> &v)
{
	for(int i=0 ;i<v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}
int main()
{
	int N;
	cin >> N;
	vector<vector<int>> v(N);
	for(int i=0; i<N; ++i)
	{
		int x;
		cin >> x;
		v[i].push_back(x);
	}
	for(int i=0; i<N; ++i)
	{
		privec(v[i]);
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> v;
	for(int i=0; i<n; ++i)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	vector<int> :: iterator it;
	for(it=v.begin(); it!=v.end(); ++it)
	{
		cout << *it << " ";
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; // vector size
	cin >> n;
	vector<pair<int,int>> vp;
	for(int i=0; i<n;++i)
	{
		int x,y; cin>>x>>y;9999999
		vp.push_back({x,y});
	}
	vector<pair<int,int>> :: iterator it;
	for(auto &value : vp)
	{
		cout << value.first << " " << value.second << endl;
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<int,string> m;
	m.insert({1, "Bangladesh"});
	m.insert({5, "Bulavia"});
	for(auto i=m.begin(); i!=m.end(); ++i)
	{
		cout << i->first <<" "<<i->second<<'\n';
	}
	m.erase(5);
	m.clear();
	for(auto pr:m)
	{
		cout<<pr.first<<" "<<pr.second<<'\n';
	}
	auto i = m.find(1);
	cout << i->second;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	map<string, int> m;
	for(int i=0; i<n; ++i)
	{
		string s;
		cin >> s;
		m[s]++;
	}
	for(auto p : m)
	{
		cout << p.first << " " << p.second<<'\n';
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	unordered_map<int, string> m;
	m.insert({1, "Bangladesh"});
	m.insert({8, "America"});
	m.insert({2, "Russia"});
	for(auto p:m)
	{
		cout<<p.first<<" "<<p.second<<'\n';
	}
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	unordered_map<string, int> m;
	for(int i=0; i<n; ++i)
	{
		string s;
		cin >> s;
		m[s]++;
	}
	int q;
	cin >> q;
	while(q--)
	{
		string s;
		cin >> s;
		cout << m[s] << endl;
	}
}
*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<char, int> mp =
	{
		{'2', 2},
		{'3', 3},
		{'4', 4}
	};
	cout << mp['2'] << '\n';
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	//Your code here.
	string str;
	cin >> str;
	map<char, int> mp;
	for(int i=0; i<str.size(); ++i)
	{
		char ltr = str[i];
		mp[ltr]++;
	}
	for(auto p : mp)
	{
		cout << p.first<<" "<<p.second << endl;
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
void findprm(int n)
{
	if (n==1)
	{
		cout << "Not Prime" << '\n';
	}
	if(n==2)
	{
		cout << "Prime" << '\n';
	}
		for(int i=2; i<=9; ++i)
	{
		if(n%i!=0)
		{
			cout << "Prime" << '\n';
			continue;
		}
		else
		{
			cout << "Not Prime" << endl;
			break;
		}
	}
}
int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int m; cin >> m;
		findprm(m);
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
void optimize()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
int main()
{
	optimize();
	map<string, int> m;
	int n;
	cin >> n;
	for(int i=0; i<n; ++i)
	{
		string s;
		cin >> s;
		m[s]++;
	}
	int q;
	cin >> q;
	for(int i=0; i<q; ++i)
	{
		string s;
		cin >> s;
		auto it = m.find(s);
		if(it!=m.end())
		{
			cout << it->second << '\n';
		}
		else cout << 0 << '\n';
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<string, int> m;
	int t; cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		if(n==1)
		{
			string s; cin >> s;
			int marks; cin >> marks;
			m[s]+=marks;
		}
		if(n==3)
		{
			string s;
			cin >> s;
			cout << m[s] << '\n';
		}
		if(n==2)
		{
			string s;
			cin >> s;
			m.erase(s);
		}
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<string, string> m;
	int n;
	cin >> n;
	for(int i=0; i<n; ++i)
	{
		char c1; cin >> c1;
		char c2; cin>> c2;
		string str, str1;
		str=c1+c2;
		cin >> str1;
		m[str]=str1;
	}
	int q;
	while(q--)
	{
		char c1; cin >> c1;
		char c2; cin>> c2;
		string str;
		str=c1+c2;
		auto it = m.find(str);
		if(it!=m.end())
		{
			cout << it->second << '\n';
		}
		else cout << 0 << '\n';
	}

}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--)
		{
		int k, a, b, x, y, count = 0;
		cin >> k >> a >> b >> x >> y;
		if(k<min(a,b))
			{cout << 0 << endl;}
		if(k>=a)
		{
			cout << (k-a)/x+1 << '\n';
		}
		if(k>=b)
		{
			cout << (k-b)/y+1 << '\n';
		}
		if(k>=a+b)
		{
			cout << (k-a)/x+1;
		
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	set<string> s;
	s.insert("abc");
	s.insert("spdf");
	s.insert("def");
	auto it = s.find("abc");
	for(auto val : s)
	{
		cout << val << '\n';
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	set<string> s;
	int N;
	cin >> N;
	for(int i=0;i<N;++i)
	{
		string str;
		cin >> str;
		s.insert(str);
	}
	for(auto val : s)
	{
		cout << val << endl;
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	unordered_set<string> s;
	for(int i=0;i<n;++i)
	{
		string str;
		cin >> str;
		s.insert(str);
	}
	int q; cin >> q;
	while(q--)
	{
		string str;
		cin >> str;
		auto itr = s.find(str);
		if(itr!=s.end())
		{
			cout << "yes\n";
		}
		else cout << "no\n";
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	multiset<string> s;
	s.insert("Bangladesh");
	s.insert("Bangladesh");
	s.insert("Russia");
	for(auto i : s)
	{
		cout << i << '\n';
	}
	auto it = s.find("Bangladesh");
	if(it!=s.end()) s.erase(it);
	for(auto i : s)
	{
		cout << i << '\n';
	}
	s.erase("Bangladesh");
	for(auto i : s)
	{
		cout << i << '\n';
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, t;
	while(t--)
	{
		if(n%10!=0)
		{
			n=n-1;
		}
		else n=n/10;
	}
	cout << n << '\n';
}*/
/*#include <bits/stdc++.h>
using namespace std;
#define optimize() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
	optimize();
	map<pair<int, int>, string> m;
	int n; cin >> n;
	for(int i=0; i<n; ++i)
	{
		int l1, l2;
		cin >> l1 >> l2;
		string str;
		cin >> str;
		m[{l1,l2}]=str;
	}
	int q; cin >> q;
	while(q--)
	{
		int i1, i2; cin >> i1 >> i2;
		cout << m[{i1,i2}] << '\n';
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
#define optimize() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
	optimize();
	int n, q;
	map<string, int> m;
	cin >> n >> q;
	for(int i=0; i<n; ++i)
	{
		string str;
		int pound;
		cin >> str >> pound;
		m[str] = pound;
	}
	while(q--)
	{
		int query;
		cin >> query;
		if(query==1)
		{
			string x; int y;
			cin >> x >> y;
			m[x]+=y;
		}
		if(query==2)
		{
			string x; cin >> x;
			cout << m[x] << '\n';
		}
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<string, int> m;
	int n; cin >> n;
	while(n--)
	{
		string s;
		cin >> s;
		auto it = m.find(s);
		if(it!=m.end())
		{
			cout << "YES" << '\n';
		}
		else cout << "NO" << '\n';
		m[s]++;
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<string, int> m;
	int n; cin >> n;
	while(n--)
	{
		string str;
		cin >> str;
		auto it = m.find(str);
		if(it!=m.end())
		{
			cout << str << m[str] << '\n';
		}
		else cout << "OK" << '\n';
		m[str]++;
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	unordered_map<int, int> m;
	while(getchar() != EOF)
	{
		int num;
		cin >> num;
		m[num]++;
	}
	for(auto val : m)
	{
		cout<<val.first<<" "<<val.second<<'\n';
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, s, count = 0;
		cin >> n >> s;
		for(int i=0;i<n;++i)
		{
			int x;
			cin >> x;
			if(x>s)
			{
				s=s+1;
				count++; continue;
			}
			if(x<s)
			{
				s=s-1;
				count++; continue;
			}
		}
		cout << count << '\n';
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
void bangladesh()
{
	int x1, y1, x2, y2;
	cin>>x1>>y1>>x2>>y2;
	if(x1==x2 && y2>y1) cout << "Yes\n";
	else if(x1>x2 && y2>y1) cout << "Yes\n";
	else if(x2>x1 && y1<y2) cout << "No\n";
	else if(x1==x2 && y2==y1) cout << "Yes\n";
	else if(x1>x2 && y1>y2) cout << "No\n";
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		bangladesh();
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	set<int, greater<int>> s;
	s.insert(1);
	s.insert(2);
	for(auto val : s)
	{
		cout << val << '\n';
	}
	if(s.count(1)==true) cout << "Bangladesh\n";
	else cout << "Russia\n";
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<int> s;
	int t; cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		if(n==1)
		{
			int x; cin >> x;
			s.insert(x);
		}
		if(n==2)
		{
			int x;
			cin >> x;
			if(s.count(x)==0) continue;
			else s.erase(x);
		}
		if(n==3)
		{
			int x; cin >> x;
			if(s.count(x)==1) cout << "Yes\n";
			else cout << "No\n";
		}
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	set<int> s;
	int t, count = 0; cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		s.insert(n);
	}
	for(auto val:s)
	{
		count++;
	}
	cout << count << '\n';
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	multiset<int> s;	
	int n, q;
	cin >> n >> q;
	for(int i=0;i<n;++i)
	{
		int x;
		cin >> x;
		s.insert(x);
	}
	while(q--)
	{
		int n; cin >> n;
		if(n==0)
		{
			int x; cin >> x;
			s.insert(x);
		}
		if(n==1)
		{
			auto it = min_element(s.begin(), s.end());
			cout << *s.begin() << endl;
			s.erase(s.begin());
		}
		if(n==2)
		{
			auto it = max_element(s.begin(), s.end());
			cout << *(--s.end()) << endl;
			s.erase(--s.end());
		}
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
void solved()
{
	map<int, int> m;
	vector<int> v;
	int n;
	while(cin >> n)
	{
		m[n]++;
		if(m[n]==1) v.push_back(n);
		for(auto i : v)
			{cout<<i<<" "<<m[i]<<endl;}
	}
}
signed main()
{
	cin.tie(0)->ios::sync_with_stdio(0);
	solved();
}*/
/*#include <bits/stdc++.h>
using namespace std;
#define nl "\n";
using ll = long long;

void solve() {
  map<int, int> mp;
  vector<int> v;
  int x;
  while (cin >> x) {
    mp[x]++;
    if (mp[x] == 1) v.push_back(x);
  }
  for (auto i : v) cout << i << " " << mp[i] << nl;
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
 unordered_map<int, int> m;
 while(getchar()!=EOF)
 {
 	int num; cin >> num;
  m[num]++;
 }
 for(auto val : m)
 {
  cout<<val.first<<" "<<val.second<<'\n';
 }
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
	
	int n, m;
	cin >> n >> m;
	int i = m/n;
	if(m%n!=0)
	{
		++i; cout << i << endl;
	}
	else cout << i << '\n';
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main(void)
{
	cin.tie(NULL)->ios::sync_with_stdio(0);
	int n, count = 0; cin >> n;
	for(int i=2; i<=n; ++i)
	{
		for(int j=1; j<=n; ++j)
		{
			if(i!=pow(2,j))
		{
			count++;
		}
		}
	}
	cout << count << endl;
}*/
/*nclude <bits/stdc++.h>
using namespace std;
int32_t main(void)
{
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	int n,m;
	set<int> s; set<int> f;
	while(n--)
	{
		int x; cin >> x;
		s.insert(x);
	}
	while(m--)
	{
		int x;
		cin >> x;
		f.insert(x);
		for(auto it=s.begin(); it!=s.end(); ++it)
		{
			for(auto it2 =f.begin();it2!=f.end();++it2)
			{
				if(*it==*it2)
				{
					cout << *it << '\n'; cout.tie(nullptr);
				}
				else cout << "-1" << '\n'; cout.tie(nullptr);
			}
		}
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int32_t main(void)
{
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	int t; cin >> t;
	while(t--)
	{
		solve();
	}
}
void solve()
{
	set<int> s;
	int n, m, count = 0;
	for(int i=0; i<n; ++i)
	{
		int x;
		cin >> x; s.insert(x);
	}
	for(auto itr=s.begin(); itr!=s.end();++itr)
	{
		count+=*s.begin();
		*s.begin()/=2;
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
inline void optimize()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	cout<<unitbuf;
	cin.exceptions(cin.failbit);
}
void solve()
{
	int n, k;
	cin >> n >> k;
	multiset<ll> s;
	for(int i=0; i<n; ++i){
		int candy_ct;
		cin >> candy_ct;
		s.insert(candy_ct);
	}
	ll count = 0;
	for(int i=0; i<k; ++i){
		auto it = (--s.end());
		count += *it;
		s.erase(it);
		s.insert((*it)/2);
	}
	cout << count << '\n';
}
int32_t main(void)
{
	optimize();
	int t; cin >> t;while(t--)
	{
		solve();	}
 }*/
/*#include <bits/stdc++.h>
using namespace std;
inline void optimize()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cout << unitbuf;
	cin.exceptions(cin.failbit);
}
void solve()
{
	string str; int n;
	cin >> str >> n;
	if(str.size()>=n) cout << "Yes\n";
	else cout << "No\n";
}
int32_t main(void)
{
	optimize();
	solve();
}*/
/*#include <bits/stdc++.h>
using namespace std;
inline void optimize()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin.exceptions(cin.failbit);
	cout << unitbuf;
}
void solve()
{
	int n, m;
	cin >> n >> m;
	
}*/
/*#include <bits/stdc++.h>
using namespace std;
inline void optimize()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	cin.exceptions(cin.failbit);
	cout << unitbuf;
}
void solve()
{
	set<int> s;
	int n;
	while(cin >> n)
	{
		s.insert(n);
	}
	for(auto i : s)
	{
		cout << i << " ";
	}
}
int main()
{
	optimize();
	solve();
}*/
/*#include <bits/stdc++.h>
using namespace std;
void solve()
{
	multiset<int> s;
	int n; cin >> n;
	while(n--)
	{
		int j;
		cin >> j;
		s.insert(j);
	}
	int q; cin >> q;
	while(q--)
	{
		int n;
		cin >> n;
		if(n==1)
		{
			int x;
			cin >> x;
			s.insert(x);
		}
		if(n==2)
		{
			int x;
			cin >> x;
			auto it = s.find(x);
			if(it!=s.end()){
			s.erase(x);}
		}
		if(n==3)
		{
			cout << *(--s.end()) << '\n';
		}
		if(n==4)
		{
			cout << *(s.begin()) << '\n';
		}
	}
}
int32_t main(void)
{
	cin.tie(nullptr)->ios::sync_with_stdio(0);
	solve();
}*/
/*#include <bits/stdc++.h>
using namespace std;
void solve()
{
	map<char, int> mp;
	string s;
	cin >> s;
	for(int i=0;i<s.size();++i){
	mp[s[i]]++;}
	for(auto val : mp)
	{
		cout << val.first << " " << val.second << '\n';
	}
}
int32_t main(void)
{
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	cout.tie(nullptr); cout << unitbuf;
	solve();
}*/
/*
#include <bits/stdc++.h>
using namespace std;
void solve()
{
	gp_hash_table<int, int> m;
	int k; cin >> k;
}
*/
/*#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
void inline optimize()
{
	cin.tie(nullptr);
	cout<<unitbuf; cout.tie(nullptr);
	ios_base::sync_with_stdio(0);
}
void solve(){
	ll n, count =0;
	cin >> n;
	for(int i=1; i<=n; ++i)
	{
		count += (ll)i*i*i;
	}
	cout << count << '\n';
}
int32_t main()
{
	optimize();
	solve();
}*/
/*#include <bits/stdc++.h>
using namespace std;
void inline optimize()
{
	cin.tie(nullptr);
	cout << unitbuf;
	cout.tie(nullptr);
	ios_base::sync_with_stdio(NULL);
}
using ll = int64_t;
void sol()
{
	int l, b;
	cin >> l >> b;
	ll i = l * 1LL * b;
	cout << i << '\n';
}
int32_t main()
{
	optimize();
	sol();
}*/
/*#include <bits/stdc++.h>
using namespace std;
void inline optimize()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout << unitbuf; cout.tie(nullptr);
}
void sol()
{
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i)
	{
		for(int j=1; j<=i; ++j)
		{
			cout << "*";
		}
		cout << '\n';
	}
}
int32_t main()
{
	optimize();
	sol();
}*/
/*#include <bits/stdc++.h>
using namespace std;
void inline optimize()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout<<unitbuf; cout.tie(nullptr);
}
void sol()
{
	int t; cin>> t;
	while(t--)
	{
		int n, ds =0;
		cin >> n;
		while(n>0)
		{
			int ld = n%10;
			ds = ds+ld;
			n=n/10;
		}
		cout << ds << '\n';
	}
}
int32_t main()
{
	optimize();
	sol();
}*/
/*#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout << unitbuf;
	cout.tie(nullptr);
	int a, b;
	cin >> a >> b;
	for(int i = a; i<=b; ++i)
	{
		if(i==1) cout << "one\n";
		else if(i==2) cout << "two\n";
		else if(i==3) cout << "three\n";
		else if(i==4) cout << "four\n";
		else if(i==5) cout << "five\n";
		else if(i==6) cout << "six\n";
		else if(i==7) cout << "seven\n";
		else if(i==8) cout << "eight\n";
		else if(i==9) cout << "nine\n";
		else if(i%2==0) cout << "even\n";
		else cout << "odd\n";
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i)
	{
		for(int j=1; j<=i; ++j)
		{
			cout << j<< " ";
		}
		cout << '\n';
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
void inline optimize()
{
	ios_base::sync_with_stdio(0);
	cout << unitbuf; cin.tie(nullptr);
	cout.tie(nullptr);
}
int32_t sol()
{
	while(true)
	{
		int n;
		cin >> n;
		if(n==42)
		{
			return 0;
		}
		else cout << n << '\n';
	}
}
int32_t main()
{
	optimize();
	sol();
}*/
/*#include <bits/stdc++.h>
using namespace std;
void sol()
{
	int a,b; char s;
	cin >> a >> s >> b;
	int c = static_cast<int>(s);
	if(c==60)
	{
		if(a<b) cout << "Right\n";
		else cout << "Wrong\n";
	}
	else if(c==62)
	{
		if(a>b) cout << "Right\n";
		else cout << "Wrong\n";
	}
	else if(c==61)
	{
		if(a==b) cout << "Right\n";
		else cout << "Wrong\n";
	}
}
int32_t main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	sol();
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed sol()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << min(a, min(b,c)) << " ";
	cout << max(a, max(b,c));
	return 0;
}
int32_t main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	sol();
}*/
/*#include <bits/stdc++.h>
using namespace std;
void sol()
{
	int arr[2];
	for(int i=0; i<=2; ++i)
	{
		cin >> arr[i];
	}
	for(int i=0; i<=2; ++i)
	{
		cout << arr[i] << " ";
	}
}
int32_t main()
{
	sol();
}*/
/*#include <bits/stdc++.h>
using namespace std;
void sol()
{
	double x, y;
	cin >> x >> y;
	if(x ==0 && y==0)
	{
		cout << "Origem\n";
	}
	else if(y==0) cout << "Eixo X\n";
	else if(x==0) cout << "Eixo Y\n";
	else if(x>0 && y>0) cout << "Q1\n";
	else if(x<0 && y>0) cout << "Q2\n";
	else if(x<0 && y<0) cout << "Q3\n";
	else if(x>0 && y<0) cout << "Q4\n";
}
int32_t main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	sol();
}*/
/*#include <bits/stdc++.h>
using namespace std;
void sol()
{
	int a,b,c;
	cin >> a >> b >> c;
	int arr[3]={a,b,c};
	sort(arr, arr+3);
	for(int i=0; i<3; ++i)
	{
		cout << arr[i] << "\n";
	}
	cout << '\n';
	cout << a << '\n';
	cout << b << "\n";
	cout << c << '\n';
}
signed main()
{
	cin.tie(nullptr)->sync_with_stdio(false);
	sol();
}*/
/*#include <bits/stdc++.h>
using namespace std;
void sol()
{
	int a, b, c;
	char q, r;
	cin >> a >> q >> b >> r >> c;
	if(q=='+')
	{
		if(a+b==c) cout << "Yes\n";
		else cout << a+b << '\n';
	}
	if(q=='-')
	{
		if(a-b==c) cout << "Yes\n";
		else cout << a-b << '\n';
	}
	if(q=='*')
	{
		if(a*b==c) cout << "Yes\n";
		else cout << a*b << '\n';
	}
}
signed main()
{
	cin.tie(nullptr)->sync_with_stdio(0);
	sol();
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
	cin.tie(nullptr)->sync_with_stdio(0);
	char a; cin >> a;
	int c = static_cast<int>(a);
	if(c>=65 && c<97)
	{
		c+=32;
		char d = static_cast<char>(c);
		cout << d << '\n';
	}
	else if(c>=97)
	{
		c = c-32;
		char d = static_cast<char>(c);
		cout << d << '\n';
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
	int a, b;
	cin >> a >> b;
	if(a%b==0 || b%a==0)
	{
		cout << "Multiples\n";
	}
	else cout << "No Multiples\n";
}*/
/*#include <bits/stdc++.h>
using namespace std;
void sol()
{
	string str;
	cin >> str;
	for(int i=str.size()-1, j=0; i>=0 && j<str.size(); --i,++j)
	{
		str[j]=str[i];
	}
	cout << str;
}
signed main()
{
	sol();
}*/
/*#include <bits/stdc++.h>
using namespace std;
void increment(int &n)
{
	++n;
}
signed main()
{
	int a = 2;
	increment(a);
	cout << a << '\n';
}*/
/*#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
void sol(int n)
{
	ll mult = 1;
	for(int i=1; i<=n; ++i)
	{
		mult = mult*i;
	}
	cout << mult << '\n';
}
signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n; cin >> n;
		if(n==0) cout << 1 << '\n';
		if(n<=20 && n>=1){sol(n);}
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
void jbb(vector<int> v){ for(int i=0; i<v.size(); ++i) cout << v[i] << " ";} 
signed main()
{
	vector<int> v; int n;
	while(cin >> n)
	{
		v.push_back(n);
	}
	jbb(v);
}*/
/*#include <bits/stdc++.h>
using namespace std;
void sol()
{
	vector<int> v;
	int n; cin >> n;
	for(int i=0; i<n; ++i)
	{
		int x; cin >> x; v.push_back(x);
	}
	vector<int> v2 = v;
	reverse(v2.begin(), v2.end());
	if(v2==v) cout << "Yes\n";
	else cout << "No\n";
}
signed main()
{
	sol();
}*/
/*#include <bits/stdc++.h>
using namespace std;
#define PB push_back
void sol()
{
	int n; cin >> n; vector<int> v;
	for(int i=0; i<n; ++i)
	{
		int x; cin >> x;
		v.PB(x);
	}
	sort(v.begin(), v.end());
	for(int i=0; i<n; ++i)
	{
		cout << v[i] << " ";
	}
}
signed main()
{
	sol();
}*/
/*#include <bits/stdc++.h>
using namespace std;
void sol()
{
	vector<int> v;
	int n; cin >> n;
	for(int i=0; i<n; ++i)
	{
		int x; cin >> x;
		v.push_back(x);
	}
	vector<int> r = v	sort(r.begin(), r.end());
	v[i]=
}*/
/*#include <bits/stdc++.h>
using namespace std;
void sol()
{
	int k, r; cin >> k >> r;
	int c=k;
	int count = 0;
	while(c%10!=0 || c%10!=r)
	{
		c+=k;
		count++;
	}
		cout << count << '\n';
}
signed main()
{
	cin.tie(0)->sync_with_stdio(0);
	sol();
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
	map<string, int> m;
	int n; cin>>n;
	for(int i=0; i<n ; ++i)
	{
		string x; cin >> x;
		m[x]++;
	}
	for(auto c : m)
	{
		cout << c.first<< " " <<c.second << '\n';
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
	int n; cin >> n;
	if((n & 1) == 0)
	{
		cout << "Even\n";
	}
	else cout << "Odd\n";
	if((n&(n-1)) == 0) cout << "Power\n";
	else cout << "Voila\n";
}*/
/*#include <bits/stdc++.h>
using namespace std;
void BIT()
{
	unsigned int n; cin >> n;
	cout << (n ^ 0xFFFFFFFF) << '\n';
}
signed main()
{
	int t; cin >> t;
	while(t--){
		BIT();
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
	int n; cin >> n;
	set<string> s;
	while(n--){
		string str; cin >> str;
		s.insert(str);
	}
	for(auto val : s)
	{
		cout << val << endl;
	}
}*/
/*Our Monk loves candy!
While taking a stroll in the park, he stumbled upon N Bags with candies.
 The i'th of these bags contains Ai candies.
He picks up a bag, eats all the candies in it and drops it on the ground. But as soon as he drops the bag, the number of candies in the bag increases magically! Say the bag that used to contain X candies (before eating), now contains [X/2] candies! ,where [x] is the greatest integer less than x (Greatest Integer Function).
Amazed by the magical spell, Monk can now have a lot more candies! But he has to return home in K minutes. In a single minute,Monk can consume all the candies in a single bag, regardless of the number of candies in it.
Find the maximum number of candies that Monk can consume.

Input:
First line contains an integer T. T test cases follow.
First line of each test case contains two space-separated integers N and K.
Second line of each test case contains N space-separated integers,the number of candies in the bags.

Output:
Print the answer to each test case in a new line.

Constraints:
1 ≤ T ≤ 10
1 ≤ N ≤ 105
0 ≤ K ≤ 105
0 ≤ Ai ≤ 1010
Sample Input

1
5 3
2 1 7 4 2

Sample Output

14

Time Limit: 2
Memory Limit: 256
Source Limit:
Explanation

The state of bags is:
2 1 7 4 2
Monk eats all candies from Third bag (7). The state of bags becomes:
2 1 3 4 2
Monk eats all candies from Fourth bag (4). The state of bags becomes:
2 1 3 2 2
Monk eats all candies from Third bag (3). The state of bags becomes:
2 1 1 2 2
Hence, the Monk eats 7+4+3= 14
take n bags and k times. declare a vecotr of n 
elements. set a counter to 0.while(k--)
 sort the vector, access last element
  counter+=lastelement, lastelemet/2.
   cout counter 
*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
	int t; cin >> t;
	while(t--){
	int n, k; int count = 0;
	cin >> n >> k;
	vector<int> v;
	for(int i=0;i<n;++i){
		int x; cin >> x;
		v.push_back(x);
	}
	while(k--){
		sort(v.begin(), v.end());
		count+=v[v.size()-1];
		v[v.size()-1]=v[v.size()-1]/2;
	}
	cout << count << '\n';
}
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
	int t; cin >> t;
	multiset<int> s;
	while(t--)
	{
		int n, k, count = 0; cin >> n >> k;
		while(n--)
		{
			int x; cin >> x; s.insert(x);
		}
		while(k--)
		{
			count += *(--s.end());
			s.insert(*(--s.end())/2);
			s.erase(*(--s.end()));
		}
		cout << count << '\n';
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
	queue<int> s; int n;
	while(cin >> n){
		s.push(n);
	}
	while(!s.empty())
	{
		cout <<"size: "<< s.size()<< endl << s.front() << endl;
		s.pop();
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
	queue<int> s;
	int n;
	while(cin>>n)
	{
		s.push(n);
	}
	cout << s.size()<<'\n';
	while(!s.empty())
	{
		cout<<s.front()<<'\n';
		s.pop();
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
signed main()
{
	int n; cin >> n;
	vector<int> v(n+1);
	for(int i=1; i<=n; ++i)
	{
		cin >> v[i];
	}
	int q; cin >> q;
	while(q--)
	{
		int l, r;
		cin >> l >> r;
		ll sum = 0;
		for(int i=l; i<=r; ++i)
		{
			sum+=v[i];
		}
		cout << sum << '\n';
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
	int g,c,l;
	cin >> g >> c >> l;
	int i = max(max(g,c),l);
	int j = min(min(g,c),l);
	if((i-j)>=10) cout << "check again\n";
	else cout << "final " << c << endl;
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
	int n, i;
	cin >> n;
	for(i = 1; i <= n; ++i){
		if(n%i==0) cout << i << '\n';
	}
}*/
/*#include <bits/stdc++.h>
#define b '\n'
#define c cout

using namespace std;
signed main()
{
	int n, l;
	cin >> n >> l;
	int max = (n>l) ? n:l;
	do{
		if(max % n==0 && max%l == 0) {c<<max<<b; break;}
		else ++max;
	}while(1);

}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
    multiset<int> s;
    int g, c, l;
    s.insert(g);
    s.insert(c);
    s.insert(l);
    int m = *(s.begin());
    int i = *(--s.end());
    if((i-m)>=10) cout << "check agan\n";
    else cout << "final "<<*(++s.begin());
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int t; cin >> t;
    while(t--){
    map<char, int> m;
    m.insert(make_pair('T',1));
    m.insert(make_pair('i',1));
    m.insert(make_pair('m',1));
    m.insert(make_pair('u',1));
    m.insert(make_pair('r',1));
    map<char, int> mp;
    int n; cin >> n;
    for(int i=0; i<n; ++i)
    {
        char c; cin >> c;
        mp[c]++;
    }
    if(mp == m) cout << "Yes\n";
    else cout << "No\n";
}
/*#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	void solution()
	{
		int x;cin >> x; cout  << x;
	}
};
signed main()
{
	int t; cin >> t; while(t--)
	{
		Solution obj;
		obj.solution();
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	if(n&1) cout << "Odd\n";
	else cout << "Even\n";
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
	int __;
	for(cin>>__;__--;)
	{
		int n; cin >> n;
		cout << n << '\n';
	}
}*/
/*#include <bits/stdc++.h>
#include <numeric>
using namespace std;
signed main()
{
  int t; scanf("%d", &t);
while(t--)
{
  int x; cin >> x;
  int y, b;
 vector<int> v;
for(y=1; y<x;++y){
   b = gcd(x,y)+y;
   v.push_back(b);
}
sort(v.begin(), v.end());
cout << v[v.size()-1] << '\n';
}
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
	cout.tie(nullptr);
	int t; scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		for(int i=1; i<=n; ++i)
		{
			if(n%i==0) cout << i <<" ";
		}
		cout << '\n';
	}
}
*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
	int x,y; scanf("%d %d", &x, &y);
	cout << x*pow(2,y) << '\n';
}*/
/*#include <bits/stdc++.h>
using namespace std;
signed main()
{
	vector<int> v; int x;
	while(cin >> x) v.push_back(x);
	do{
		for(auto i : v) cout << i;
			cout << '\n';
	}while(next_permutation(v.begin(), v.end()));

}*/
/*#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	vector<int> v(n);
	for(int i=0 ; i<n; ++i) cin>> v[i];
	int low =0, high=n-1;
	int target; cin >> target;
	while(low<=high){
			int mid=(low+high)/2;
		if(v[mid]==target){
		cout << "Success, index: " << mid;
		break;}
		else if(v[mid]>target) high = mid-1;
		else{low=mid+1;}
	}
	return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	vector<int> v(n);
	for(int i=0; i<n;++i) cin>> v[i];
	int to_find;
	cin >> to_find;
	int low=0, high=n-1;
	while(high-low>1){
		int mid=(high+low)/2;
		if(v[mid]<to_find) low=mid+1;
		else high=mid;
	}
		if(v[low]==to_find) cout << low << '\n';
		else if(v[high]==to_find) cout << high << '\n';
	else cout << "not found"<<'\n';
	
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main(){
	string s; int n;
	cin >> s >> n;
	for(int i=0; i<n;++i){
		s.erase(i,1);
	}
	cout << s << '\n';
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		vector<int> v(2);
		v[0]= a ;
		v[1] = b;
		sort(v.begin(), v.end());
		vector<int> v1(2);
		v1[0]=c; v1[1]=d;
		sort(v1.begin(), v1.end());
		if(v[1]<v1[0] || v1[1]<v[0]) cout << "NO\n";
		else cout << "YES\n";
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main(){
	int k, n , w, count=0;
	cin >> k >> n >> w;
	for(int i=1; i<=w; ++i){
		int multiplyer = k*i;
		count = count + multiplyer;
	}
	if((count-n)<0) cout << 0;
	else cout << (count - n);
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	for(int i=1; i<=k; ++i){
		if(n%10==0) n/=10;
		else n-=1;
	}
	cout << n;
}*/
/*#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
long long fact[N];
int main(){
	fact[0]=fact[1]=1;
	for(int i=2; i<=N; ++i)
	{
		fact[i]=fact[i-1]*i;
	}
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << fact[n] << '\n';
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int hsh[N];
signed main(){
	int n; cin >> n;
	int arr[n];
	for(int i=0; i<n; ++i){
		cin >> arr[i];
		hsh[arr[i]]++;
	}
	int t; cin >> t;
	while(t--){
		int x;
		cin >> x;
		cout << hsh[x] << '\n';
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int hsh[N];
signed main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; ++i){
		cin >> arr[i];
		hsh[arr[i]]++;
	}
	int t; cin >> t;
	while(t--){
		int c; cin >> c;
		cout << hsh[c] << '\n';
	}
}*/
/*#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> hsh(N);
signed main(){
	for(int i=0; i<N; ++i){
		hsh[i]=0;
	}
	int n; cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; ++i){
		cin >> v[i];
		hsh[v[i]]++;
	}
	int t; cin >> t;
	while(t--){
		int x; cin >> x;
		cout << hsh[x] << '\n';
	}
}*/
