// BEGIN CUT HERE
// END CUT HERE
#line 4 "CucumberMarket.cpp"

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

class CucumberMarket {
public:

	string check(vector<int> p, int b, int K) {
		int n = p.size();
		bool flag = true;
		FI(i,0,1<<n)
		{
			int k = 0, sum = 0;
			FI(j,0,n)
			{
				if ((i & (1 << j)) > 0)
					k += 1, sum += p[j];
			}

			if (k == K && sum > b) {
				flag = false;
				break;
			}
		}
		if (flag)
			return "YES";
		return "NO";
	}

// BEGIN CUT HERE
public:
	void run_test(int Case) {
		if ((Case == -1) || (Case == 0))
			test_case_0();
		if ((Case == -1) || (Case == 1))
			test_case_1();
		if ((Case == -1) || (Case == 2))
			test_case_2();
		if ((Case == -1) || (Case == 3))
			test_case_3();
		if ((Case == -1) || (Case == 4))
			test_case_4();
	}
private:
	template<typename T> string print_array(const vector<T> &V) {
		ostringstream os;
		os << "{ ";
		for (typename vector<T>::const_iterator iter = V.begin();
				iter != V.end(); ++iter)
			os << '\"' << *iter << "\",";
		os << " }";
		return os.str();
	}
	void verify_case(int Case, const string &Expected, const string &Received) {
		cerr << "Test Case #" << Case << "...";
		if (Expected == Received)
			cerr << "PASSED" << endl;
		else {
			cerr << "FAILED" << endl;
			cerr << "\tExpected: \"" << Expected << '\"' << endl;
			cerr << "\tReceived: \"" << Received << '\"' << endl;
		}
	}
	void test_case_0() {
		int Arr0[] = { 1000, 1, 10, 100 };
		vector<int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0])));
		int Arg1 = 1110;
		int Arg2 = 3;
		string Arg3 = "YES";
		verify_case(0, Arg3, check(Arg0, Arg1, Arg2));
	}
	void test_case_1() {
		int Arr0[] = { 1000, 1, 10, 100 };
		vector<int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0])));
		int Arg1 = 1109;
		int Arg2 = 3;
		string Arg3 = "NO";
		verify_case(1, Arg3, check(Arg0, Arg1, Arg2));
	}
	void test_case_2() {
		int Arr0[] = { 33, 4 };
		vector<int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0])));
		int Arg1 = 33;
		int Arg2 = 1;
		string Arg3 = "YES";
		verify_case(2, Arg3, check(Arg0, Arg1, Arg2));
	}
	void test_case_3() {
		int Arr0[] = { 1, 1, 1, 1, 1, 1 };
		vector<int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0])));
		int Arg1 = 2;
		int Arg2 = 4;
		string Arg3 = "NO";
		verify_case(3, Arg3, check(Arg0, Arg1, Arg2));
	}
	void test_case_4() {
		int Arr0[] = { 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000 };
		vector<int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0])));
		int Arg1 = 10000;
		int Arg2 = 9;
		string Arg3 = "YES";
		verify_case(4, Arg3, check(Arg0, Arg1, Arg2));
	}

// END CUT HERE

};

// BEGIN CUT HERE

int main() {
	CucumberMarket ___test;
	___test.run_test(-1);
	int a;
//	cin >> a;
}
// END CUT HERE 
