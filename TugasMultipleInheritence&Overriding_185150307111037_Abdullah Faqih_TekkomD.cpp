#include <iostream>
using namespace std;

class kakek{
    public:
            void rambut(){
                  cout<<">Rambut Lurus"<<endl;
                  }             
};

class nenek{
    public:
            void kulit(){
                  cout<<">Kulit Sawo matang"<<endl;
                  }
};

class ayah : public kakek, public nenek{
    public:
    		void rambut(){
                  cout<<">Rambut Keriting"<<endl;
                  }
            void hidung(){
                  cout<<">Hidung Maju kedalam"<<endl;
                  } 
};

class anak : public ayah{
    public:
            void pandai(){
                  cout<<">Pandai berhitung"<<endl<<endl;
                  }             
};

int main() {
	anak mt;
	cout << "Karakteristik dari cucu : " << endl;
	mt.rambut();
	mt.kulit();
	mt.hidung();
	mt.pandai();

	return 0;
}
