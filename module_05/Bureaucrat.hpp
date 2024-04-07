#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class Form;

class Bureaucrat {
    public:
        // Canonical
        Bureaucrat( void );
        Bureaucrat( Bureaucrat const & other );
        Bureaucrat( int const grade, std::string name);
        Bureaucrat &operator=( Bureaucrat const & other );
        ~Bureaucrat( void );


        std::string getName( void ) const;
        int         getGrade( void ) const;
        void    increment( int amount );
        void    decrement( int amount );
        Bureaucrat  &operator++( void );
        Bureaucrat  &operator--( void );
        Bureaucrat  operator++( int );
        Bureaucrat  operator--( int );
        // Bureaucrat  operator+( int const nb ) const;
        // Bureaucrat  operator-( int const nb ) const;

        // ex02 functions
        void    signForm( Form &form) const;

    private:
        std::string _name;
        int         _grade;

        class GradeTooHighExcept : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowExcept : public std::exception {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &bureacrat);
#endif
