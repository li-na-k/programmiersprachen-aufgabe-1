//Lina Klass
//Größten gemeinsamen Teiler zweier ganzen Zahlen bestimmen, die nicht beide Null sein dürfen

#define CATCH_CONFIG_RUNNER 
#include "../external/catch-1.4.0/catch.hpp" 
#include <exception>
#include <cmath>

int gcd(int a, int b){ 
  if (b == 0 && a == 0) {
        std::cout<< "Uebergebene Zahlen duerfen nicht beide negativ sein.";
        return -1;
    }

  if(b == 0){
    return abs(a);
  }
  else{
    return(gcd(b, a % b));
  }
}

TEST_CASE("normaler Bereich", "[gcd]"){
  REQUIRE(gcd(2,4) == 2); 
  REQUIRE(gcd(9,6) == 3); 
  REQUIRE(gcd(3,7) == 1);
}

TEST_CASE("a or b is zero", "[gcd]"){  
  REQUIRE(gcd(0,5) == 5);
  REQUIRE(gcd(4,0) == 4);
}

TEST_CASE("both zero", "[gcd]"){ 
  REQUIRE(gcd(0,0) == -1); 
}

TEST_CASE("negative numbers", "[gcd]"){
  REQUIRE(gcd(-1,0) == 1); 
  REQUIRE(gcd(0,-8) == 8); 
  REQUIRE(gcd(-9,-6) == 3); 
  REQUIRE(gcd(9,-6) == 3); 
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
