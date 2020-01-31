#pragma once
#ifndef __cplusplus
#include <stdio.h>
#else
#include <cstdio>
#include <iostream>
#endif

#define COLOR_NORMAL  "\x1B[0m"
#define COLOR_RED     "\x1B[31m"
#define COLOR_GREEN   "\x1B[32m"
#define COLOR_YELLOW  "\x1B[33m"
#define COLOR_BLUE    "\x1B[34m"
#define COLOR_MAGENTA "\x1B[35m"
#define COLOR_CYAN    "\x1B[36m"
#define COLOR_WHITE   "\x1B[37m"

#ifdef __cplusplus
namespace cc // colorized characters
{
	class normal_t {}; void normal (normal_t ) { }
	class red_t    {}; void red    (red_t    ) { }
	class green_t  {}; void green  (green_t  ) { }
	class yellow_t {}; void yellow (yellow_t ) { }
	class blue_t   {}; void blue   (blue_t   ) { }
	class magenta_t{}; void magenta(magenta_t) { }
	class cyan_t   {}; void cyan   (cyan_t   ) { }
	class white_t  {}; void white  (white_t  ) { }
	std::ostream& operator << (std::ostream& os, void(*)(normal_t )) { return (os << COLOR_NORMAL ); }
	std::ostream& operator << (std::ostream& os, void(*)(red_t    )) { return (os << COLOR_RED    ); }
	std::ostream& operator << (std::ostream& os, void(*)(green_t  )) { return (os << COLOR_GREEN  ); }
	std::ostream& operator << (std::ostream& os, void(*)(yellow_t )) { return (os << COLOR_YELLOW ); }
	std::ostream& operator << (std::ostream& os, void(*)(blue_t   )) { return (os << COLOR_BLUE   ); }
	std::ostream& operator << (std::ostream& os, void(*)(magenta_t)) { return (os << COLOR_MAGENTA); }
	std::ostream& operator << (std::ostream& os, void(*)(cyan_t   )) { return (os << COLOR_CYAN   ); }
	std::ostream& operator << (std::ostream& os, void(*)(white_t  )) { return (os << COLOR_WHITE  ); }
}
#endif
