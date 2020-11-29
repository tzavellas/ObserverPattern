#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include <memory>

class WeatherObserver: public std::enable_shared_from_this< WeatherObserver >
{
public:
    virtual ~WeatherObserver() = default;
    virtual void update(const float& temperature, const float& humidity, const float& pressure) = 0;
protected:
    WeatherObserver() = default;
};

#endif // OBSERVER_HPP