#include <iostream>

using namespace std;

class Box {
	private:
	double length;
	double height;
	double width;
	public:
	Box (double l, double h, double w) {
		length = l;
		height = h;
		width = w;
	}
	~Box();
	void setlength (double len) {
		length = len;
	}
	void printlength() {
		cout <<"box length is " << length <<endl;
	}
	void printwidth();
};

Box::~Box() {
	cout << "Box is deleted" << endl;
}

void Box::printwidth() {
	cout <<"box width is " << width <<endl;
}



int main() {
	Box box(5,10,15);
	Box box2 = box;
// 	box.setlength(5);
// 	cout <<"box width " << box.getlength() <<endl;
	box2.printlength();
	box2.printwidth();
    return 0;
}

