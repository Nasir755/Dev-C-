#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char name[20];
	float cost;
	ofstream outf("data");
	cout<<"enter itm name"<<endl;
	cin>>name;
	cout<<"enter cost"<<endl;
	cin>>cost;
	outf<<name<<endl;
	outf<<cost<<endl;
	outf.close();
	ifstream inf("data");
	char name1[10];
	float cost1;
	inf>>name1;
	inf>>cost1;
	cout<<" item name is "<<name1<<endl;
	cout<<" cost is "<< cost1<<endl;
	inf.close();
	
	
	
	return 0;
}

