#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

class Base
{
    public:

        virtual ~Base( void );
};

class A : public Base
{
    public:

        A( void );
        ~A( void );
};

class B : public Base
{
    public:

        B( void );
        ~B( void );
};

class C : public Base
{
    public:

        C( void );
        ~C( void );
};

#endif
