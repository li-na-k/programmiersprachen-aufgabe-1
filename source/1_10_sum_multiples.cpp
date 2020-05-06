//Lina Klass
//durch 3 und 5 teilbare Zahlen bis zu uebergebenem Parameter summieren

#define CATCH_CONFIG_RUNNER 
#include "../external/catch-1.4.0/catch.hpp" 
#include <cmath>

int sum_multiples(int until){
    int sum = 0;
    int i = 1; //zu testende Zahl
    while(i <= until){
        if((i % 3 == 0) || (i % 5 == 0)){
            sum = sum + i;
        }
            i = i + 1;
    }
    return sum;
}

TEST_CASE("berechne sum_multiples", "[gcd]"){
  REQUIRE(sum_multiples(1000) == 234168);
  REQUIRE(sum_multiples(3) == 3);
  REQUIRE(sum_multiples(5) == 8);
  REQUIRE(sum_multiples(1) == 0);
  REQUIRE(sum_multiples(12) == 45);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
