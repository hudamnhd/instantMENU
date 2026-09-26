/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
#include "enums.h"

#ifndef INSTANTMENU_CONFIG_H
#define INSTANTMENU_CONFIG_H

static int topbar = 1;       /* -b  option; if 0, instantmenu appears at bottom     */
static int centered = 0;     /* -c option; centers dmenu on screen */
static int followcursor = 0; /* -c option; centers dmenu on screen */
static int min_width = 500;  /* minimum width when centered */

static int instant = 0;
static int spaceconfirm = 0;
static int fuzzy = 1;
static int prematch = 0;
static int smartcase = 0;
static int exact = 0;
static int sely = 0;
static int animated = 0;
static int framecount = 7;
static int fullheight = 0;
static unsigned int lineheight = 0; /* -h option; minimum height of a menu line     */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "JetBrainsMonoNL Nerd Font:style=Medium:size=10",
    "JetBrainsMonoNL Nerd Font:style=Medium:size=16",
    "JoyPixels:pixelsize=20:antialias=true:autohint=true",
};

static const char *prompt = NULL;     /* -p  option; prompt to the left of input field */
static const char *searchtext = NULL; /* -p  option; prompt to the left of input field */
static const char *leftcmd = NULL;    /* -p  option; prompt to the left of input field */
static const char *rightcmd = NULL;   /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][9] = {
    /*                  fg           bg         darker      */
    [SchemeNorm]      = {"#a89984", "#282828", "#282828"},
    [SchemeSel]       = {"#ebdbb2", "#32302f", "#d79921"},
    [SchemeFade]      = {"#7c6f64", "#282828", "#d79921"},
    [SchemeHighlight] = {"#928374", "#363331", "#554E47"},
    [SchemeHover]     = {"#928374", "#302E2C", "#49443F"},
    [SchemeOut]       = {"#d79921", "#32302f", "#d79921"},
    [SchemeGreen]     = {"#292725", "#7F9170", "#59634F"},
    [SchemeRed]       = {"#292725", "#B4776F", "#69504B"},
    [SchemeYellow]    = {"#292725", "#B09568", "#6B5D49"},
};

/* -l option; if nonzero, instantmenu uses vertical list with given number of lines */
/* -g option; controls columns in grid if nonzero and lines is nonzero */
static unsigned int lines = 0;
static unsigned int columns = 1;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* -ps option; preselected item starting from 0 */
static unsigned int preselected = 0;

/* Size of the window border */
static unsigned int border_width = 0;

#endif /* INSTANTMENU_CONFIG_H */
