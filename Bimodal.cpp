#include "Bimodal.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;


int Bimodal::oneBit(vector<unsigned long long> addrs, vector<string> vec, int bits){
	int ret = 0;
	string table[bits];
	fill(table, table+bits, "T");
	for(int i = 0; i < addrs.size();i++){
		int index = addrs[i] % bits;
		if(table[index] == vec[i]){
			ret++;
		}else{
			table[index] = vec[i];
		}
	}
	return ret;
}
int Bimodal::twoBit(vector<unsigned long long> addrs, vector<string> vec, int bits){
	int ret = 0;
	/*
	0 = TT
	1 = T
	2 = NT
	3 = NNT
	*/
	int table[bits];
	fill(table, table+bits, 0);
	for(int i = 0; i < addrs.size();i++){
		int index = addrs[i] % bits;
		if(vec[i] == "T"){
			if(table[index] < 2) ret++;
			if(table[index] > 0){
				table[index]--;
			}
		}else{
			if(table[index] > 1) ret++;
			if(table[index] < 3){
				table[index]++;
			}
		}
	}
	return ret;

}
