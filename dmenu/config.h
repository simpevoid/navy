/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	//"Iosevka NF:style=Bold:pixelsize=13"
	"JetBrains Mono SemiBold:style=SemiBold,Regular:pixelsize=13"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
	[SchemeNorm] = { "#eceff4", "#13171f" },
	[SchemeSel] = { "#2f3441", "#ffffff" },
	//[SchemeSel] = { "#2f3441", "#49688e" },
	[SchemeOut] = { "#000000", "#00ffff" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
