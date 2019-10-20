#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "always.h"
#include "Bimodal.h"



using namespace std;

int gShare(){

//Up to gShare
	
}



int main(int argc, char * argv[]){
	unsigned long long addr;
	string behavior;
	unsigned long long target;
	vector<unsigned long long> addrs;
	vector<unsigned long long> targets;
	vector<string> vecB;
	ifstream reader(argv[1]);
	//Vector<int> pc_addrs;
	while(reader >> std::hex >> addr >> behavior >> std::hex >> target) {
		addrs.push_back(addr);
		targets.push_back(target);
		vecB.push_back(behavior);
		//cout << addr;
		if(behavior == "T") {
			//cout << " -> taken, ";
		}else {
			//cout << " -> not taken, ";
		}
		//cout << "target=" << target << endl;
	}
	reader.close();
	always a;
	Bimodal b;
	int x = a.alwaysTaken(vecB);
	int y = a.alwaysNotTaken(vecB);
	int z = b.oneBit(addrs, vecB, 16);
	int za = b.oneBit(addrs, vecB, 32);
	int zb = b.oneBit(addrs, vecB, 128);
	int zc = b.oneBit(addrs, vecB, 256);
	int zd = b.oneBit(addrs, vecB, 1024);
	int ze = b.oneBit(addrs, vecB, 2048);
	int v = b.twoBit(addrs, vecB, 16);
	int va = b.twoBit(addrs, vecB, 32);
	int vb = b.twoBit(addrs, vecB, 128);
	int vc = b.twoBit(addrs, vecB, 256);
	int vd = b.twoBit(addrs, vecB, 1024);
	int ve = b.twoBit(addrs, vecB, 2048);
	cout << x << " ; " << vecB.size() << endl;
	cout << y << " ; " << vecB.size() << endl;
	cout << z << " ; " << vecB.size() << " ";
	cout << za << " ; " << vecB.size() << " ";
	cout << zb << " ; " << vecB.size() << " ";
	cout << zc << " ; " << vecB.size() << " ";
	cout << zd << " ; " << vecB.size() << " ";
	cout << ze << " ; " << vecB.size() << endl;
	cout << v << " ; " << vecB.size() << " ";
	cout << va << " ; " << vecB.size() << " ";
	cout << vb << " ; " << vecB.size() << " ";
	cout << vc << " ; " << vecB.size() << " ";
	cout << vd << " ; " << vecB.size() << " ";
	cout << ve << " ; " << vecB.size() << endl;

	return 0;
}
