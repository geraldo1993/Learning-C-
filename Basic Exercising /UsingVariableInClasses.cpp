#include <iostream>
#include <string>
using namespace std;

class GeraldoClass{
 public:
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

GeraldoClass go;
go.setName("Geraldo Braho ");
cout<<go.getName()<<endl;


	return 0;
}