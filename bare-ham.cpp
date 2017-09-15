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
	ham.resize(2,2);
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

/**
 * Add hopping contribution to the Hamiltonian
 * @param dim The dimension of the Hamiltonian, set by the system size
 */
void BareHamiltonian::addHoppingContribution(int dim)
{
	ham.resize(dim, dim);
	ham = Eigen::MatrixXd::Zero(dim, dim);
	
	for(int i = 0; i < dim; i++)
	{
		ham(i, (i+1) % dim) += 1;
		ham((i+1) % dim, i) += 1; 
	}
}

/**
 * Print the Hamiltonian
 */
void BareHamiltonian::printHamiltonian()
{
	std::cout << "The Hamiltonian is: " << std::endl << ham << std::endl;
}
