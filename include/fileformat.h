#ifndef FILEFORMAT_H
#define FILEFORMAT_H

#include "estring.h"
#include "songlist.h"

#include <fstream>
#include <cstring>


class FileFormat
{
public:
	void projectToFile(SongList& lib, e::EString filename);

	void fileToProject(SongList& lib, e::EString filename);
};

e::EVector<e::EString> getWords(e::EString& vec, const char del = ' ');

#endif
