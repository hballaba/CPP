#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Form;

class Bureaucrat {
private:
	int 					_grade;
	const std::string 		_name;

public:
	Bureaucrat();
	Bureaucrat(int grade, const std::string name);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const & toCopy);
	Bureaucrat &operator = (Bureaucrat const & toCopy);

	class 	GradeTooHighException;
	class 	GradeTooLowException;

	std::string		getName() const;
	int				getGrade() const;
	void			setIncrement();
	void			setDecrement();
	void			catchExpesion(int grade);
	void			singForm(Form &form);
};

class Bureaucrat::GradeTooHighException : public std::exception {
public:
	virtual const char* what() const throw();
};

class Bureaucrat::GradeTooLowException : public std::exception {

public:
	virtual const char* what() const throw() ;
};

std::ostream &operator << (std::ostream &stream, const Bureaucrat &Bur);

#endif
