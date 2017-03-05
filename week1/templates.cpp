#include <iostream>


template <class T>
T sum(T array[], int size) {
	T total = 0;
	for(int count = 0; count < size; ++count){
		total += array[count];
	}
	return total;
}


int main(void) {
	int array[] = { 1, 2, 3, 4 };
	int total = sum(array, 4);
	std::cout << total << std::endl;

	double array2[] = { 1.2, 3.3, 5.9, 6.2 };
	double total2 = sum(array2, 4);
	std::cout << total2 << std::endl;
}
