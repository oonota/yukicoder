#include <iostream>
#include <string>

#define print(x) std::cout << x  

int
main(int argc, char* argv[]) {

	int N;
	std::cin >> N;
	
	int a_1,a_2;
	N>10?a_1=10:a_1=1;

	print(a_1);
	print(' ');
	print(N-a_1);
	print(std::endl);

	return 0;
}
