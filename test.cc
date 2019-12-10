#define CATCH_CONFIG_MAIN
#include "catch.hpp"
//#include "finalwc.cc"
#include <cmath>
#include <string>


using namespace std;

int countLines(string name){
  int count = 1;
  if(name == "")
    return 0;
  else{
    for(int i = 0; i < name.size(); i++){
      if(name[i] == '\n')
        ++count;
    }
  return count;
  }
}


int countChar(string name){
  int count = 0;
  for(int i = 0; i < name.size();i++){
    count++;
  }
  return count;
}


//Testing pass on char count for name
TEST_CASE("Testing countChar() to see if it passes"){
  string string1 = "Cody";
  REQUIRE(countChar(string1) == 4);
}

//Testing the line count
TEST_CASE("Testing countLines() to see if it outputs the correct 2 lines used"){
    string string2 = "Cody \n Ridge";
    REQUIRE(countLines(string2) == 2);
}

//Testing to see if the empty list will pass
TEST_CASE("Testing countLines() to see if it outputs no data correctly"){
  string string3 = "";
  REQUIRE(countLines(string3) == 0);
}
//Testing pass for empty string
TEST_CASE("Testing countChar()"){
  string string4 = "";
  REQUIRE(countLines(string4) == 0);
}
//A failing test to see if we inputted everything correctly
TEST_CASE("Testing countChar() so it fails one of the tests"){
  string string5 = "Hi, how are you doing today???";
  REQUIRE(countChar(string5) == 5);
}

            
