#include "mainconsole.h"
#include "songlist.h"
#include "eptr.h"

int main()
{
	MainConsole console;
	console.init();
	console.renderMenu();
	console.mainLoop();

	return 0;
}
