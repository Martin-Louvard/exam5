#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <string>
#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "Fireball.hpp"
#include "Fwoosh.hpp"
#include "Polymorph.hpp"

class SpellBook{
    public:
        SpellBook();
        ~SpellBook();

        SpellBook(const SpellBook & S);
        SpellBook&operator=(const SpellBook & S);

        void learnSpell(ASpell* spell);
        void forgetSpell(std::string const & spell_name);
        ASpell* createSpell(std::string const &);

    private:
        std::vector<ASpell*> spells;

};

#endif