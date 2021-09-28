#include "Model.h" // include the header file


Model::Model(){ // constructor

}
Model::~Model(){ // destructor

}

string Model::translateSingleCharacter(char letter){  //create method
  switch (letter){  //case for every letter, upper and lowercase.
    case 'b':
      return "bub";
    case 'B':
      return "Bub";
    case 'c':
      return "cash";
    case 'C':
      return "Cash";
    case 'd':
      return "dud";
    case 'D':
      return "Dud";
    case 'f':
      return "fuf";
    case 'F':
      return "Fuf";
    case 'g':
      return "gug";
    case 'G':
      return "Gug";
    case 'h':
      return "hash";
    case 'H':
      return "Hash";
    case 'j':
      return "jay";
    case 'J':
      return "Jay";
    case 'k':
      return "kuck";
    case 'K':
      return "Kuck";
    case 'l':
      return "lul";
    case 'L':
      return "Lul";
    case 'm':
      return "mum";
    case 'M':
      return "Mum";
    case 'n':
      return "num";
    case 'N':
      return "Num";
    case 'p':
      return "pub";
    case 'P':
      return "Pub";
    case 'q':
      return "quack";
    case 'Q':
      return "Quack";
    case 'r':
      return "rug";
    case 'R':
      return "Rug";
    case 's':
      return "sus";
    case 'S':
      return "Sus";
    case 't':
      return "tut";
    case 'T':
      return "Tut";
    case 'v':
      return "vuv";
    case 'V':
      return "Vuv";
    case 'w':
      return "wack";
    case 'W':
      return "Wack";
    case 'x':
      return "ex";
    case 'X':
      return "Ex";
    case 'y':
      return "yub";
    case 'Y':
      return "Yub";
    case 'z':
      return "zub";
    case 'Z':
      return "Zub";
    case 'a':
      return "a";
    case 'A':
      return "A";
    case 'e':
      return "e";
    case 'E':
      return "E";
    case 'i':
      return "i";
    case 'I':
      return "I";
    case 'o':
      return "o";
    case 'O':
      return "O";
    case 'u':
      return "u";
    case 'U':
      return "U";
  }
}

string Model::translateDoubleCharacter(char dub){  //method for double characters
  string s = "squa";
  string upS = "Squa";
  string v = "squat";
  string upV = "Squat";  //defining strings

  if (dub == 'A' || dub == 'E' || dub == 'I' ||dub == 'O'||dub =='U'){ //check if uppercase and vowle
    dub = tolower(dub);
    upV = upV + dub;
    return upV; //return the combined string and lowercase vowel
  }
  else if(dub == 'a' || dub == 'e' || dub == 'i' ||dub =='o'||dub =='u'){  // normal vowels
    v = v + dub;
    return v; //return string and vowel
  }

  else if(dub == 'B' ||dub == 'C' || dub =='D' ||dub == 'F' || dub =='G' || dub =='H' || dub =='J' || dub =='K' || dub =='L' || dub =='N' || dub =='P' || dub =='Q' || dub =='R' ||dub == 'S' ||dub =='T' ||dub == 'V' ||dub == 'W' || dub =='X' ||dub == 'Y' || dub =='Z'){
    dub = tolower(dub); //if its not a vowel, and is uppercase, make it lowercase
    upS = upS + dub;
    return upS; //print combined string with letter
  }
  else if (dub == 'b' || dub =='c' || dub =='d' || dub =='f' ||dub == 'g' || dub =='h' || dub =='j' || dub =='k' || dub =='l' || dub =='n' || dub =='p' || dub =='q' || dub =='r' || dub =='s' ||dub =='t' || dub =='v' || dub =='w' ||dub == 'x' || dub =='y' || dub =='z'){
    s = s + dub; //for lowercase
    return s; //return combined string and letter.
  }

}
