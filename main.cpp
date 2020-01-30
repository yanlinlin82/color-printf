#include "ccprintf.h"
using namespace std;

int main()
{
	printf(COLOR_RED     "This is a text line in RED.\n");
	printf(COLOR_GREEN   "This is a text line in GREEN.\n");
	printf(COLOR_YELLOW  "This is a text line in YELLOW.\n");
	printf(COLOR_BLUE    "This is a text line in BLUE.\n");
	printf(COLOR_MAGENTA "This is a text line in MAGENTA.\n");
	printf(COLOR_CYAN    "This is a text line in CYAN.\n");
	printf(COLOR_WHITE   "This is a text line in WHITE.\n");
	printf(COLOR_NORMAL  "This is a text line that turns back to normal.\n\n");

	cout << cc::red     << "This is a text line in RED." << endl;
	cout << cc::green   << "This is a text line in GREEN." << endl;
	cout << cc::yellow  << "This is a text line in YELLOW." << endl;
	cout << cc::blue    << "This is a text line in BLUE." << endl;
	cout << cc::magenta << "This is a text line in MAGENTA." << endl;
	cout << cc::cyan    << "This is a text line in CYAN." << endl;
	cout << cc::white   << "This is a text line in WHITE." << endl;
	cout << cc::normal  << "This is a text line that turns back to normal.\n" << endl;
	return 0;
}
