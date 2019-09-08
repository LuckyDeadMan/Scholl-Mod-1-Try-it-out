#include <iostream>

using std::cout;
using std::endl;

class Collection {
public:
    Collection();         // Default size
    Collection(int size); // User specified size
	
	int getSize() const;
	int getCapacity() const;
	void add(double value);
	void addFront(double value);
	double get(int ndx) const;
	double getFront() const;
	double getEnd() const;
	int find(double needle) const;
	friend std::ostream& operator<<(std::ostream& out, const Collection& c);

private:
    double* collectArray;
	int currSize;
	int capacity;
};

Collection::Collection() : Collection::Collection(20)
{
}

Collection::Collection(int size)
{
    collectArray = new double[size];
	currSize = 0;
	capacity = size;
}

int Collection::getSize() const
{
	return currSize;
}

int Collection::getCapacity() const
{
	return capacity;
}

void Collection::add(double value)
{
	if (currSize = capacity) {
		throw std::runtime_error::runtime_error("List Full");
	}
	else {
		collectArray[currSize] = value;
		currSize++;
	}
}

void Collection::addFront(double value)
{
	if (currSize = capacity) {
		throw std::runtime_error::runtime_error("List Full");
	}
	else {
		for (int i = currSize - 1; i >= 0; i--) {
			collectArray[currSize - 1] = collectArray[currSize];
		}
		collectArray[0] = value;
	}
}

double Collection::get(int ndx) const
{
	// Add out of range check
	return collectArray[ndx];
}

double Collection::getFront() const
{
	return collectArray[0];
}

double Collection::getEnd() const
{
	return collectArray[currSize - 1];
}

int Collection::find(double needle) const
{
	for (int i = 0; i < currSize; i++) {

	}
	return 0;
}



int main() {

    Collection c1;
    Collection c2(8);
    cout << "hello" << endl;
    return 0;
}

std::ostream& operator<<(std::ostream& out, const Collection& c)
{
	// TODO: insert return statement here
}
