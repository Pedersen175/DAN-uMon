/* ssl.h:
 *	SSL accelerator defines.
 *	
 *	General notice:
 *	This code is part of a boot-monitor package developed as a generic base
 *	platform for embedded system designs.  As such, it is likely to be
 *	distributed to various projects beyond the control of the original
 *	author.  Please notify the author of any enhancements made or bugs found
 *	so that all may benefit from the changes.  In addition, notification back
 *	to the author will allow the new user to pick up changes that may have
 *	been made by other users after this version of the code was distributed.
 *
 *	Author:	Torsten Tetz, Bosch Security Systems
 *	        Mark Jonas, Bosch Security Systems, mark.jonas@de.bosch.com
 */
#ifndef __SH7720_SSL_H
#define __SH7720_SSL_H

/* SSL registers */
#define SSACTRL		((volatile unsigned long *)(0xA7010000))
#define RSAMD		((volatile unsigned long *)(0xA7012400))
#define RSACTRL		((volatile unsigned long *)(0xA7012500))
#define RSAINTC		((volatile unsigned long *)(0xA7012700))
#define RSADATAA0	((volatile unsigned long *)(0xA70120C0))
#define RSADATAA1	((volatile unsigned long *)(0xA70120C4))
#define RSADATAA2	((volatile unsigned long *)(0xA70120C8))
#define RSADATAA3	((volatile unsigned long *)(0xA70120CC))
#define RSADATAA4	((volatile unsigned long *)(0xA70120D0))
#define RSADATAA5	((volatile unsigned long *)(0xA70120D4))
#define RSADATAA6	((volatile unsigned long *)(0xA70120D8))
#define RSADATAA7	((volatile unsigned long *)(0xA70120DC))
#define RSADATAA8	((volatile unsigned long *)(0xA70120E0))
#define RSADATAA9	((volatile unsigned long *)(0xA70120E4))
#define RSADATAA10	((volatile unsigned long *)(0xA70120E8))
#define RSADATAA11	((volatile unsigned long *)(0xA70120EC))
#define RSADATAA12	((volatile unsigned long *)(0xA70120F0))
#define RSADATAA13	((volatile unsigned long *)(0xA70120F4))
#define RSADATAA14	((volatile unsigned long *)(0xA70120F8))
#define RSADATAA15	((volatile unsigned long *)(0xA70120FC))
#define RSADATAB0	((volatile unsigned long *)(0xA70121C0))
#define RSADATAB1	((volatile unsigned long *)(0xA70121C4))
#define RSADATAB2	((volatile unsigned long *)(0xA70121C8))
#define RSADATAB3	((volatile unsigned long *)(0xA70121CC))
#define RSADATAB4	((volatile unsigned long *)(0xA70121D0))
#define RSADATAB5	((volatile unsigned long *)(0xA70121D4))
#define RSADATAB6	((volatile unsigned long *)(0xA70121D8))
#define RSADATAB7	((volatile unsigned long *)(0xA70121DC))
#define RSADATAB8	((volatile unsigned long *)(0xA70121E0))
#define RSADATAB9	((volatile unsigned long *)(0xA70121E4))
#define RSADATAB10	((volatile unsigned long *)(0xA70121E8))
#define RSADATAB11	((volatile unsigned long *)(0xA70121EC))
#define RSADATAB12	((volatile unsigned long *)(0xA70121F0))
#define RSADATAB13	((volatile unsigned long *)(0xA70121F4))
#define RSADATAB14	((volatile unsigned long *)(0xA70121F8))
#define RSADATAB15	((volatile unsigned long *)(0xA70121FC))
#define RSADATABS0	((volatile unsigned long *)(0xA7012200))
#define RSADATABS1	((volatile unsigned long *)(0xA7012204))
#define RSADATABS2	((volatile unsigned long *)(0xA7012208))
#define RSADATABS3	((volatile unsigned long *)(0xA701220C))
#define RSADATABS4	((volatile unsigned long *)(0xA7012210))
#define RSADATABS5	((volatile unsigned long *)(0xA7012214))
#define RSADATABS6	((volatile unsigned long *)(0xA7012218))
#define RSADATABS7	((volatile unsigned long *)(0xA701221C))
#define RSADATABS8	((volatile unsigned long *)(0xA7012220))
#define RSADATABS9	((volatile unsigned long *)(0xA7012224))
#define RSADATABS10	((volatile unsigned long *)(0xA7012228))
#define RSADATABS11	((volatile unsigned long *)(0xA701222C))
#define RSADATABS12	((volatile unsigned long *)(0xA7012230))
#define RSADATABS13	((volatile unsigned long *)(0xA7012234))
#define RSADATABS14	((volatile unsigned long *)(0xA7012238))
#define RSADATABS15	((volatile unsigned long *)(0xA701223C))
#define RSADATAX0	((volatile unsigned long *)(0xA70128C0))
#define RSADATAX1	((volatile unsigned long *)(0xA70128C4))
#define RSADATAX2	((volatile unsigned long *)(0xA70128C8))
#define RSADATAX3	((volatile unsigned long *)(0xA70128CC))
#define RSADATAX4	((volatile unsigned long *)(0xA70128D0))
#define RSADATAX5	((volatile unsigned long *)(0xA70128D4))
#define RSADATAX6	((volatile unsigned long *)(0xA70128D8))
#define RSADATAX7	((volatile unsigned long *)(0xA70128DC))
#define RSADATAX8	((volatile unsigned long *)(0xA70128E0))
#define RSADATAX9	((volatile unsigned long *)(0xA70128E4))
#define RSADATAX10	((volatile unsigned long *)(0xA70128E8))
#define RSADATAX11	((volatile unsigned long *)(0xA70128EC))
#define RSADATAX12	((volatile unsigned long *)(0xA70128F0))
#define RSADATAX13	((volatile unsigned long *)(0xA70128F4))
#define RSADATAX14	((volatile unsigned long *)(0xA70128F8))
#define RSADATAX15	((volatile unsigned long *)(0xA70128FC))
#define RSADATAK0	((volatile unsigned long *)(0xA70129C0))
#define RSADATAK1	((volatile unsigned long *)(0xA70129C4))
#define RSADATAK2	((volatile unsigned long *)(0xA70129C8))
#define RSADATAK3	((volatile unsigned long *)(0xA70129CC))
#define RSADATAK4	((volatile unsigned long *)(0xA70129D0))
#define RSADATAK5	((volatile unsigned long *)(0xA70129D4))
#define RSADATAK6	((volatile unsigned long *)(0xA70129D8))
#define RSADATAK7	((volatile unsigned long *)(0xA70129DC))
#define RSADATAK8	((volatile unsigned long *)(0xA70129E0))
#define RSADATAK9	((volatile unsigned long *)(0xA70129E4))
#define RSADATAK10	((volatile unsigned long *)(0xA70129E8))
#define RSADATAK11	((volatile unsigned long *)(0xA70129EC))
#define RSADATAK12	((volatile unsigned long *)(0xA70129F0))
#define RSADATAK13	((volatile unsigned long *)(0xA70129F4))
#define RSADATAK14	((volatile unsigned long *)(0xA70129F8))
#define RSADATAK15	((volatile unsigned long *)(0xA70129FC))
#define RSADATAR0	((volatile unsigned long *)(0xA7012AC0))
#define RSADATAR1	((volatile unsigned long *)(0xA7012AC4))
#define RSADATAR2	((volatile unsigned long *)(0xA7012AC8))
#define RSADATAR3	((volatile unsigned long *)(0xA7012ACC))
#define RSADATAR4	((volatile unsigned long *)(0xA7012AD0))
#define RSADATAR5	((volatile unsigned long *)(0xA7012AD4))
#define RSADATAR6	((volatile unsigned long *)(0xA7012AD8))
#define RSADATAR7	((volatile unsigned long *)(0xA7012ADC))
#define RSADATAR8	((volatile unsigned long *)(0xA7012AE0))
#define RSADATAR9	((volatile unsigned long *)(0xA7012AE4))
#define RSADATAR10	((volatile unsigned long *)(0xA7012AE8))
#define RSADATAR11	((volatile unsigned long *)(0xA7012AEC))
#define RSADATAR12	((volatile unsigned long *)(0xA7012AF0))
#define RSADATAR13	((volatile unsigned long *)(0xA7012AF4))
#define RSADATAR14	((volatile unsigned long *)(0xA7012AF8))
#define RSADATAR15	((volatile unsigned long *)(0xA7012AFC))
#define DESCSR		((volatile unsigned long *)(0xA7013100))
#define DESIRQ		((volatile unsigned long *)(0xA7013104))
#define DESK1L		((volatile unsigned long *)(0xA7013108))
#define DESK1U		((volatile unsigned long *)(0xA701310C))
#define DESK2L		((volatile unsigned long *)(0xA7013110))
#define DESK2U		((volatile unsigned long *)(0xA7013114))
#define DESK3L		((volatile unsigned long *)(0xA7013118))
#define DESK3U		((volatile unsigned long *)(0xA701311C))
#define DESCIL		((volatile unsigned long *)(0xA7013120))
#define DESCIU		((volatile unsigned long *)(0xA7013124))
#define DESDRL		((volatile unsigned long *)(0xA7013128))
#define DESDRU		((volatile unsigned long *)(0xA701312C))

#endif	/*__SH7720_SSL_H */

