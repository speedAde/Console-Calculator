#ifndef INPUTPARSER_HPP_INCLUDED
#define INPUTPARSER_HPP_INCLUDED

#include <string>

class InputParser
{
private:
    std::string calculation;
public:
    InputParser(int, char*[]);
    std::string getCalculation();
};

#endif // #ifndef INPUTPARSER_HPP_H_INCLUDED