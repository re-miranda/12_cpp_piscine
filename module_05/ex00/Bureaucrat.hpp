#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class Bureaucrat {

    public:

        Bureaucrat( void );
        Bureaucrat( Bureaucrat const & other );
        Bureaucrat( int const grade, std::string name);
        Bureaucrat &operator=( Bureaucrat const & other );
        ~Bureaucrat( void );


        std::string getName( void ) const;
        int         getGrade( void ) const;
        void    increment( int amount );
        void    decrement( int amount );

        // Oveloads
        Bureaucrat  &operator++( void );
        Bureaucrat  &operator--( void );
        Bureaucrat  operator++( int );
        Bureaucrat  operator--( int );

    private:

        std::string const   _name;
        int                 _grade;

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
