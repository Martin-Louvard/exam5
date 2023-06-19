#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{}

TargetGenerator::~TargetGenerator()
{}

void TargetGenerator::learnTargetType(ATarget * target)
{
    targets.push_back(target);
}

void TargetGenerator::forgetTargetType(std::string const & target)
{
    for (std::vector<ATarget*>::iterator it = targets.begin(); it != targets.end(); it++)
    {
        if((*it)->getType() == target)
        {
            targets.erase(it);
            return ;
        }
    }
}

ATarget* TargetGenerator::createTarget(std::string const & type)
{
    if (type == "Target Practice Dummy")
        return new Dummy();
    else if (type == "Inconspicuous Red-brick Wall")
        return new BrickWall();
    return NULL;
}