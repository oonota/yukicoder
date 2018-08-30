#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	long int n;
	std::cin >> n;

	int i;
	int sheep_num = 0;
	for(i=1;sheep_num<n;++i){
		sheep_num += i;
	}

	print(i-1);
	return 0;

}
