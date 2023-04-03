#ifndef data_serialization__H
#define data_serialization__H


#ifndef main__H
#include "../include/main.h"
#endif


char *read_file_to_one_string();

void updateFile(record* students);

record *use_data(char *wholefile);




#endif 