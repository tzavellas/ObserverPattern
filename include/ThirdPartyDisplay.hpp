#ifndef THIRDPARTYDISPLAY_HPP
#define THIRDPARTYDISPLAY_HPP

#include "DisplayElement.hpp"
#include "WeatherObserver.hpp"

class ThirdPartyDisplay: public DisplayElement, WeatherObserver
{
public:
    // DisplayElement
    std::string display() override;
    // WeatherObserver
    void update(const float& temperature, const float& humidity, const float& pressure) override;
};

#endif // THIRDPARTYDISPLAY_HPP