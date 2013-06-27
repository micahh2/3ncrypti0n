#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


int main(int argNum, char *args[])
{
	//Check to see there is the right number of arguments
	if(argNum == 1)
	{
		//Setup and read in the file
		ifstream enFile;
		stringstream enStream;// = new stringstream();
		enStream << args[0];
		enFile.open(args[0]);
		enStream.flush();
		while(enFile.good())
		{
			string temp = "";
			getline(enFile, temp);
			enStream << temp;
		}
		//delete enStream;
		//enStream = NULL;
		//Finish code that calls the other functions
	}
	else
	{
		//Need to actual useful message here
		cout << "Error! Try again!" << endl;
	}
		
}
