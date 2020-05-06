//Lina Klass
//Faktor einer natürlichen Zahl

#define CATCH_CONFIG_RUNNER 
#include "../external/catch-1.4.0/catch.hpp" 
#include <cmath>

TEST_CASE("Faktor_einer_natürlichen_Zahl", "[factorial]"){
  REQUIRE(factorial(5) == 120); 
  REQUIRE(factorial(0) == 0); 
  REQUIRE(factorial(11) == 39916800);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
