#ifndef SPAN_HPP

# define SPAN_HPP

# include <iostream>
# include <vector>
# include <array>
# include <exception>
# include <set>

class  Span {
private:
    unsigned int _n;
    std::vector<int> _array;
    unsigned int _count;
    Span();

public:
    Span(unsigned int n);
    ~Span();
    Span(Span const & toCopy);
    Span & operator = (Span const & toCopy);

    void    addNumber(int const &i);
    int     shortestSpan();
    int     longestSpan();
    void    setArray(std::vector<int> arr);

};

#endif