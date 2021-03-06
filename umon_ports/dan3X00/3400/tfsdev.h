/*
All files except if stated otherwise in the begining of the file are under the GPLv2 license:
-----------------------------------------------------------------------------------

Copyright (c) 2010-2012 Design Art Networks Ltd.

THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

-----------------------------------------------------------------------------------
*/
/* tfsdev.h:
    This file is ONLY included by tfs.c.  It is separate from tfs.h because
    it is target-specific.  It is not part of config.h because it includes
    the declaration of the tfsdevtbl[].
    A prefix in the name of the file determines what device is used to store
    that file.  If no prefix is found the the first device in the table is
    used as a default.  The syntax of the prefix is "//STRING/" where STRING
    is user-definable, but the initial // and final / are required by tfs
    code.
*/

struct tfsdev tfsdevtbl[] = {
    {   "//FLASH/",
        TFSSTART,
        TFSEND,
        TFSSPARE,
        TFSSPARESIZE,
        TFSSECTORCOUNT,
        TFS_DEVTYPE_FLASH, },

    { 0, TFSEOT,0,0,0,0,0 }
}; 

#define TFSDEVTOT ((sizeof(tfsdevtbl))/(sizeof(struct tfsdev)))
