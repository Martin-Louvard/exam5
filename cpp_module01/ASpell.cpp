#include "ASpell.hpp"

ASpell::ASpell(const std::string& name, const std::string& effects):name(name), effects(effects)
{}

ASpell::~ASpell(void)
{}

ASpell::ASpell(const ASpell& AS)
{
    *this = AS;
}

ASpell& ASpell::operator=(const ASpell& AS)
{
    this->name = name;
    this->effects = effects;

    return *this;
}

std::string ASpell::getName(void) const
{
    return this->name;
}

std::string ASpell::getEffects(void) const
{
    return this->effects;
}

void ASpell::launch(const ATarget& AT)
{
    AT.getHitBySpell(*this);
}