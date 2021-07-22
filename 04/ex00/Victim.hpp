#ifndef VICTIM_HPP

# define VICTIM_HPP

# include <iostream>
# include <string>
# include <sstream>

class Victim {
	public:
		Victim(std::string name);
		virtual ~Victim();
		Victim(const Victim & toCopy);
		Victim &operator = (const Victim &toCopy);
		Victim();
		
		std::string			 getName() const;
		std::string 		getIntroduce() const;
		void        		setName(std::string name);
		virtual void		getPolymorphed() const;
		
	protected:
		std::string _name;
};

std::ostream & operator << (std::ostream & stream, const Victim& sor);

#endif