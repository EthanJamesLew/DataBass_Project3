#include "mainconsole.h"
#include "SongList.h"
#include "eptr.h"

int main()
{
	MainConsole console;
	console.init();
	console.renderMenu();
	console.mainLoop();

	return 0;
}
