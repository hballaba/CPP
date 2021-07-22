#ifndef SCALAR_HPP

# define SCALAR_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Scalar {
private:

	double _double;
	int _int;
	char _char;
	float _float;
	std::string _str;

public:
	Scalar(std::string str);
	Scalar(char c);
	Scalar(double c);
	Scalar();
	~Scalar();
	Scalar(Scalar const & toCopy);
	Scalar operator= (Scalar const & toCopy);
	char		getChar() const;
	int			getInt() const;
	float		getFloat() const;
	double		getDouble() const;
	std::string getString() const;
};

std::ostream &operator << (std::ostream &stream, const Scalar &scalar);

#endif