
#include <iostream>

using namespace std;


inline void swap(int& i, int& j){
	int tmp = i;
	i = j;
	j = tmp;
}


inline void swap(double& i, double& j){
	double tmp = i;
	i = j;
	j = tmp;
}


int main() {
	int m = 5, n = 10;
	double x = 5.3, y = 10.6;
	std::cout << "inputs: " << m << ", " << n << std::endl;
	swap(m,n);
	std::cout << "outputs: " << m << ", " << n << std::endl;
	std::cout << "double inputs: " << x << ", " << y << std::endl;
	swap(x,y);
	std::cout << "double outputs: " << x << ", " << y << std::endl;
}
