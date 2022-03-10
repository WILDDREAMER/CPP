#include "iter.hpp"

void one(std::string &a, int i){
    for(int j = 0; j < i; j++){
        std::cout << a[j];
    }

}

int main ()
{
    std::string s = "Hello";
    func(s, 3, one);
    return 0;
}