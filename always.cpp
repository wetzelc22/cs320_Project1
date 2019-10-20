#include "always.h"

using namespace std;

always::always(){
	this->trackT = 0;
	this->trackNT = 0;
}

int always::alwaysTaken(vector<string> s){
	for(int i = 0; i < s.size(); i++){
		if(s[i] == "T"){
			trackT++;
		}
	}
	return trackT;
}

int always::alwaysNotTaken(vector<string> s){
	for(int i = 0; i < s.size(); i++){
		if(s[i] == "NT"){
			trackNT++;
		}
	}
	return trackNT;
}
