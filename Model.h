#include <iostream> //header file
#include <string>  // need to incorporate all the things i am going to use
#include <cctype>
using namespace std;

class Model{ //create my model class
public:  // make variables public
  Model();  //constructor
  ~Model(); //destructor
  string translateSingleCharacter(char letter); //defining method for translating one character
  string translateDoubleCharacter(char dub); //defining method for two double characters
  string translateTutSingle(char letter);
  string translateTutDouble(char dub);
};
