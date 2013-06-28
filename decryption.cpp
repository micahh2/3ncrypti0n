#include <iostream>
#include <string>
#include <fstream>
#include <vector>
//need to count characters from file

using namespace std;

//Function stubs
int search_file(string val,int current_char);

void decryption(FILE file, FILE key, FILE s_length){
	//numbers beyond EOF
	vector<char> string_lengths(0);
	
	int i = 0, character=0,file_index=0;
	string val="";
	while(i<string_lengths.size()){
		
		for(int z=0;z<string_lengths[i];z++){
			file_index+=1;
			//Thats not quite how files work...
			//val+=chars_in_file[file_index];
		}
		character=search_file(val,(int)string_lengths[i]);
		if(character==-1){
			cout<<"Unable to complete decryption, may have used the wrong key or set of values";
		}else{
			//No.
			//character(char)<< to file;
		}
		i++;
		val="";
	}
}


int search_file(string val,int current_char){
//search in file for the string


	string v;
	int index_i=0,index=0, characters=128, length=9, string_num=24;
	for(int h=2; h<=(current_char-48); h++){
		index_i+=h*string_num; //index of first value of length x of the first character
	}
	for(int n=0;n<characters; n++){
		for(int g=0;g<string_num;g++){
			index=index_i + length*string_num*n + g*(current_char-48); //index per string of length x for each character
			//What?
			//if(index>numbers in file)
			//	return -1;//if no strings within the whole file match with val

			//Nope.
			//for(int c=0;c<length;c++){//obtain full string from that index to compare
			//	v+=file_index(index+g);
			//}
			if(v == val)
				return n;//
		}
	}
	return -1; //if no strings within the whole file match with val- just incase the the other return statement doesn't execute
}
