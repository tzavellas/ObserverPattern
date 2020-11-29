#ifndef STATISTICS_HPP
#define STATISTICS_HPP

class Statistics
{
public:
    Statistics(const float& value = 0);
    void update(const float& newValue);
    float getMin() const;
    float getMax() const;
    float getAverage() const;

private:
    float m_MinValue;
    float m_MaxValue;
    float m_ValueSum;
    unsigned long m_Count;
};

#endif // STATISTICS_HPP