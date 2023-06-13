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
    this->spells = W.spells;
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

void Warlock::learnSpell(ASpell* spell)
{
    spells.push_back(spell);
}

void Warlock::forgetSpell(std::string spell_name)
{
    
    for (std::vector<ASpell*>::iterator it = spells.begin(); it != spells.end(); it++)
    {
        if((*it)->getName() == spell_name)
        {
            spells.erase(it);
            return ;
        }
    }
}

void Warlock::launchSpell(std::string spell_name, ATarget const& target)
{
    
    for (std::vector<ASpell*>::iterator it = spells.begin(); it != spells.end(); it++)
    {
        if((*it)->getName() == spell_name)
        {
            (*it)->launch(target);
            return;
        }
    }
}