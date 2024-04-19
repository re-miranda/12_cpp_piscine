#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>( void ) : std::stack<T>() {}
		MutantStack<T>( MutantStack<T> const & other ) : std::stack<T>(other) {}
		MutantStack<T>	operator=( MutantStack<T> const & other )
		{
			if (&other != this)
				this->std::stack<T>::operator=(other);
			return (*this);
		}
		~MutantStack<T>( void ){}

		typedef typename std::stack<T>::container_type::iterator	iterator;
		iterator	begin( void ) { return (std::stack<T>::c.begin()); }
		iterator	end( void ) { return (std::stack<T>::c.end()); }
};

#endif
