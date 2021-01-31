#ifndef EDIT_H
#define EDIT_H

// Trova quante volte il caratter ch compare in str
int strocc(char* str, char ch);

// Dividi il Buffer in righe e restituisci il numero di righe in _Lines
char** getLineBuffer(char* Buffer, int* _Lines);

// Restituisce la linea specificata
char* getLine(char** LineBuffer, int Line);

// Restitusice un puntatore alla riga specificata
char** getLinePtr(char** LineBuffer, int Line);

void freeLineBuffer(char** LineBuffer, int Lines);

// Sostituisci
char* substitute(char** row, char* _old, char* _new);

// Aggiungi dopo / _before = 0 ==> aggiungi infondo alla riga
char* putstr(char** row, char* _before, char* _new);

char* editCommandInterpreter(char* arg, char** _str1, char** _str2);

int getLineBufferSize(char** LineBuffer, int Lines);

// Ricomponi il Buffer diviso in righe
char* getBuffer(char** LineBuffer, int Lines);

#endif // EDIT_H