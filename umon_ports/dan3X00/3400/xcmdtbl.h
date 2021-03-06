/* Copyright 2013, Qualcomm Atheros, Inc. */
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
*//* xcmdtbl.c:
 * This file must exist even if it is empty because it is #included in the
 * common file cmdtbl.c.  The purpose is to keep the common comand table 
 * file (common/cmdtbl.c) from being corrupted with non-generic commands
 * that may be target specific.
 * It is the entry in the command table representing the new command being
 * added to the cmdtbl[] array.
 */
#ifdef DAN2400
        { "upgrade_umon", upgrade_umon, upgrade_umon_help, 0 },
#endif
        { "pll_on", pll_on, pll_on_help, 0 },
        { "spif_device", spif_device, spif_device_help, 0 },
        { "ddr_init", ddr_init_cli, ddr_init_help, 0 },
        { "checkcrc", dancli_Checkcrc, dancli_Checkcrc_help, 0 },
        { "ds", dancli_Ds, dancli_Ds_help, 0 },
        { "timer", dancli_Timer, dancli_Timer_help, 0 },
		{ "status", dancli_Status, dancli_Status_help, 0 },
#ifdef TRACE_ENABLED
        { "trc", dancli_Trc, dancli_Trc_help, 0 },
#endif

