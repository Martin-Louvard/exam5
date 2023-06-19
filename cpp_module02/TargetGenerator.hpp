#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include "ATarget.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"
#include <string>
#include <vector>

class TargetGenerator{
    public:
        TargetGenerator();
        ~TargetGenerator();
        TargetGenerator(const TargetGenerator & );
        TargetGenerator&operator=(const TargetGenerator &);

        void learnTargetType(ATarget*);
        void forgetTargetType(std::string const &);
        ATarget* createTarget(std::string const &);

    private:
        std::vector<ATarget*> targets;

};

#endif