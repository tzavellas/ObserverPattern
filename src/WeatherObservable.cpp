#include "WeatherObservable.hpp"
#include "WeatherObserver.hpp"
#include <algorithm>

void WeatherObservable::registerObserver(const std::shared_ptr< WeatherObserver >& observer)
{
    m_Observers.emplace(observer);
}

void WeatherObservable::removeObserver(const std::shared_ptr< WeatherObserver>& observer)
{
    auto itFound = m_Observers.find(observer);
    if (itFound != m_Observers.end())
    {
        m_Observers.erase(itFound);
    }
}