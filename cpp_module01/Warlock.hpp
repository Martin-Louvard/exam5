#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>

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

    private: 
        std::string name;
        std::string title;


};
#endif