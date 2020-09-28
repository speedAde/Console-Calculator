#include "InputParser.hpp"
#include <string>
#include <algorithm>

InputParser::InputParser(int argc, char* argv[])
{
    calculation = "";
    if(argc > 1)
    {    
        for(size_t i = 1; i < argc; ++i)      
            calculation += argv[i];
    }
}

std::string InputParser::getCalculation()
{
    return calculation;
}