#include <iostream>
#include "bare-ham.h"

int main()
{
	BareHamiltonian bare(1.2);
	bare.createSigmaX();
	bare.printEigenvalues();
	
	return 0;
}
