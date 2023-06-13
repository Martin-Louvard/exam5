#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class ATarget{
    public:
        ATarget(const std::string& type);
        ~ATarget(void);
        ATarget(const ATarget & AT);
        ATarget&operator=(const ATarget & AT);

        const std::string& getType(void) const;
        virtual ATarget* clone() = 0;
        void getHitBySpell(const ASpell& AS);

    protected:
        std::string type;
};

#endif