///@file finalwc.cc
///@brief this file is the implementation file
///@author Cody Ridge

#include <iostream>
#include <string>
#include <fstream>

using namespace std;



/// @brief This function counts the chars within a string
/// @param (string name) is a string name that the user wants to know the char count for
/// @return count - an integer for the char count in the string

int countChar(string name){
  int count = 0;
  for(int i = 0; i < name.size();i++){
    count++;
  }
  return count;
}


/// @brief This function counts the lines within a string
/// @param (string name) is a string name that the user wants to know the line count for
/// @return count an integer for the line count in the string
/// @see size() this is a fuction that allows us to gather the size of the string inputted

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

/// @brief This is the main function for using the functions countLines() and countChar()
/// @param argc is the number of command lines passed
/// @param argv is the command line args passed in for testing
/// @see countLines()
/// @see countChar()
  
int main(int argc, char** argv){
  if(argc == 1){
    int lines = countLines("Ohio University");
    int chars = countChar("Athens");
    cout << "lines: " << lines << endl;
    cout << "cahracters: " << chars << endl;
  }
  else{
    string name;
    for(int i = 1; i < argc;i++){
      name += argv[i];
    }
    int lines = countLines(name);
    int chars = countChar(name);
    cout << "Characters: " << chars << "         " << "Lines: " << lines << "        " << "Name: " << name << endl;
    return 0;
  }
}

