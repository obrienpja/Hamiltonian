#include "bare-ham.h"

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

/**
 * Prints the eigenvalues of ham
 */
void BareHamiltonian::printEigenvalues()
{
	Eigen::EigenSolver<Eigen::MatrixXd> es;
	es.compute(ham);
	std::cout << "The eigenvalues are: " << std::endl << es.eigenvalues().real() << std::endl;
}
