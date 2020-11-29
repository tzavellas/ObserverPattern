#ifndef WEATHEROBSERVABLE_HPP
#define WEATHEROBSERVABLE_HPP

#include <memory>
#include <set>

class WeatherObserver;

class WeatherObservable
{
public:
    virtual ~WeatherObservable() = default;
    virtual void notifyObservers() = 0;
    virtual void registerObserver(const std::shared_ptr< WeatherObserver>& observer);
    virtual void removeObserver(const std::shared_ptr< WeatherObserver>& observer);
protected:
    WeatherObservable() = default;
    std::set < std::weak_ptr< WeatherObserver >, std::owner_less< std::weak_ptr< WeatherObserver > > > m_Observers;
};

#endif // WEATHEROBSERVABLE_HPP