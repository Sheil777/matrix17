#include "../libMatrix/fillArray.h"
#include "../libMatrix/printArray.h"
#include "../libMatrix/inputMatrix.h"
#include <iostream>
#include <boost/program_options.hpp>

namespace po = boost::program_options;

int main(int argc, char** argv)
{/*
	std::cout << "argv[0]: " << argv[0] << std::endl;
	std::cout << "argv[1]: " << argv[1] << std::endl;
	std::cout << "argc: " << argc << std::endl << std::endl;
*/

// Declare the supported options.
	po::options_description desc("Allowed options");
	desc.add_options()
		("help", "produce help message")
		("width", po::value<int>()->default_value(3), "width arr")
		;

	po::variables_map vm;
	po::store(po::parse_command_line(argc, argv, desc), vm);
	po::notify(vm);

	if (vm.count("help")) {
		std::cout << desc << "\n";
		return 1;
	}

	if (vm.count("width")) {
		//std::cout << vm["width"].as<int>() << "\n";
	}
	else {
		std::cout << "Compression level was not set.\n";
	}

	int const size = vm["width"].as<int>();

	int const n = 3;
	int const m = 3;

	//double **arr = new double *[size];
	double **arr1 = new double *[n];

	//fillArray(arr, size);
	//inputMatrix(arr, n, m);
	for (int i = 0; i < n; i++)
		arr1[i] = new double[m];

	arr1[0][0] = 3;
	arr1[0][1] = -1;
	arr1[0][2] = 2;

	arr1[1][0] = 4;
	arr1[1][1] = 2;
	arr1[1][2] = 0;

	arr1[2][0] = -5;
	arr1[2][1] = 6;
	arr1[2][2] = 1;

	//printArr(arr, size);
	printArr(arr1, n, m);

	double **arr2 = new double *[3];

	for (int i = 0; i < 3; i++)
		arr2[i] = new double[2];

	arr2[0][0] = 8;
	arr2[0][1] = 1;

	arr2[1][0] = 7;
	arr2[1][1] = 2;

	arr2[2][0] = 2;
	arr2[2][1] = -3;
	std::cout << std::endl;
	printArr(arr2, 2, 2);

	return 0;
}
