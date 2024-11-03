#include "Input.hpp"
#include <iostream>
#include "Output.hpp"

namespace subspace2{
    std::string Input::getString(){
        std::string input;
        std::cin >> input;
        return input;
    }
    std::string Input::prompt(std::string question){
        std::cout << "SP2: *** Now showing user for question ***\n";
        subspace3::Output::writeString(question);
        return getString();
    }
}