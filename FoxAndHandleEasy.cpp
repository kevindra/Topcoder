// BEGIN CUT HERE
        // END CUT HERE
#line 4 "FoxAndHandleEasy.cpp"

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

#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define fori(type,x,a,b) for( type (x) = (a) ; (x) < (b) ; (x)++)
#define forr(type,x,a,b) for( type (x) = (a) ; (x) >= (b) ; (x)--)
#define FI(x,a,b) fori(int,x,a,b)
#define FRI(x,a,b) forr(int,x,a,b)
#define FLL(x,a,b) fori(long long,x,a,b)
#define FRLL(x,a,b) forr(long long,x,a,b)
#define fill(x,v,n) memset((x),(v),n*sizeof(x));

typedef unsigned long long ull;
typedef long long ll;

const double pi = acos(-1.0);

class FoxAndHandleEasy {
public:

    string isPossible(string s, string t) {
        string ret;
        int pos = t.find(s);
        while(pos != -1)
        {
        	string left = t.substr(0, pos);
        	string right = t.substr(pos+s.length(), t.length()-s.length());
        	if(s == left+right) return "Yes";
        	pos = t.find(s, pos+1);
        }
        return "No";
    }

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "JFslIQJ"; string Arg1 = "JFslIQJFslIQJJ"; string Arg2 = "Yes"; verify_case(0, Arg2, isPossible(Arg0, Arg1)); }
	void test_case_1() { string Arg0 = "Ciel"; string Arg1 = "FoxCiel"; string Arg2 = "No"; verify_case(1, Arg2, isPossible(Arg0, Arg1)); }
	void test_case_2() { string Arg0 = "FoxCiel"; string Arg1 = "FoxFoxCielCiel"; string Arg2 = "Yes"; verify_case(2, Arg2, isPossible(Arg0, Arg1)); }
	void test_case_3() { string Arg0 = "FoxCiel"; string Arg1 = "FoxCielCielFox"; string Arg2 = "No"; verify_case(3, Arg2, isPossible(Arg0, Arg1)); }
	void test_case_4() { string Arg0 = "Ha"; string Arg1 = "HaHaHaHa"; string Arg2 = "No"; verify_case(4, Arg2, isPossible(Arg0, Arg1)); }
	void test_case_5() { string Arg0 = "TheHandleCanBeVeryLong"; string Arg1 = "TheHandleCanBeVeryLong"; string Arg2 = "No"; verify_case(5, Arg2, isPossible(Arg0, Arg1)); }
	void test_case_6() { string Arg0 = "Long"; string Arg1 = "LongLong"; string Arg2 = "Yes"; verify_case(6, Arg2, isPossible(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE

//int main() {
//    FoxAndHandleEasy ___test;
//    ___test.run_test(-1);
//    int a;
//    cin >> a;
//}
// END CUT HERE 
