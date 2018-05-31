#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

#define NUMBER 1000000007

int main(void){

	long int N;	
	std::cin >> N;

	int count;	
	for(count = 0;1;++count){
		if(N<NUMBER){
			N = (N - 7) * 10 + 7;
		}else if(N>NUMBER){
			N = (N - 7) / 10 + 7;
		}else{
			break;
		}
	}

	print(count);

	return 0;

}
