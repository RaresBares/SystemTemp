#include <iostream>
#include <fstream>

int main() {
    using namespace std;
         system("cat sys/class/thermal/thermal_zone*/temp >temp.txt");
	cout << ifstream("temp.txt").rdbuf();
    return 0;
}
