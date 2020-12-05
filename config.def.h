/*
 * Define ESC sequences to use for scroll events.
 * Use "cat -v" to figure out favorite key combination.
 *
 * lines is the number of lines scrolled up or down.
 * If lines is negative, it's the fraction of the terminal size.
 */

struct rule rules[] = {
	/* sequence     event        lines */
	{"\033[5;2~",   SCROLL_UP,   -1},       /* [Shift] + [PageUP] */
	{"\033[6;2~",   SCROLL_DOWN, -1},       /* [Shift] + [PageDown] */
	{"\031",        SCROLL_UP,    1},       /* mouse wheel up */
	{"\005",        SCROLL_DOWN,  1},       /* mouse wheel Down */
	{"\033k",       SCROLL_UP,  1},         /* Alt+k scroll 1 line up */
	{"\033j",       SCROLL_DOWN,  1},       /* Alt+j scroll 1 line down */
	{"\033K",       SCROLL_UP,  -2},        /* Alt+shift+k scroll half screen up */
	{"\033J",       SCROLL_DOWN,  -2},      /* Alt+shift+j scroll half screen down */
};
