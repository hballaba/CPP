#include "Scalar.hpp"

Scalar::Scalar() {}

Scalar::~Scalar() {}


Scalar::Scalar(std::string str)  : _str(str)
{
}

Scalar::Scalar(char c) {
	_char = c;
	_int = static_cast<int>(c);
	_double = static_cast<double>(c);
	_float = static_cast<float>(c);
	_str = "0";
}

Scalar::Scalar(double d) {
	_double = d;
	_int = static_cast<int>(d);
	_char = static_cast<char>(d);
	_float = static_cast<float>(d);
	_str = "0";
}

char			Scalar::getChar() const{
	return static_cast<char>(_double);
}

int				Scalar::getInt() const{
	return static_cast<int>(_double);;
}

float			Scalar::getFloat() const{
	return static_cast<float>(_double);;
}
double 			Scalar::getDouble() const{
	return (_double);
}

std::string 	Scalar::getString() const{
	return (_str);
}

Scalar::Scalar(Scalar const & toCopy) {
	*this = toCopy;
}

Scalar Scalar::operator =(Scalar const & toCopy) {
	if(this == &toCopy)
        return(*this);
	*this = toCopy;
	return (*this);
}


std::ostream & operator << (std::ostream &stream, const Scalar &scalar) {
	
try {
	std::string tmp = scalar.getString();
	if (tmp == "-inf" || tmp == "+inf"\
	|| tmp == "nan" || tmp == "nanf"\
	|| tmp == "-inff" || tmp == "+inff") {
		stream << "char: impossible" << std::endl;
		stream << "int: impossible" << std::endl;
		if (tmp.length() == 5 || tmp == "nanf") {
			stream << std::fixed << std::setprecision(1);
			stream << "float: " << tmp << std::endl;
			stream << "double: " << tmp.erase(tmp.size() - 1) << std::endl;
		}
		else
		{
			stream << "float: " << tmp << "f" << std::endl;
			stream << "double: " << tmp << std::endl;	
		}
		
	}
	else if (tmp.length() > 1)
		throw "The conversion is impossible";
	else {
		char ch = scalar.getChar();
		if (isprint(ch))
			stream << "char: '" << ch << "'" << std::endl;
		else 
			stream << "char: Non displayable" << std::endl;
		stream << "int: " << scalar.getInt() << std::endl; 
		if (scalar.getInt() == scalar.getFloat() )
			stream << std::fixed << std::setprecision(1);
		stream << "float: " << scalar.getFloat() << "f" << std::endl; 
		stream << "double: " << scalar.getDouble() << std::endl; 
	}
}
 catch (const std::string *str) {
	std::cerr << str << std::endl;
 }
	return (stream);
}
