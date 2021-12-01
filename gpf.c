#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*PROTOTYPES*/
typedef struct name_val_pair name_val_pair;
int readn(char *str,int n,FILE *stream);
int replaceall(char *src, const char *find, const char *rep);
char* geturlstr(void);
void decode(char *url);
void rem_ssi(char *chkstr);
name_val_pair* name_val(char *url);
long givcount(char*);

/*A GENERAL PURPOSE FUNCTION WHICH READS N CHARACTERS FROM STREAM AND
  APPENDS '*/
