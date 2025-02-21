#include <iostream>
#include "LAB.h"

using namespace std;

int main(){
	int a;
	int b;
	cin >> a >> b;
	if (a > b) {
		cout << subtract(a, b) << endl;
	}
	else {
		cout << add(a, b) << endl;
	};
}