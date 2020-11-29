#ifndef CURRENTCONDITIONSDISPLAY_HPP
#define CURRENTCONDITIONSDISPLAY_HPP

#include "DisplayElement.hpp"
#include "WeatherObserver.hpp"

class CurrentConditionsDisplay: public DisplayElement, public WeatherObserver
{
public:
    // DisplayElement
    std::string display() override;
    // WeatherObserver
    void update(const float& temperature, const float& humidity, const float& pressure) override;

private:
    float m_Temperature;
    float m_Humidity;
};

#endif // CURRENTCONDITIONSDISPLAY_HPP