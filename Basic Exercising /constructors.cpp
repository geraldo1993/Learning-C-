#include <iostream>
#include <string>
using namespace std;

class GeraldoClass{
 public:
 	//this is a constructor
 	GeraldoClass(string z){
 		setName(z);

 	}
///This is a functions 
 		void setName(string x){
				name=x;
            }

 		string getName(){
 			return name;
 		}

 private:
		string name;
};


int main (){

GeraldoClass go(" This is the first example using a constructor");
cout<<go.getName()<<endl;


	return 0;
}