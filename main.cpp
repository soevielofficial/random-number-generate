#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));

	cout << rand() % 1000;
}