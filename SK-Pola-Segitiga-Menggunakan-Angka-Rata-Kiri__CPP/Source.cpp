#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char* argv[]) {
	int count = 0;
	int i, j;
	int rows = 20;

	for (i = 0; i < rows; i++) {
		if (i <= (rows / 2)) {
			count++;
		} else {
			count--;
		}

		for (j = 1; j <= count; j++) {
			cout << j;
		}
			
		cout << "\n";
	}

	_getch();
	return 0;
}