#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class Bureaucrat {
    public:
        ~Bureaucrat( void );
        Bureaucrat( void );
        Bureaucrat( Bureaucrat const & other );
        Bureaucrat &operator=( Bureaucrat const & other );

        Bureaucrat( int const grade, std::string name);

        std::string getName( void ) const;
        int         getGrade( void ) const;
        Bureaucrat  &operator++( void );
        Bureaucrat  &operator--( void );
        Bureaucrat  operator++( int );
        Bureaucrat  operator--( int );
        // Bureaucrat  operator+( int const nb ) const;
        // Bureaucrat  operator-( int const nb ) const;

        void    increment( int amount );
        void    decrement( int amount );

    private:
        class GradeTooHighExcept : public std::exception {
            public:
                virtual const char *what() const throw()
                {
                    return ("Grade is too high (above 1)");
                }
        };
        class GradeTooLowExcept : public std::exception {
            public:
                virtual const char *what() const throw()
                {
                    return ("Grade is too low (below 150)");
                }
        };
        std::string _name;
        int         _grade;
};

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &bureacrat);
#endif
