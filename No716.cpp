#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

  int N; cin >> N;
	VI a(N,0);

	REP(i,N) cin >> a[i];

	VI d(N-1,0);
	REP(i,N-1) d[i] = a[i+1] - a[i];
	sort(d.begin(),d.end());
	print(d.front());
	print(a[N-1]-a[0]);


	return 0;

}
