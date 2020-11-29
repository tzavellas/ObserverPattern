#ifndef DISPLAYELEMENT_HPP
#define DISPLAYELEMENT_HPP

#include <string>

class DisplayElement
{
public:
    virtual ~DisplayElement() = default;
    virtual std::string display() = 0;
};

#endif // DISPLAYELEMENT_HPP