#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int n,m;
	std::cin >> n >> m;

	std::vector<std::string> s;
	std::string dummy;
	for(int i=0;i<n;++i){
		std::cin >> dummy;
		s.push_back(dummy);
	}

	for(int i=0;i<n;++i){
		for(int j=0;j<m-3;++j){
			bool l = (s[i][j] == 'L');
			bool o = (s[i][j+1] == 'O');
			bool v = (s[i][j+2] == 'V');
			bool e = (s[i][j+3] == 'E');
			if(l == true && o == true && v == true && e == true){
				print("YES");
				return 0;
			}
		}
	}

	print("NO");




	return 0;
}
