#include <iostream>
#include <string>
using namespace std;

class sepatuVans{
	public:
	void jenis(string bentuk);
	string bahan,lini;


};

int main(){
	
	sepatuVans slipon,oldskool,sk8hi;
	
	slipon.bahan    ="canvas ";
	slipon.lini = " classic core ";
	oldskool.bahan    = "leather ";
	oldskool.lini   = " vault ";
	sk8hi.bahan = "satin ";
	sk8hi.lini = " syndicate ";


	cout << (slipon.bahan);
	cout << (slipon.lini);
    slipon.jenis("unlaces low");
    
    cout<< (oldskool.bahan);
    cout << (oldskool.lini);
    oldskool.jenis("laces low");

	cout<< (sk8hi.bahan);
	cout<< (sk8hi.lini);
	sk8hi.jenis("laces high");
}
void sepatuVans::jenis(string bentuk){
	cout<<"bentuknya "<<bentuk<<"!!"<<endl;
}


