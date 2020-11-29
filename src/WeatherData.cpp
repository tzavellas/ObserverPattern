#include "WeatherData.hpp"
#include "WeatherObserver.hpp"

float WeatherData::getTemperature() const
{
    return m_Temperature;
}

float WeatherData::getHumidity() const
{
    return m_Humidity;
}

float WeatherData::getPressure() const
{
    return m_Pressure;
}

void WeatherData::measurementsChanged()
{
    notifyObservers();
}

void WeatherData::setMeasurements(const float& temperature, const float& humidity, const float& pressure)
{
    m_Temperature = temperature;
    m_Humidity = humidity;
    m_Pressure = pressure;
    measurementsChanged();
}

void WeatherData::notifyObservers()
{
    for(std::weak_ptr< WeatherObserver > o: m_Observers)
    {
        auto shared = o.lock();
        if (shared)
        {
            shared->update(m_Temperature, m_Humidity, m_Pressure);
        }
    }
}