#include "ccprintf.h"

int main()
{
	printf(COLOR_RED     "This is a text line in RED.\n");
	printf(COLOR_GREEN   "This is a text line in GREEN.\n");
	printf(COLOR_YELLOW  "This is a text line in YELLOW.\n");
	printf(COLOR_BLUE    "This is a text line in BLUE.\n");
	printf(COLOR_MAGENTA "This is a text line in MAGENTA.\n");
	printf(COLOR_CYAN    "This is a text line in CYAN.\n");
	printf(COLOR_WHITE   "This is a text line in WHITE.\n");
	printf(COLOR_NORMAL  "This is a text line that turns back to normal.\n");
	return 0;
}
