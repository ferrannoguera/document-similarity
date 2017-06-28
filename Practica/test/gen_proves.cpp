#include <iostream>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int randomint(){
	//cout << "max:"<< RAND_MAX << endl;//2³¹ - 1
	//cout << "min :0" << endl;	
	return rand();
}

void swap(string & a, string&  b){
	string c= a;
	a=b;
	b=c;
	return;
}


int main (){	
	srand(time(NULL));
	string s;
	vector<string> vs(0);
	while (cin >> s) vs.push_back(s);
	for(int i=0 ;i<20;i++){
		string test="test", txt=".txt";
		string num= to_string(i);
		string name = test+ num +txt;
		ofstream outfile;
		outfile.open(&name[0]);
		for(int j=0;j<vs.size();j++){
			swap(vs[j],vs[randomint()%(vs.size()-1)]);
		}
		for(int j=0;j<vs.size();j++){
			outfile << vs[j] << " " ;
		}
		outfile.close();		
	}
}



