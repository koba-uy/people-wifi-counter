#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class PlainTextLog : public Log {

public:

    PlainTextLog(string filePath) {
        this->filePath = filePath;
    }

    void clear() {
        remove(filePath.c_str());
    }

    void writeLine(Loggable* obj) {
        writeLine(obj->toString());
    }

    void writeLine(string str) {
        ofstream file;
        file.open(filePath, ios_base::app);
        file << str << endl;
        file.close();
    }

private:

    string filePath;

};