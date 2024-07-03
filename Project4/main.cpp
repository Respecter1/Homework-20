/*
	4. Перерахуйте три способи усунення помилки, знайденої в коді вправи 3.
*/

/*
//1)Варіант 
#include <iostream>
using namespace std;
int main()
{
	cout << "Hello world!" << endl;
	return 0;
}
*/

/*
//2)Варіант
#include <iostream>

using std::cout;
using std::endl;


int main()
{
	cout << "Hello world!" << endl;
	return 0;
}
*/


//3)Варіант (я викорстовую лише такий варіант)
#include <iostream>

int main()
{
	std::cout << "Hello world!" << std::endl;
	return 0;
}
