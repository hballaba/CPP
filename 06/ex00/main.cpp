#include "Scalar.hpp"

int main(int argc, char **argv) {
	
	try {
		if (argc != 2) {
		throw "Wrong number of arguments";
		return 1;
	}
		if (!std::isdigit(argv[1][0]) && !argv[1][1]) {
			Scalar scalar = Scalar(argv[1][0]);
			std::cout << scalar;
		}
		else if (std::isdigit(argv[1][0]) || (std::isdigit(argv[1][1]) && argv[1][0] == '-')) {
			std::string::size_type sz;
			double d = std::stod(argv[1], &sz);
			Scalar scalar = Scalar(d);
			std::cout << scalar;
		}
		else  {
			Scalar scalar = Scalar(argv[1]);
			std::cout << scalar;
		}
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	catch (const char *str) {
		std::cerr << str << std::endl;
	}
	return (0);
}