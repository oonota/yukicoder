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


	int N,X; cin >> N >> X;
	VI a(N,0);
	REP(i,N) cin >> a[i];
	int cnt[101010] = {0};
	REP(i,N) cnt[a[i]]++;

	long int ans = 0;
	REP(i,N){
		int d = X - a[i];
		if (0 <= d and d <= 100000) ans += cnt[d];
	}

	print(ans);

	return 0;

}
