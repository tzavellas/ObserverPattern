#ifndef FORECASTDISPLAY_HPP
#define FORECASTDISPLAY_HPP

#include "DisplayElement.hpp"
#include "WeatherObserver.hpp"

class ForecastDisplay: public DisplayElement, public WeatherObserver
{
public:
    // DisplayElement
    std::string display() override;
    // Observer
    void update(const float& temperature, const float& humidity, const float& pressure) override;
private:
    float m_Pressure;
    float m_PrevPressure;
};

#endif // FORECASTDISPLAY_HPP