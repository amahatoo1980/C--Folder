#include<iostream>
#include<fstream>

using namespace std;

int main(){


    fstream myFile;
    myFile.open("ashton.txt", ios::out);//this is the file writen into
    if(myFile.is_open()){
        myFile << "Hillo\n";
        myFile << "This is the second line\n";
        myFile.close();
    }

    myFile.open("ashton.txt", ios::app);//this is the file writen into
    if(myFile.is_open()){
        myFile << "This is the new line i appended to the text file\n";
        myFile.close();
    }

    system("PAUSE>0");
    return 0;
}