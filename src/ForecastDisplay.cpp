#include "ForecastDisplay.hpp"
#include <iostream>

std::string ForecastDisplay::display()
{
    std::string ret;
    double r = (m_PrevPressure - m_Pressure) / m_PrevPressure * 100;
    if ( r < -0.5 ) // rising pressure
    {
        ret = "Fair";
    }
    else if ( r > 0.5 ) // dropping pressure
    {
        ret = "Wet";
    }
    else    // almost constant
    {
        ret = "No change";
    }
    
    return ret;
}
    
void ForecastDisplay::update(const float& /*temperature*/, const float& /*humidity*/, const float& pressure)
{
    m_PrevPressure = m_Pressure;
    m_Pressure = pressure;
    std::cout << display() << std::endl;
}