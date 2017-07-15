#!/bin/bash
#define FOR
#define THE
#define 42

##
#	Comment in Shell
##

EXEC='#!/bin/bash'
FILE_OUTPUT='Grace_kid.c'
me='%s\12#define FOR\12#define THE\12#define 42\12\12##\12#	Comment in Shell\12##\12\12EXEC=\47%s\47\12FILE_OUTPUT=\47%s\47\12me=\47%s\47\12printf "$me" "$EXEC" "$EXEC" "$FILE_OUTPUT" "$me" > $FILE_OUTPUT\12'
printf "$me" "$EXEC" "$EXEC" "$FILE_OUTPUT" "$me" > $FILE_OUTPUT
