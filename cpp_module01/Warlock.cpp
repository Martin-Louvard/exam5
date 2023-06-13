#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title):name(name), title(title)
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
    std::cout << this->name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const Warlock& W)
{
    *this = W;
}

Warlock& Warlock::operator=(const Warlock& W)
{
    this->name = W.name;
    this->title = W.title;
    return *this;
}

const std::string& Warlock::getName(void) const
{
    return name;
}

const std::string& Warlock::getTitle(void) const
{
    return title;
}

void Warlock::setTitle(const std::string& title)
{
    this->title = title;
}

void Warlock::introduce(void) const
{
    std::cout << name <<": I am "<< name << ", " << title << "!" << std::endl;
}