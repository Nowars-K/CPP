#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"

#include <iostream>
#include <string.h>

class Bureaucrat {
    private : 
        const std::string _name;
        int _grade;

    public :
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &b);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &b);
        
        std::string getName() const;
        int getGrade() const;
        
        void    increment();
        void    decrement();
        
        class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what () const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what () const throw();
		};
};

std::ostream &operator<<( std::ostream &out, const Bureaucrat &);

#endif