#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	std::string S;

	std::cin >> S;
	int S_size = S.size();
	for(int i=0;i<S_size;++i){
		if(S[i] == 'I' || S[i] == 'l'){
			S[i] = '1';
		}else if(S[i] == 'O' || S[i] == 'o'){
			S[i] = '0';
		}

	}
	print(S);


	return 0;

}
