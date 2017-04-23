#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <iostream>

TEST_CASE(" discribe_gcd ","[gcd]"){
  REQUIRE(gcd(2,4)==2);
  REQUIRE(gcd(9,6)==3);
  REQUIRE(gcd(3,7)==1);
}

TEST_CASE(" discribe_checksum ","[checksum]"){
  REQUIRE(checksum(123)==6);
  REQUIRE(checksum(116992)==28);
  REQUIRE(checksum(1234)==10);
}

TEST_CASE(" discribe_fract ","[fract]"){
  REQUIRE(fract(1,04)==Approx(0,04);
  REQUIRE(fract(2,345)==Approx(0,345));
  REQUIRE(fract(3,21)==Approx(0,21));
}

TEST_CASE(" discribe_factorial ","[factorial]"){
  REQUIRE(factorial(3)==6);
  REQUIRE(factorial(4)==24);
  REQUIRE(factorial(5)==120);
}

TEST_CASE(" discribe_mileToKilometer ","[mileToKilometer]"){
  REQUIRE(mileToKilometer(7)==11.2);
  REQUIRE(mileToKilometer(4)==6.4);
  REQUIRE(mileToKilometer(2)==3.2);
}

TEST_CASE(" discribe_is_prime ","[is_prime]"){
  REQUIRE(is_prime(7)==true);
  REQUIRE(is_prime(4)==false);
  REQUIRE(is_prime(11)==true);
}

TEST_CASE(" binomial ","[binomial]"){
  REQUIRE(binomial(5,2)==10);
  REQUIRE(binomial(6,3)==20);
  REQUIRE(binomial(7;4)==35);
}

TEST_CASE(" discribe_capacity ","[capacity]"){
  REQUIRE(capacity(2,5)==62.8319);
  REQUIRE(capacity(2,4)==50.2655);
  REQUIRE(capacity(3,2)==56.5487);
}

TEST_CASE(" discribe_surface ","[surface]"){
  REQUIRE(surface(2,5)==19.5664);
  REQUIRE(surface(2,4)==18.5664);
  REQUIRE(surface(3,2)==23.8496);
}


int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
