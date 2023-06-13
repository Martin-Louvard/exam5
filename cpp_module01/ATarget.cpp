#include "ATarget.hpp"

ATarget::ATarget(const std::string& type):type(type)
{}

ATarget::~ATarget(void)
{}

ATarget::ATarget(const ATarget & AT)
{
    *this = AT;
}

ATarget& ATarget::operator=(const ATarget & AT)
{
    this->type = type;
    return *this;
}

const std::string& ATarget::getType(void) const
{
    return this->type;
}

void ATarget::getHitBySpell(const ASpell& AS)
{
    std::cout << type << " has been " << AS.getEffects() << "!" << std::endl;
}