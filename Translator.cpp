#include "Translator.h" // include header file to make sure you have all the libraries you need

#include <string> //not sure why I need this but it doesnt work without it

Translator::Translator(){ // default constructor
  m_model = new Model();
}

Translator::Translator(Model* model){ //overloaded constructor
  m_model = model;
}

Translator::~Translator(){  // destructor
  delete m_model;
}


string Translator::translateEnglishWord(string word){ // create method to translate each word
  string newWord = ""; //create variables
  string nonAlpha = "";
  string punc = "";
  string ret = "\n";
  for(int i = 0; i < word.length(); ++i){  //for the length of the word
    if(isalpha(word[i])){ //if its a letter
      if(tolower(word[i]) == tolower(word[i+1])){  //if its a double letter
        newWord = newWord + m_model->translateDoubleCharacter(word[i]); //translate the double letter and add it to the word
        i++; // skip the next one because its a double
      }
      else{
        newWord = newWord + m_model->translateSingleCharacter(word[i]); // translate single letter and add it to the word
      }
    }
    else if(word[i] == '.'){ // split by sentance.
      punc = word[i] + ret;
      newWord = newWord + punc;
      }
    else{
      nonAlpha = nonAlpha + word[i]; // handling punctuation
      newWord = newWord + nonAlpha;
      nonAlpha = "";
    }
  }
  return newWord; //return the translated word
}

string Translator::translateEnglishSentance(string line){ //create method for translating each sentance
  string newWord = ""; // create variables
  string newLine = "";
  for(int i = 0; i < line.length(); ++i){ //for the length of the line
    if(line[i] == ' '){ //if its a space
      newLine = newLine + translateEnglishWord(newWord) + " "; //translate the word
      newWord = "";//and set the word back to empty
    }

    else{
      newWord = newWord + line[i]; //add the translated word to the line
    }
  }
  newLine = newLine + translateEnglishWord(newWord) + " "; //translate the last word in the sentance and add it to the line
  return newLine; // return the line
}

string Translator::translateTutWord(string word){  // translate tut word
  string dubVow = "";  // open strings ill use later
  string dubCons = "";
  string engWord = "";
  string out = "";
  string nonAlpha = "";
  string punc = "";
  string ret = "\n";
  string letX = "";
  string upper = "";
  string letter = "";
  for(int i = 0; i < word.length(); ++i){ // for every letter in the word
    if(isalpha(word[i])){  //make sure its a letter
      if(word[i] == 's' || word[i] == 'S'){  //if its an s
        if(word[i+1] == 'q' && word[i+4] == 't' && word[i+5] == 'u' && word[i+6] == 't' && word[i+7] == 'u' && word[i+8] == 't'){ //for squatutut
          if(word[i] == 'S'){
            engWord = engWord + "Uu" + word[i+6];
            i = i + 8; //skip over the rest of the letters
          }else{
            engWord = engWord + "uu" + word[i+6];
            i = i + 8;
          }
        }
        else if(word[i+1] == 'q' && word[i+4] == 't' && word[i+5] == 'u' && word[i+6] == 't'){ //for squatut
          if(word[i] == 'S'){
            dubCons = "Tt";
            engWord = engWord + dubCons;
            i = i + 6; //skip over the rest of the letters
          }else{
            dubCons = "tt";
            engWord = engWord + dubCons;
            i = i + 6;
          }
        }
        else if(word[i+1] == 'q' && word[i+4] == 't'){ // for double vowels
          if(word[i] == 'S'){
            upper = toupper(word[i+5]);
            dubVow = upper + word[i+5];
            i = i+5; //skip over the rest of the letters
            engWord = engWord + dubVow;
          }else{
            letter = word[i+5];
            dubVow = letter + letter;
            i = i +5;
            engWord = engWord + dubVow;
          }
        }
        else if(word[i+1] == 'q'){ //for double consonants
          if(word[i] == 'S'){
            upper = toupper(word[i+4]);
            dubCons = upper + word[i+4];
            i = i + 6; //skip over the rest of the letters
            engWord = engWord + dubCons;
          }else{
            letter = word[i+4]; //lowercase
            dubCons = letter + letter;
            engWord = engWord + dubCons;
            i = i + 6; //skip over the rest of the letters
          }
        }
        else{ // for normal s's
          out = word[i];
          i = i + 2;
          engWord = engWord + out;
        }
      }
      else if(word[i] == 'b'){ // cases for each letter
        engWord = engWord + word[i];
        i = i + 2;
      }
      else if(word[i] == 'B'){
        engWord = engWord + word[i];
        i = i + 2;
      }
      else if(word[i] == 'c' ||word[i] == 'C'){
        engWord = engWord + word[i];
        i = i + 3;
      }
      else if(word[i] == 'd'){
        engWord = engWord + word[i];
        i = i + 2;
      }
      else if(word[i] == 'D'){
        engWord = engWord + word[i];
        i = i + 2;
      }
      else if(word[i] == 'f'){
        engWord = engWord + word[i];
        i = i + 2;
      }
      else if(word[i] == 'F'){
        engWord = engWord + word[i];
        i = i + 2;
      }
      else if(word[i] == 'g'){
        engWord = engWord + word[i];
        i = i + 2;
      }
      else if(word[i] == 'G'){
        engWord = engWord + word[i];
        i = i + 2;
      }
      else if(word[i] == 'h' || word[i] == 'H'){
        engWord = engWord + word[i];
        i = i + 3;
      }
      else if(word[i] == 'j' || word[i] == 'J'){
        engWord = engWord + word[i];
        i = i + 2;
      }
      else if(word[i] == 'k' || word[i] == 'K'){
        engWord = engWord + word[i];
        i = i + 3;
      }
      else if(word[i] == 'l' || word[i] == 'L'){
        engWord = engWord + word[i];
        i = i + 2;
      }
      else if(word[i] == 'm' || word[i] == 'M'){
        engWord = engWord + word[i];
        i = i + 2;
      }
      else if(word[i] == 'n' || word[i] == 'N'){
        engWord = engWord + word[i];
        i = i + 2;
      }
      else if(word[i] == 'p' || word[i] == 'P'){
        engWord = engWord + word[i];
        i = i + 2;
      }
      else if(word[i] == 'q' || word[i] == 'Q'){
        engWord = engWord + word[i];
        i = i + 4;
      }
      else if(word[i] == 'r' || word[i] == 'R'){
        engWord = engWord + word[i];
        i = i + 2;
      }
      else if(word[i] == 't' || word[i] == 'T'){
        engWord = engWord + word[i];
        i = i + 2;
      }
      else if(word[i] == 'v' || word[i] == 'V'){
        engWord = engWord + word[i];
        i = i + 2;
      }
      else if(word[i] == 'w' || word[i] == 'W'){
        engWord = engWord + word[i];
        i = i + 3;
      }
      else if(word[i] == 'e' && word[i+1] == 'x'){
        engWord = engWord + word[i+1];
        i = i + 1;
      }
      else if(word[i] == 'E' && word[i+1] == 'x'){
        letX = toupper(word[i+1]);
        engWord = engWord + letX;
        i = i + 1;
      }
      else if(word[i] == 'y' || word[i] == 'Y'){
        engWord = engWord + word[i];
        i = i + 2;
      }
      else if(word[i] == 'z' || word[i] == 'Z'){
        engWord = engWord + word[i];
        i = i + 2;
      }
      else if(word[i] == 'a' || word[i] == 'A'){
        engWord = engWord + word[i];
      }
      else if(word[i] == 'e' || word[i] == 'E'){
        engWord = engWord + word[i];
      }
      else if(word[i] == 'i' || word[i] == 'I'){
        engWord = engWord + word[i];
      }
      else if(word[i] == 'o' || word[i] == 'O'){
        engWord = engWord + word[i];
      }
      else if(word[i] == 'u' || word[i] == 'U'){
        engWord = engWord + word[i];
      }
    }
    else if(word[i] == '.'){ // split by sentance.
      punc = word[i] + ret;
      engWord = engWord + punc;
      }
    else{
      nonAlpha = nonAlpha + word[i]; // handling punctuation
      engWord = engWord + nonAlpha;
      nonAlpha = "";
    }

  }
  return engWord;
}




string Translator::translateTutSentance(string line){ //create method for translating each sentance
  string newWord = ""; // create variables
  string newLine = "";
  for(int i = 0; i < line.length(); ++i){ //for the length of the line
    if(line[i] == ' '){ //if its a space
      newLine = newLine + translateTutWord(newWord) + " "; //translate the word
      newWord = "";//and set the word back to empty
    }

    else{
      newWord = newWord + line[i]; //add the translated word to the line
    }
  }
  newLine = newLine + translateTutWord(newWord) + " "; //translate the last word in the sentance and add it to the line
  return newLine; // return the line
}
