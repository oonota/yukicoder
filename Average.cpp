#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int A,B;
	std::cin >> A >> B;

	int count = 0;
	for(int i=A;i<=B;++i){
		if((A+B+i)%3==0){
			count++;
		}
	}

	print(count);

	return 0;
}
