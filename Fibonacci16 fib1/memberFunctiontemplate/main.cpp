/* Some fundamental exercises
$time$
HU Sheng, Essential C++ Chapter

*/
#include <iostream>
#include"PrintIt.h"
using namespace std;

int main(int argc, char* argv[])
{
	PrintIt<ostream> to_standard_out(cout);
	to_standard_out.print("hello");
	to_standard_out.print(1024);

	string my_string("i am a string");
	to_standard_out.print(my_string);

}