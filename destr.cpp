#include<iostream>
using namespace std;
class Test{
	public:
	int a;
	Test(){
		cout<<"Constructor executed"<<endl;
	}
	~Test(){
		cout<<"Destructor executed"<<endl;
	}
};
int main(){
	Test obj;
	return 0;
}