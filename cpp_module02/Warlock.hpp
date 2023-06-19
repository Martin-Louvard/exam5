#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock{

    public: 
        Warlock(const std::string& name, const std::string& title);
        ~Warlock(void);
        Warlock(const Warlock& W);
        Warlock& operator=(const Warlock& W);
        
        const std::string& getName(void) const;
        const std::string& getTitle(void) const;
        void setTitle(const std::string & title);
        void introduce(void) const;
        void learnSpell(ASpell*);
        void forgetSpell(std::string spell_name);
        void launchSpell(std::string spell_name, ATarget const& target);

    private: 
        std::string name;
        std::string title;
        std::vector<ASpell*> spells;
        SpellBook book;


};
#endif