#include "Serialization.hpp"

int main(){
    Data raw;
    raw.str = "reda nadi";
    uintptr_t t = serialize(&raw);
    std::cout << "Serialization: " << t << std::endl;
    raw = *deserialize(t);
    std::cout << "deserialization: " << raw.str << std::endl;
}