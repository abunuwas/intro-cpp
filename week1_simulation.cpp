// The following program computes 
// the probability ofr dice possibilities 

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int sides = 6;

inline int r_sides(){ return (rand() % sides + 1); }


int main (void) {
	const int n_dice = 2;
	int d1, d2, trials;
	srand(clock());
	std::cout << "\nEnter the number of trials: ";
	std::cin >> trials; // compare to scanf
	int* outcomes = new int[n_dice * sides + 1];
	for (int j = 0; j < trials; ++j)
	    outcomes[(d1 = r_sides()) + (d2 = r_sides())]++;
	cout << "probability\n";
	for (int j = 2; j < n_dice * sides + 1; ++j)
	    std::cout << "j = " << j << " p = "
	    	<< static_cast<double>(outcomes[j])/trials
	    	<< std::endl;
}
