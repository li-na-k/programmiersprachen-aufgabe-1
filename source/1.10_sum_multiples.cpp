//Lina Klass
//durch 3 und 5 teilbare Zahlen bis 1000 summieren

#define CATCH_CONFIG_RUNNER 
#include "../../external/catch-1.4.0/catch.hpp" 
#include <cmath>

int sum_multiples(){
    int sum = 0;
    int i = 1;
    while(i <= 1000){
        if((i % 3 == 0) || (i % 5 == 0)){
            sum = sum + i;
        }
            i = i + 1;
    }
    return sum;
}

TEST_CASE("berechne sum_multiples", "[gcd]"){
  REQUIRE(sum_multiples() == 234168); // hier nicht wirklich TDD, da Ergebnis der Funktion für den Test gebraucht
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
