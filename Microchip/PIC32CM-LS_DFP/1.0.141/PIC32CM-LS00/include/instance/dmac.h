/*
 * Instance header file for PIC32CM5164LS00100
 *
 * Copyright (c) 2021 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2021-11-12T10:11:10Z */
#ifndef _PIC32CMLS00_DMAC_INSTANCE_
#define _PIC32CMLS00_DMAC_INSTANCE_


/* ========== Instance Parameter definitions for DMAC peripheral ========== */
#define DMAC_CH_BITS                             _UL_(4)    /* Number of bits to select channel */
#define DMAC_CH_NUM                              _UL_(16)   /* Number of channels */
#define DMAC_EVIN_NUM                            _UL_(8)    /* Number of input events */
#define DMAC_EVOUT_NUM                           _UL_(8)    /* Number of output events */
#define DMAC_LVL_BITS                            _UL_(2)    /* Number of bit to select level priority */
#define DMAC_LVL_NUM                             _UL_(4)    /* Enable priority level number */
#define DMAC_QOSCTRL_D_RESETVALUE                _UL_(2)    /* QOS dmac ahb interface reset value */
#define DMAC_QOSCTRL_F_RESETVALUE                _UL_(2)    /* QOS dmac fetch interface reset value */
#define DMAC_QOSCTRL_WRB_RESETVALUE              _UL_(2)    /* QOS dmac write back interface reset value */
#define DMAC_SPLIT_IRQ_NUM                       _UL_(4)    /* Number of IRQ split out */
#define DMAC_TRIG_BITS                           _UL_(6)    /* Number of bits to select trigger source */
#define DMAC_TRIG_NUM                            _UL_(51)   /* Number of peripheral triggers */
#define DMAC_INSTANCE_ID                         _UL_(35)   /* Instance index for DMAC */
#define DMAC_CHANNEL0_INT_SRC                    _UL_(15)   /* DMA Channel 0 Interrupt */
#define DMAC_CHANNEL1_INT_SRC                    _UL_(16)   /* DMA Channel 1 Interrupt */
#define DMAC_CHANNEL2_INT_SRC                    _UL_(17)   /* DMA Channel 2 Interrupt */
#define DMAC_CHANNEL3_INT_SRC                    _UL_(18)   /* DMA Channel 3 Interrupt */
#define DMAC_CHANNEL4_INT_SRC                    _UL_(19)   /* DMA Channel 4 Interrupt */
#define DMAC_CHANNEL5_INT_SRC                    _UL_(19)   /* DMA Channel 5 Interrupt */
#define DMAC_CHANNEL6_INT_SRC                    _UL_(19)   /* DMA Channel 6 Interrupt */
#define DMAC_CHANNEL7_INT_SRC                    _UL_(19)   /* DMA Channel 7 Interrupt */
#define DMAC_CHANNEL8_INT_SRC                    _UL_(19)   /* DMA Channel 8 Interrupt */
#define DMAC_CHANNEL9_INT_SRC                    _UL_(19)   /* DMA Channel 9 Interrupt */
#define DMAC_CHANNEL10_INT_SRC                   _UL_(19)   /* DMA Channel 10 Interrupt */
#define DMAC_CHANNEL11_INT_SRC                   _UL_(19)   /* DMA Channel 11 Interrupt */
#define DMAC_CHANNEL12_INT_SRC                   _UL_(19)   /* DMA Channel 12 Interrupt */
#define DMAC_CHANNEL13_INT_SRC                   _UL_(19)   /* DMA Channel 13 Interrupt */
#define DMAC_CHANNEL14_INT_SRC                   _UL_(19)   /* DMA Channel 14 Interrupt */
#define DMAC_CHANNEL15_INT_SRC                   _UL_(19)   /* DMA Channel 15 Interrupt */

#endif /* _PIC32CMLS00_DMAC_INSTANCE_ */
