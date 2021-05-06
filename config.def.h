/* user and group to drop privileges to */
static const char *user  = "kitchu";
static const char *group = "kitchu";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#44475a",     /* after initialization */
	[INPUT] =  "#6272a4",   /* during input */
	[FAILED] = "#ffb86c",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
