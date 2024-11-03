#include <string>

namespace subspace2{
    class Input{
        public:
        static std::string getString();
        static std::string prompt(std::string question);
    };
}