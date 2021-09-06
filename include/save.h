#ifndef save_h
#define save_h

#include <stdio.h>
#include <sqlite3.h>
#include "logging.h"
#include "user.h"

#define ARRAY_SIZE(arr) (int)(sizeof(arr)/sizeof((arr)[0]))

#define ID_COL 0
#define NICK_COL 1
#define PASS_COL 2

/*	The USERS table
	ID | NICK | PASS
	int| text | text
	----------------
	01 | name | hash
*/

sqlite3 *init_save(char *saveFile);

// Will load a user from the SQL table
int save_loadUser(char *name, struct usr_UserData *user);

void save_logError(char *message, int code, int type);

#endif
