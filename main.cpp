#include <fstream>
#include <iostream>
#include <sstream>  // istringstream & ostringstream

using namespace std;

int main() {
  string line;
  string path = "read.txt";
  fstream fileHandler(path.c_str());

  if (fileHandler.fail()) {
    cout << "Can't read the file.\n";
    return -1;
  }

  // Read all file content.
  while (getline(fileHandler, line)) {
    cout << line << "\n";
  }

  fileHandler.close();

  // string str = "Ahmed 28 year.";
  // istringstream iss(str);

  // string name;
  // int age;

  // iss >> name >> age;

  // cout << age;

  // ostringstream oss;

  // oss << "Mostafa ";
  // oss << 50;
  // oss << " years old";

  // cout << oss.str();

  // freopen("read.txt", "rt", stdin); // To convert reading from console to file.
  // freopen("write.txt", "wt", stdout) // To convert writing from console to file.

  // ifstream fileInput;
  // fileInput.open("read.txt", ios::in);

  // string line;
  // // getline(cin, line);

  // getline(fileInput, line);

  // cout << line;

  // fileInput.close();

  // ifstream fin("read.txt");
  // ofstream fout("")

  //     if (fin.fail()) {
  //   cout << "Can't open the file\n";
  //   return -1;
  // }

  // string firstLine, secondLine;

  // getline(fin, firstLine);
  // getline(fin, secondLine);

  // cout << firstLine << "\n" << secondLine;

  // fin.close();

  // string path = "read.txt";
  // fstream fileHandler(path.c_str(), ios::in | ios::out | ios::app);

  // if (fileHandler.fail()) {
  //   cout << "Can't read the file.\n";
  //   return -1;
  // }

  // fileHandler << "\nMohamed ali hassan\n";

  // string firstLine;

  // getline(fileHandler, firstLine);

  // cout << firstLine;

  // fileHandler.close();

  return 0;
}