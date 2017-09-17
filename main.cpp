#include <iostream>
#include "bare-ham.h"

int main()
{
	BareHamiltonian bare;
	bare.addHoppingContribution(25);
	bare.printHamiltonian();
	bare.printEigenvalues();

	return 0;
}
