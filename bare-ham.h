#include <iostream>
#include <typeinfo>
#include <eigen-eigen-5a0156e40feb/Eigen/Eigenvalues>

/**
 * Bare Hamiltonian class
 * @author Patrick O'Brien <obrienpja@gmail.com>
 */

class BareHamiltonian
{
	private:
		Eigen::MatrixXd ham;
	public:
		void createSigmaX();
		void printEigenvalues();
		void addHoppingContribution(int dim);
		void printHamiltonian();
};
