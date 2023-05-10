#include <iostream>
#include <string>
using namespace std;

class pelajar;

class manusia {
public:
	void showNilaipelajar(pelajar&);
};

class pelajar {
private:
	int nilai;
public:
	pelajar() {
		nilai = 100;
	}
	friend void manusia::showNilaipelajar(pelajar& x);
};

void manusia::showNilaipelajar(pelajar& x) {
	cout << "Nilai Pelajar: " << x.nilai;
}
