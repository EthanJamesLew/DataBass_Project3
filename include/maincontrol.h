#ifndef MAINCONTROL_H
#define MAINCONTROL_H

#include "eptr.h"
#include "songlist.h"
#include "fileformat.h"
#include "ehash.h"

class MainControl
{
	friend class Com;
public:
	MainControl(e::EPtr<SongList>& l);
	~MainControl();

	void execCommand(char* command);
	
	
private:

	e::EHash_fnv1a<e::EString> hash;
	e::EVector<e::EString> vec;

	e::EPtr<SongList> lib;
	e::EPtr<FileFormat> file;

	void add();
	void edit();
	void delidx();
	void deltitle();
	void search(unsigned idx);
	void salbum();
	void sartist();
	void stitle();
	bool checkFile();
	void save();
	void load();
	void ls();
};

#endif
