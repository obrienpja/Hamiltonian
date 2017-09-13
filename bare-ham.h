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
	public:
		void setX(double xVal);	
		double getX();
		Eigen::MatrixXd createSigmaX();
		BareHamiltonian(double xVal);
};
