//#include <iostream>
#include "bare-ham.h"

int main()
{
	BareHamiltonian bare(1.2);
	std::cout << "The Hamiltonian is: " << bare.getX() << std::endl;
	std::cout << "Pauli x matrix: " << std::endl << bare.createSigmaX() << std::endl;
	
	return 0;
}
