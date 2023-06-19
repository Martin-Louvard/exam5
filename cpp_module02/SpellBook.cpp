#include "SpellBook.hpp"

SpellBook::SpellBook()
{}

SpellBook::~SpellBook()
{}

void SpellBook::learnSpell(ASpell* spell)
{
    spells.push_back(spell);
}

void SpellBook::forgetSpell(std::string const & spell_name)
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

ASpell* SpellBook::createSpell(std::string const & name)
{
    if (name == "Fireball")
        return new Fireball();
    else if (name == "Fwoosh")
        return new Fwoosh();
    else if (name == "Polymorph")
        return new Polymorph();
    return NULL;
}