/**
 ******************************************************************************
 * @file    usb_conf.h
 * @author  MCD Application Team
 * @version V4.0.0
 * @date    21-January-2013
 * @brief   Virtual COM Port Demo configuration  header
 ******************************************************************************
 */

#ifndef __USB_CONF_H
#define __USB_CONF_H

/*-------------------------------------------------------------*/
/* EP_NUM */
/* defines how many endpoints are used by the device */
/*-------------------------------------------------------------*/
#define EP_NUM			(4)

/*-------------------------------------------------------------*/
/* --------------   Buffer Description Table  -----------------*/
/*-------------------------------------------------------------*/
/* buffer table base address */
#define BTABLE_ADDRESS	(0x00)

/* EP0  */
/* rx/tx buffer base address */
#define ENDP0_RXADDR	(0x40)
#define ENDP0_TXADDR	(0x80)

/* EP1  */
/* tx buffer base address */
#define ENDP1_TXADDR	(0xC0)
#define ENDP2_TXADDR	(0x100)
#define ENDP3_RXADDR	(0x110)

/*-------------------------------------------------------------*/
/* -------------------   ISTR events  -------------------------*/
/*-------------------------------------------------------------*/
/* IMR_MSK */
/* mask defining which events has to be handled */
/* by the device application software */
#define IMR_MSK			(	CNTR_CTRM	\
						|	CNTR_WKUPM	\
						|	CNTR_SUSPM	\
						|	CNTR_ERRM	\
						|	CNTR_SOFM	\
						|	CNTR_ESOFM	\
						|	CNTR_RESETM	\
						)

/*#define CTR_CALLBACK*/
/*#define DOVR_CALLBACK*/
/*#define ERR_CALLBACK*/
/*#define WKUP_CALLBACK*/
/*#define SUSP_CALLBACK*/
/*#define RESET_CALLBACK*/
#define SOF_CALLBACK
/*#define ESOF_CALLBACK*/

/* CTR service routines */
/* associated to defined endpoints */
/*	#define  EP1_IN_Callback	NOP_Process*/
#define  cdcEP2_IN_Callback	NOP_Process
#define  cdcEP3_IN_Callback	NOP_Process
#define  cdcEP4_IN_Callback	NOP_Process
#define  cdcEP5_IN_Callback	NOP_Process
#define  cdcEP6_IN_Callback	NOP_Process
#define  cdcEP7_IN_Callback	NOP_Process

#define  cdcEP1_OUT_Callback	NOP_Process
#define  cdcEP2_OUT_Callback	NOP_Process
/*	#define  EP3_OUT_Callback	NOP_Process*/
#define  cdcEP4_OUT_Callback	NOP_Process
#define  cdcEP5_OUT_Callback	NOP_Process
#define  cdcEP6_OUT_Callback	NOP_Process
#define  cdcEP7_OUT_Callback	NOP_Process

#endif /* __USB_CONF_H */