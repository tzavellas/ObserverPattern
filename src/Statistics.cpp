#include "Statistics.hpp"
#include <algorithm>

Statistics::Statistics(const float& value) : m_MinValue{value}, m_MaxValue{value}, m_ValueSum{value}, m_Count{ (value != 0.0) ? 1u : 0u}
{
    // nothing to do
}
    
 void Statistics::update(const float& newValue)
 {
     if (m_Count > 0)
     {
        m_MinValue = std::min(m_MinValue, newValue);
        m_MaxValue = std::max(m_MaxValue, newValue);
     }
     else
     {
         m_MinValue = newValue;
         m_MaxValue = newValue;
     }
     m_ValueSum += newValue;
     m_Count++;
 }

float Statistics::getMin() const
{
    return m_MinValue;
}

float Statistics::getMax() const
{
    return m_MaxValue;
}

float Statistics::getAverage() const
{
    return m_ValueSum/m_Count;
}