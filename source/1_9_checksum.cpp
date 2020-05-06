#define CATCH_CONFIG_RUNNER 
#include "../external/catch-1.4.0/catch.hpp"

int checksum(int a){
    int result = 0;
    while(a > 0){
        result = result + (a % 10);
        a = (a - (a % 10)) / 10;
    }
    return result;
}

TEST_CASE("standard", "[checksum]"){ 
  REQUIRE(checksum(123) == 6); 
  REQUIRE(checksum(100) == 1); 
  REQUIRE(checksum(912) == 12);
}

TEST_CASE("zero", "[checksum]"){
  REQUIRE(checksum(0) == 0); 
  REQUIRE(checksum(01) == 1); 
  REQUIRE(checksum(001) == 1);
  REQUIRE(checksum(1000) == 1);
}

TEST_CASE("Matrikelnummer", "[checksum]"){ 
  REQUIRE(checksum(121155) == 15); 
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
