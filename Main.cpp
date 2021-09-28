#include "FileProcessor.h" //include all previous files created

using namespace std; //always standard namespace
int main(int argc, char**argv){  //main method
  if(argc < 1){ // doesnt get input from the user.
    cout << "Invalid Usage: please enter name of file" << endl;
    return 1;
  }
  string inputFile = argv[1]; // first input from user
  string outputFile = argv[2]; // second input from user
  string translation = argv[3];
  FileProcessor *fp = new FileProcessor(); //create new instance of file processor class
  fp->processFile(inputFile, outputFile, translation); //run it, reading from input file, writing to export file.
  delete fp;
  return 0; // end program
}
//i dont understand when you make pointer to new class, or when you make member variables
