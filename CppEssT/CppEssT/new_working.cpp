// new_working.cpp
#include <cstdio>
using namespace std;

const char* prompt();
int jump(const char*);

void fa() { puts("This is fa()"); }
void fb() { puts("This is fb()"); }
void fc() { puts("This is fc()"); }
void fd() { puts("This is fd()"); }
void fe() { puts("This is fe()"); }

void(*funcs[])() = { fa, fb, fc, fd, fe, nullptr };

int main()
{
	while (jump(prompt()));
	puts("\nDone");
	return 0;
}

const char* prompt()
{
	puts("Choose an option: ");
	puts("1. Function fa()");
	puts("2. Function fb()");
	puts("3. Function fc()");
	puts("4. Function fd()");
	puts("5. Function fe()");
	puts("Q. Quit.");
	puts(">> ");

	fflush(stdout);					// flush after prompt
	const int buffsz = 16;			// constant for buffer size
	static char response[buffsz];	// static storage for response buffer
	fgets(response, buffsz, stdin);	// get response from console

	return response;
}

int jump(const char* rs)
{
	char code = rs[0];
	if (code == 'q' || code == 'Q') return 0;

	// consts the length of the funcs array
	int func_length = 0;
	while (funcs[func_length] != NULL)func_length++;

	int i = (int)code - '0'; // convert ASCII numeral to int
	i--; // list is 0 based
	if (i < 0 || i >= func_length)
	{
		puts("invalid choise");
		return 1;
	}
	else
	{
		funcs[i]();
		return 1;
	}

}