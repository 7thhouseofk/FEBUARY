#include <Windows.h>
using namespace std;
int main() {
	for (int i = 1; i < 100; i++) {
		Beep(i *1000, 5000);
	}
}