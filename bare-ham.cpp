#include "bare-ham.h"

/**
 * Constructor of the BareHamiltonian class
 * @param xVal The value of x for the Hamiltonian
 */
BareHamiltonian :: BareHamiltonian(double xVal)
{
	x = xVal;
}

/**
 * Set the value of x for the Hamiltonian
 * @param xVal The value of x for the Hamiltonian
 */
void BareHamiltonian :: setX(double xVal)
{
	x = xVal;
}

/**
 * Getter for the value of x of the Hamiltonian
 */
double BareHamiltonian :: getX()
{
	return x;
}

/**
 * Create the sigma x matrix
 */
Eigen::MatrixXd BareHamiltonian :: createSigmaX()
{
	Eigen::MatrixXd A(2,2);
	A(0,0) = 0;
	A(0,1) = 1;
	A(1,0) = 1;
	A(1,1) = 0;
	return A;
}

