#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	 ifstream theFile("players.txt");
	 	 
	 int idNumber;
	 string name;
	 double money;
	 
	 while(theFile >> idNumber >> name >> money && theFile.good())
	 {
		cout <<idNumber << "," << name << "," << money << endl;
	 
	 }
	 
}
	 
