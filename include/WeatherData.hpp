#ifndef WEATHERDATA_HPP
#define WEATHERDATA_HPP

#include "WeatherObservable.hpp"

class WeatherData : public WeatherObservable
{
public:
    float getTemperature() const;
    float getHumidity() const;
    float getPressure() const;
    void measurementsChanged();
    void setMeasurements(const float& temperature, const float& humidity, const float& pressure);

    // Observable
    void notifyObservers() override;
private:
    float m_Temperature;
    float m_Humidity;
    float m_Pressure;
};

#endif // WEATHERDATA_HPP