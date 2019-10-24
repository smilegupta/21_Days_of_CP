// SUBLIME HAX
	/*nope
	cat
	// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars
	// ayy
	// ' lamo
	*/
	#include <algorithm>
	#include <bitset>
	#include <complex>
	#include <deque>
	#include <fstream>
	#include <functional>
	#include <initializer_list>
	#include <iomanip>
	#include <ios>
	#include <iosfwd>
	#include <iostream>
	#include <iterator>
	#include <limits>
	#include <list>
	#include <map>
	#include <numeric>
	#include <queue>
	#include <random>
	#include <ratio>
	#include <regex>
	#include <set>
	#include <sstream>
	#include <stack>
	#include <string>
	#include <tuple>
	#include <unordered_map>
	#include <unordered_set>
	#include <utility>
	#include <valarray>
	#include <vector>
	using namespace std;
	template<class T,class U>
	ostream &operator<<(ostream &os,const pair<T,U> &x) {
		return os<<"("<<x.first<<","<<x.second<<")";
	}
	namespace dbg_ns {
		template<typename C>
		struct is_iterable {
			template<class T> static long check(...);
			template<class T> static char check(int,
				typename T::const_iterator = C().end());
			enum {
				value = sizeof(check<C>(0)) == sizeof(char),
				neg_value = sizeof(check<C>(0)) != sizeof(char)
			};
		};
		template<class T> ostream &_out_str(ostream &os,const T &x) {
			return os<<'"'<<x<<'"';
		}
		template<class T> ostream &_dbg2_5(ostream &,const T &);
		template<bool B,typename T=void> using eit=typename enable_if<B,T>::type;
		template<class T>
		inline ostream &_dbg3(ostream &os,eit<is_iterable<T>::neg_value,const T> &x) {
			return os<<x;
		}
		template<class T>
		inline ostream &_dbg3(ostream &os,eit<is_iterable<T>::value,const T> &V) {
			os<<"{";
			bool ff=0;
			for(const auto &E:V) _dbg2_5(ff?os<<",":os,E), ff=1;
			return os<<"}";
		}
		template<>
		inline ostream &_dbg3<string>(ostream &os,const string &x) {
			return _out_str(os,x);
		}
		template<>
		inline ostream &_dbg3<const char *>(ostream &os,const char *const &x) {
			return _out_str(os,x);
		}
		template<class T> inline ostream &_dbg2_5(ostream &os,const T &x) {
			return _dbg3<T>(os,x);
		}
		template<class T,typename... Args> ostream &_dbg2(ostream &os,vector<string>::iterator nm,const T &x,Args&&... args);
		inline ostream &_dbg2(ostream &os,vector<string>::iterator) { return os; }
		template<typename... Args>
		inline ostream &_dbg2(ostream &os,vector<string>::iterator nm,const char *x,Args&&... args) {
			return _dbg2(_dbg3<const char *>(os<<"  ",x),nm+1,args...);
		}
		template<class T,typename... Args>
		inline ostream &_dbg2(ostream &os,vector<string>::iterator nm,const T &x,Args&&... args) {
			return _dbg2(_dbg3<T>(os<<"  "<<*nm<<"=",x),nm+1,args...);
		}
		vector<string> split(string s) {
			vector<string> Z;
			string z="";
			s+=',';
			int dep=0;
			for(char c:s) {
				if(c==',' && !dep) Z.push_back(z),z="";
				else z+=c;
				if(c=='(') ++dep;
				if(c==')') --dep;
			}
			return Z;
		}
		template<typename... Args> inline ostream &_dbg1(int ln,const string &nm,Args&&... args) {
			auto nms=split(nm);
			return _dbg2(cerr<<"L"<<ln<<":",nms.begin(),args...)<<endl;
		}
	}
	#define dbg(...) dbg_ns::_dbg1(__LINE__,#__VA_ARGS__,__VA_ARGS__)
	#define sz(x) (int(x.size()))
	#define eprintf(...) fprintf(stderr,__VA_ARGS__)
	#define fi first
	#define se second
	#define pb push_back
// END SUBLIME HAX
// #include <bits/extc++.h>
// using namespace __gnu_pbds;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld; //CARE
typedef complex<ld> pt;
const ld eps=(ld)1e-8;
const ld tau=2*(ld)acosl(-1);
const int inf=1e9+99;
const ll linf=1e18+99;
const int P=1e9+7;











void go(int tn) {
	printf("Case #%d: ",tn);

	int D; string S;
	cin>>D>>S;

	int cc=0;
	for(char c:S) if(c=='S') ++cc;
	if(cc>D) {
		printf("IMPOSSIBLE\n");
		return;
	}

	int str=1;
	int W=0;
	for(char c:S) {
		if(c=='S') W+=str;
		else str*=2;
	}
	int Z=0;

	for(;W>D;) {
		for(int i=sz(S);--i>=0;) {
			if(i>0 && S[i]=='S' && S[i-1]=='C') {
				int w=1;
				for(int j=0;j<i-1;j++) if(S[j]=='C') w*=2;
				W-=w;
				swap(S[i],S[i-1]);
				++Z;
				goto next;
			}
		}
		next:;
	}


	printf("%d\n",Z);
}





int32_t main() {
	int T; cin>>T; for(int t=1;t<=T;t++) go(t);
}





