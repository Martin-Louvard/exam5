#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell{
    public:
    ASpell(const std::string& name, const std::string& effects);
    virtual ~ASpell(void);
    ASpell(const ASpell & AS);
    ASpell&operator=(const ASpell & AS);

    std::string getName(void) const;
    std::string getEffects(void) const;

    virtual ASpell* clone() = 0;

    void launch(const ATarget& AT) const;

    protected:
        std::string name;
        std::string effects;
};

#endif