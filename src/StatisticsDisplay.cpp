#include "StatisticsDisplay.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>

std::string StatisticsDisplay::display()
{
    std::ostringstream os;
    os << std::fixed << std::setprecision(1) << "Avg/Max/Min temperature: " << m_TemperatureStatistics.getAverage() << "/" << m_TemperatureStatistics.getMax() << "/" << m_TemperatureStatistics.getMin();
    return os.str();
}
    
void StatisticsDisplay::update(const float& temperature, const float& /*humidity*/, const float& /*pressure*/)
{
    m_TemperatureStatistics.update(temperature);
    std::cout << display() << std::endl;
}