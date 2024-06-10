//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/ 
  {"",  "sb-memory",  1,  16}, 
  {"",  "sb-volume",   1,  10},
  {"",  "sb-disk",  1,  10},
  {"",  "sb-battery",  1, 10},
  {"",  "sb-clock",  60, 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " • ";
static unsigned int delimLen = 6;

