#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MEMLIMIT 128
#define HASHBUCKETS 128

struct command {

  char *commandName;
  char *arg[MEMLIMIT];
  char *val[MEMLIMIT];
  int argLength;
  int numberOfValues;

};

struct hashValue {
  
  int first;
  int second;

};

void info();
void prompt();
void listen(int, char *);
void parse(char* , struct command *);
int commandHandler(struct command *);
struct hashValue getHashValue(char *);
void handleCreateCommand(struct command *);
void handleAssignCommand(struct command *);
void handlePrintCommand(struct command *);
void handleJoinCommand(struct command *);
void handleCopyCommand(struct command *);
void handleRemoveCommand(struct command *);
void handleCompareCommand(struct command *);
int handleFindCommand(struct command *);
void handleReplaceCommand(struct command *);
void conditionalHandler(struct command *, struct command *);
void destroy_command(struct command *);
void destroy_strings();

int findMode(int);

char *stringVariable[MEMLIMIT][HASHBUCKETS];