#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template <typename T>
class Array
{
    private:

        T       *_array;
        size_t  _array_length;

    public:

        Array<T>( void ) : _array(NULL), _array_length(0)
        {
        
            return ;
        }

        Array<T>( unsigned int const & nx ) : _array(new T[nx]), _array_length(nx)
        {
            for (size_t ix = 0; ix < nx; ix++)
                this->_array[ix] = 42;
            return ;
        }

        Array<T>( Array<T> const & other )
        {
            size_t  other_length;

            other_length = other.length();
            this->_array = new T[other_length];
            this->_array_length = other_length;
            for (size_t ix = 0; ix < other_length; ix++)
                this->_array[ix] = other[ix];
            return ;
        }

        Array<T>    &operator=( Array<T> const & other )
        {
            size_t  other_length;

            if (& other == this)
                return (*this);
            other_length = other.length();
            if (this->_array != NULL)
                delete[] this->_array;
            this->_array = new T[other_length];
            this->_array_length = other_length;
            for (size_t ix = 0; ix < other_length; ix++)
                this->_array[ix] = other[ix];
            return (*this);
        }

        ~Array<T>( void )
        {
            if (this->_array != NULL)
                delete[] this->_array;
            return ;
        }

        size_t  length( void ) const
        {
            return (this->_array_length);
        }

        T  &operator[]( size_t const & ix) const
        {
            if (ix >= this->length())
                throw std::out_of_range("Index out of bounds");
            return (this->_array[ix]);
        }
};

template<typename T>
std::ostream    &operator<<(std::ostream & o, Array<T> const & Array)
{
    size_t  array_length;

    array_length = Array.length();
    o << "(";
    for (size_t ix = 0; ix < array_length; ix++)
        o << " " << Array[ix];
    o << " )";
    return (o);
}

#endif
