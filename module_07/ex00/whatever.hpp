#ifndef WHATEVER
# define WHATEVER

template<typename T>
void    swap( T & A, T & B )
{
    T   swap(A);

    A = B;
    B = swap;
    return ;
}

template<typename T>
T const & min( T const & A, T const & B )
{
    return ((A < B) ? A : B);
}

template<typename T>
T const & max( T const & A, T const & B )
{
    return ((A > B) ? A : B);
}

#endif
