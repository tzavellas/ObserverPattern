#ifndef STATISTICSDISPLAY_HPP
#define STATISTICSDISPLAY_HPP

#include "DisplayElement.hpp"
#include "WeatherObserver.hpp"
#include "Statistics.hpp"

class StatisticsDisplay: public DisplayElement, public WeatherObserver
{
public:
    // DisplayElement
    std::string display() override;
    // WeatherObserver
    void update(const float& temperature, const float& humidity, const float& pressure) override;
private:
    Statistics m_TemperatureStatistics;
};

#endif // STATISTICSDISPLAY_HPP