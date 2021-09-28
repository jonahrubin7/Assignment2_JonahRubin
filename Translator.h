#include "Model.h" //include all the header which contains everything you need.

using namespace std; // always standard namespace

class Translator{ //create the Translator class
public: //public variables
  Translator(); // default constructor
  Translator(Model* model); // overloaded constructor
  ~Translator(); // destructor
  string translateEnglishWord(string word); //define method for word
  string translateEnglishSentance(string line); //define method for sentance
  string translateTutWord(string word);
  string translateTutSentance(string line);
private: // private variables
  Model* m_model; //create pointer of model class
};
