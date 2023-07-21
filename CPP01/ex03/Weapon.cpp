#include "Weapon.hpp"

const std::string& Weapon::getType(){
        return (const std::string)type;
}

void Weapon::setType(std::string type){
    this->type = type;
}