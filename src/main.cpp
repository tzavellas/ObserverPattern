#include <memory>
#include "WeatherData.hpp"
#include "CurrentConditionsDisplay.hpp"
#include "StatisticsDisplay.hpp"
#include "ForecastDisplay.hpp"

int main(int, char**) {
    auto data = std::make_shared< WeatherData >();

    auto currentDisplay = std::make_shared< CurrentConditionsDisplay >();
    auto statisticsDisplay = std::make_shared< StatisticsDisplay >();
    auto forecastDisplay = std::make_shared< ForecastDisplay >();

    data->registerObserver(currentDisplay);
    data->registerObserver(statisticsDisplay);
    data->registerObserver(forecastDisplay);

    data->setMeasurements(80, 65, 30.4);
    data->setMeasurements(82, 70, 29.2);
    data->removeObserver(currentDisplay);
    data->setMeasurements(78, 90, 29.2);
    return 0;
}