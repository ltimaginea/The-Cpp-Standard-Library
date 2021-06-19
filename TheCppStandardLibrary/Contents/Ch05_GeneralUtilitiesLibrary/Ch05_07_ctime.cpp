#include <iostream>
#include <cstdio>

#include <time.h>

#ifdef WIN32
#pragma warning(disable:4996)
#endif

// 打印本地时间，含换行符
void PrintlnLocalTime()
{
	time_t result = time(NULL);
	if (result != (time_t)(-1))
	{
		// asctime: Return a string of the form "Day Mon dd hh:mm:ss yyyy\n" that is the representation of TP in this format.
		std::cout << asctime(localtime(&result));
	}
}

// 打印UTC时间，含换行符
void PrintlnUtcTime()
{
	time_t result = time(NULL);
	if (result != (time_t)(-1))
	{
		// asctime: Return a string of the form "Day Mon dd hh:mm:ss yyyy\n" that is the representation of TP in this format.
		std::cout << asctime(gmtime(&result));
	}
}

int main()
{
	PrintlnLocalTime();
	PrintlnUtcTime();
	return 0;
}