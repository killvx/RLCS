#ifndef GDRIVE_H
#define GDRIVE_H

#include "Cloud_Storage_Base_Class.h"

class GDrive : public Cloud_Storage_Base_Class{

public:
	GDrive();

	int Config(char* config_path = NULL);

	int Download(const char* config_path, const char* to_path, const char* out_file);
	int Upload(const char* config_path, const char* in_file);
	
	int Remove(char* file_name);

	int List_Files(std::vector<std::string> &file_list);

	int Space_Free();
	int Space_Used();

};

#endif
