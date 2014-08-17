
#ifndef CONFIG_H
#define CONFIG_H

#define BASE_VER	1108
#define PRO			1

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS

#ifdef	PRO
#define	PRO_F	0x010000
#else
#define	PRO_F	0
#endif

#ifdef	DEMO
#define	DEMO_F	0x080000
#else
#define	DEMO_F	0
#endif

#ifdef	EDU
#define EDU_F	0x200000
#else
#define	EDU_F	0
#endif

#define VERSION		(BASE_VER|PRO_F|DEMO_F|EDU_F)

#endif
