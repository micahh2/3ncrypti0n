#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <sstream>

using namespace std;


int character, length, string_num, encryption_type;
string key;

vector< vector< vector<string> > > characters;
vector< vector<string> > string_length;
vector<string> value;
vector<int> nums;
//ofstream myfile (key);
//For conversions, clear it when you're done using it
stringstream s;

//Function definitions
string generate_value(int e_type);
void generate_key();
void generate_numbers();
int search(string val,int s_length);
char file_index(int index);

void init()
{
	character=128,length=9, string_num=24, encryption_type=0;//ascii;
	key="key.txt";
}

void test(){

	char c = rand() % 128;
	string r(1, c);
	value.push_back(r);
	value.push_back(r = (rand() % 128));

	string_length.push_back(value);
	characters.push_back(string_length);

	cout<<characters[0][0][0]<<endl;
	cout<<characters[0][0][1]<<endl;
}
void generate_key()
{
	string val;
	for(int k=0; k<character; k++){
		for(int j=0;j<length;j++){
			for(int i=0; i<string_num;i++){
				//val=genearate_value();
				//while(search(val,j)!=1)
				//	val=generate_value();
				//or
				//while the generated value already exists within the file or vector generate value again
				while(search(generate_value(encryption_type),j)!=1);
				//else
				value.push_back(val);

				//or

				//myfile << val;
			}
			string_length.push_back(value);
		}
		characters.push_back(string_length);
		//character.push_back(string_length.pushback(value));
	}
	//unsigned int eof_char = -1;
	//myfile<<eof_char;
	//for(int a=0; a<nums.size(); a++)
	//{
	//	//myfile<<nums[a];
	//}
}

string generate_value(int e_type){//e_type = ascii or uncode
	string s;
	if(e_type==0)
		for(int z=0; z<length; z++)//first encryption
			s = rand() % 128;// 0 - 127
	else
		for(int k=0; k<length;k++){//second encryption
			s = rand() % 95221; //(number of unicode characters)
			key = "key_2.txt";
		}
	return s;
}
void generate_numbers(){
	for(int y=0; y<character;y++){ //Changed from file_characters...

		nums.push_back(rand() % 9+1);
	}
}
int search(string val,int s_length){
	//search in file for the string
	//probably going to use this for the decryption process

	//	string v;
	//	int index_i,index=0;
	//	for(int h=2; h<=s_length; h++){
	//		index_i+=(h-2)*string_num;
	//	}
	//for(int n=0;n<characters; n++){
	//	for(int g=0;g<string_num;g++){
	//		index=index_i + length*string_num*n + g*s_length; //index per string of length x for each character
	//		if(index>numbers in file)
	//			return 0;
	//		for(int c=0;c<s_length;c++){//obtain full string from that index to compare
	//			v+=file_index(index+c);
	//		}
	//		if(v == val)
	//			return 0;
	//	}
	//return -1; //if no strings within the whole file match with val
	//}

	//or search in vector for the string

	//for(int k=0; k<character; k++){
	//	for(int i=1; i<string_num; i++){
	//		
	//		if(characters[k][s_length][i] == val)
	//			return 0;
	//	}
	//}
	//	return -1;
}
char file_index(int index){
	//or
	//string file_index(int index_i, int s_length)

	//the purpose of this method is to get the number of chars in my generating
	//key and get a character from that file at index

	int total_of_chars;
	char char_at_index;


	ifstream myfile ("key.txt");
	if (myfile.is_open())
	{
		string line = "";
		while ( myfile.good() )
		{
			getline (myfile,line);
			cout << line << endl;
		}
		myfile.close();
	}
	else cout<<"unable to open file" << endl;
	//for(int i=0; i<s_length; i++) //this function was all gobltyguck
	//return(file_character_at(index));
	return 'a'; //FIXME
}
