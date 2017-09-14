#include <iostream>
#include <eigen-eigen-5a0156e40feb/Eigen/Eigenvalues>

/**
 * Bare Hamiltonian class
 * @author Patrick O'Brien <obrienpja@gmail.com>
 */

class BareHamiltonian
{
	private:
		double x;
		Eigen::MatrixXd ham = Eigen::MatrixXd(2,2);
	public:
		void setX(double xVal);	
		double getX();
		void createSigmaX();
		BareHamiltonian(double xVal);
		void printEigenvalues();
};
