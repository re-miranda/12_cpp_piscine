#ifndef ITER_HPP
# define ITER_HPP

template<typename T, typename U, typename V>
void    iter( T * array_ptr, U const & array_lenght, V const &func)
{
    for (U i = 0; i < array_lenght; i++)
        func(array_ptr[i]);
    return ;
}

#endif
