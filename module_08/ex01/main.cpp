#include <iostream>
#include "Span.hpp"

int	main(void)
{
	{
		Span sp = Span(5);
		std::cout << sp << std::endl;
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp << std::endl;
	}
	{
		std::vector<int> B;
		B.push_back(42);
		B.push_back(24);
		B.push_back(84);
		Span sp = Span(5);
		sp.insert(B.begin(), B.end());
		std::cout << sp << std::endl;
		try
		{
			sp.insert(B.begin(), B.end());
		} catch (std::exception const & e)
		{
			std::cout << "caught error:" << e.what() << std::endl;
		}
		std::cout << sp << std::endl;
	}
	{
		Span A(10001);
		
		for (int ix = 0; ix < 10001; ++ix)
		{
			try
			{
				A.addNumber(ix * 42);
			} catch (std::exception const & e)
			{
				std::cout << "caught error at ix:" << ix << e.what() << std::endl;
			}
		}
		std::cout << A << std::endl;
		std::cout << "max: " << A.longestSpan() << std::endl;
		std::cout << "min: " << A.shortestSpan() << std::endl;
	}
	{
		Span A(5);
		
		for (int ix = 0; ix < 6; ++ix)
		{
			try
			{
				A.addNumber(ix * 42);
			} catch (std::exception const & e)
			{
				std::cout << "caught error at ix:" << ix << e.what() << std::endl;
			}
		}
		std::cout << A << std::endl;
		std::cout << "max: " << A.longestSpan() << std::endl;
		std::cout << "min: " << A.shortestSpan() << std::endl;
	}
	{
		Span A(1);
		
		for (int ix = 0; ix < 1; ++ix)
		{
			try
			{
				A.addNumber(ix * 42);
			} catch (std::exception const & e)
			{
				std::cout << "caught error at ix:" << ix << e.what() << std::endl;
			}
		}
		std::cout << A << std::endl;
		std::cout << "max: " << A.longestSpan() << std::endl;
		std::cout << "min: " << A.shortestSpan() << std::endl;
	}
	return (0);
}
