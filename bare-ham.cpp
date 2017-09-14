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
 * Loads the sigma x matrix into ham
 */
void BareHamiltonian :: createSigmaX()
{
	ham(0,0) = 0;
	ham(0,1) = 1;
	ham(1,0) = 1;
	ham(1,1) = 0;
}

/**
 * Prints the eigenvalues of ham
 */   
void BareHamiltonian::printEigenvalues()
{
	Eigen::EigenSolver<Eigen::MatrixXd> es;
	es.compute(ham);
	std::cout << "The eigenvalues are: " << std::endl << es.eigenvalues() << std::endl;
}
