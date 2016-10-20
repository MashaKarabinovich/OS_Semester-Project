#include <string>
using namespace std;
class Disk{
public:
	Disk();

	void add(string entry);
	string get(int index);
	bool isFull();
	int getSize();
	
private:
	int size;
	static const int capacity = 2048;
	string disk[capacity];
};