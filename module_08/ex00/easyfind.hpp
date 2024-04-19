#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template <typename T>
typename T::iterator  easyfind( T & int_container, int const & key_value)
{
	typename T::iterator    search_result;

    try
    {
        search_result = find(int_container.begin(), int_container.end(), key_value);
    }
    catch ( std::exception const & e )
    {
    	throw;
    }
    if (search_result == int_container.end())
        throw std::invalid_argument("value was not found");
    return (search_result);
}

#endif
