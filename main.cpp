#include <iostream>
#include "bare-ham.h"

int main()
{
	BareHamiltonian bare(1.2);
	bare.addHoppingContribution(25);
	bare.printHamiltonian();
	bare.printEigenvalues();
	
	return 0;
}
