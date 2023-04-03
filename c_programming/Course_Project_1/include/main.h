#ifndef main__H
#define main__H

#define FILENAME "database.db"

#ifndef RECORD_FORMAT_OUT 
#define  RECORD_FORMAT_OUT  "%d,%s,%s,%d\n"
#endif

typedef struct {

    int id;
    int treat;
    char firstName[12];
    char lastName[12];
}record;


#endif
