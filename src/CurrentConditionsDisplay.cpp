#include "CurrentConditionsDisplay.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>

std::string CurrentConditionsDisplay::display()
{
    std::ostringstream os;
    os << std::fixed << std::setprecision(1) << "Current conditions: " << m_Temperature << "C degrees and " << m_Humidity << "% humidity";
    return os.str();
}
    
void CurrentConditionsDisplay::update(const float& temperature, const float& humidity, const float& /*pressure*/)
{
    m_Temperature = temperature;
    m_Humidity = humidity;
    std::cout << display() << std::endl;
}