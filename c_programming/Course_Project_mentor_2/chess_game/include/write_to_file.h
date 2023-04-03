#ifndef write_to_file__H
#define write_to_file__H

#define FILENAME "result.txt"



void initFile();


void writeMovesToFileKnight(char cmd[4]);

void writeFinalMoves(int moves);

void writeMovesQueenRook(char cmd[4],int moves);

void read_file_to_one_string();

#endif