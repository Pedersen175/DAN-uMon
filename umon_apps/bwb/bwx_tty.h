/***************************************************************

        bwx_tty.h       Header file for TTY-style hardware
			implementation of bwBASIC

			This file may be used as a template
			for developing more sophisticated
			hardware implementations

                        Copyright (c) 1993, Ted A. Campbell
			Bywater Software

                        email: tcamp@delphi.com

        Copyright and Permissions Information:

        All U.S. and international rights are claimed by the author,
        Ted A. Campbell.

	This software is released under the terms of the GNU General
	Public License (GPL), which is distributed with this software
	in the file "COPYING".  The GPL specifies the terms under
	which users may copy and use the software in this distribution.

	A separate license is available for commercial distribution,
	for information on which you should contact the author.

***************************************************************/

#define IMP_IDSTRING    "TTY"           /* unique ID string for this implementation */

/* Definitions indicating which commands and functions are implemented */

#ifdef _UMON_
#define IMP_FNCINKEY	1		/* 0 if INKEY$ is not implemented, 1 if it is */
#else
#define IMP_FNCINKEY	0		/* 0 if INKEY$ is not implemented, 1 if it is */
#endif
#define IMP_CMDCLS	0		/* 0 if CLS is not implemented, 1 if it is */
#define IMP_CMDLOC	0		/* 0 if LOCATE is not implemented, 1 if it is */
#define IMP_CMDCOLOR    0               /* 0 if COLOR is not implemented, 1 if it is */

#ifdef _UMON_
#define UNIX_CMDS       TRUE
#else
#define UNIX_CMDS       FALSE
#endif
#define MKDIR_ONE_ARG   FALSE           /* TRUE if your mkdir has but one argument;
					   FALSE if it has two */
#define PERMISSIONS	493		/* permissions to set in Unix-type system */
