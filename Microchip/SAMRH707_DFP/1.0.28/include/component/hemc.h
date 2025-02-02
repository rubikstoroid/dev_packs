/**
 * \brief Component description for HEMC
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

/* file generated from device description version 2021-05-04T18:07:51Z */
#ifndef _SAMRH707_HEMC_COMPONENT_H_
#define _SAMRH707_HEMC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR HEMC                                         */
/* ************************************************************************** */

/* -------- HEMC_CR_NCS0 : (HEMC Offset: 0x00) (R/W 32) HEMC Control Register NCS 0 -------- */
#define HEMC_CR_NCS0_ZERO_Pos                 _U_(0)                                               /**< (HEMC_CR_NCS0) fixed to 0 Position */
#define HEMC_CR_NCS0_ZERO_Msk                 (_U_(0x1) << HEMC_CR_NCS0_ZERO_Pos)                  /**< (HEMC_CR_NCS0) fixed to 0 Mask */
#define HEMC_CR_NCS0_ZERO(value)              (HEMC_CR_NCS0_ZERO_Msk & ((value) << HEMC_CR_NCS0_ZERO_Pos))
#define HEMC_CR_NCS0_BANKSIZE_Pos             _U_(1)                                               /**< (HEMC_CR_NCS0) Bank Size Position */
#define HEMC_CR_NCS0_BANKSIZE_Msk             (_U_(0x1F) << HEMC_CR_NCS0_BANKSIZE_Pos)             /**< (HEMC_CR_NCS0) Bank Size Mask */
#define HEMC_CR_NCS0_BANKSIZE(value)          (HEMC_CR_NCS0_BANKSIZE_Msk & ((value) << HEMC_CR_NCS0_BANKSIZE_Pos))
#define   HEMC_CR_NCS0_BANKSIZE_8KB_Val       _U_(0x0)                                             /**< (HEMC_CR_NCS0) 8Kbytes  */
#define   HEMC_CR_NCS0_BANKSIZE_16KB_Val      _U_(0x1)                                             /**< (HEMC_CR_NCS0) 16Kbytes  */
#define   HEMC_CR_NCS0_BANKSIZE_32KB_Val      _U_(0x2)                                             /**< (HEMC_CR_NCS0) 32Kbytes  */
#define   HEMC_CR_NCS0_BANKSIZE_64KB_Val      _U_(0x3)                                             /**< (HEMC_CR_NCS0) 64Kbytes  */
#define   HEMC_CR_NCS0_BANKSIZE_128KB_Val     _U_(0x4)                                             /**< (HEMC_CR_NCS0) 128Kbytes  */
#define   HEMC_CR_NCS0_BANKSIZE_256KB_Val     _U_(0x5)                                             /**< (HEMC_CR_NCS0) 256Kbytes  */
#define   HEMC_CR_NCS0_BANKSIZE_512KB_Val     _U_(0x6)                                             /**< (HEMC_CR_NCS0) 512Kbytes  */
#define   HEMC_CR_NCS0_BANKSIZE_1MB_Val       _U_(0x7)                                             /**< (HEMC_CR_NCS0) 1Mbytes  */
#define   HEMC_CR_NCS0_BANKSIZE_2MB_Val       _U_(0x8)                                             /**< (HEMC_CR_NCS0) 2Mbytes  */
#define   HEMC_CR_NCS0_BANKSIZE_NOT_USED_Val  _U_(0x1F)                                            /**< (HEMC_CR_NCS0) NOT_USED  */
#define HEMC_CR_NCS0_BANKSIZE_8KB             (HEMC_CR_NCS0_BANKSIZE_8KB_Val << HEMC_CR_NCS0_BANKSIZE_Pos) /**< (HEMC_CR_NCS0) 8Kbytes Position  */
#define HEMC_CR_NCS0_BANKSIZE_16KB            (HEMC_CR_NCS0_BANKSIZE_16KB_Val << HEMC_CR_NCS0_BANKSIZE_Pos) /**< (HEMC_CR_NCS0) 16Kbytes Position  */
#define HEMC_CR_NCS0_BANKSIZE_32KB            (HEMC_CR_NCS0_BANKSIZE_32KB_Val << HEMC_CR_NCS0_BANKSIZE_Pos) /**< (HEMC_CR_NCS0) 32Kbytes Position  */
#define HEMC_CR_NCS0_BANKSIZE_64KB            (HEMC_CR_NCS0_BANKSIZE_64KB_Val << HEMC_CR_NCS0_BANKSIZE_Pos) /**< (HEMC_CR_NCS0) 64Kbytes Position  */
#define HEMC_CR_NCS0_BANKSIZE_128KB           (HEMC_CR_NCS0_BANKSIZE_128KB_Val << HEMC_CR_NCS0_BANKSIZE_Pos) /**< (HEMC_CR_NCS0) 128Kbytes Position  */
#define HEMC_CR_NCS0_BANKSIZE_256KB           (HEMC_CR_NCS0_BANKSIZE_256KB_Val << HEMC_CR_NCS0_BANKSIZE_Pos) /**< (HEMC_CR_NCS0) 256Kbytes Position  */
#define HEMC_CR_NCS0_BANKSIZE_512KB           (HEMC_CR_NCS0_BANKSIZE_512KB_Val << HEMC_CR_NCS0_BANKSIZE_Pos) /**< (HEMC_CR_NCS0) 512Kbytes Position  */
#define HEMC_CR_NCS0_BANKSIZE_1MB             (HEMC_CR_NCS0_BANKSIZE_1MB_Val << HEMC_CR_NCS0_BANKSIZE_Pos) /**< (HEMC_CR_NCS0) 1Mbytes Position  */
#define HEMC_CR_NCS0_BANKSIZE_2MB             (HEMC_CR_NCS0_BANKSIZE_2MB_Val << HEMC_CR_NCS0_BANKSIZE_Pos) /**< (HEMC_CR_NCS0) 2Mbytes Position  */
#define HEMC_CR_NCS0_BANKSIZE_NOT_USED        (HEMC_CR_NCS0_BANKSIZE_NOT_USED_Val << HEMC_CR_NCS0_BANKSIZE_Pos) /**< (HEMC_CR_NCS0) NOT_USED Position  */
#define HEMC_CR_NCS0_TYPE_Pos                 _U_(6)                                               /**< (HEMC_CR_NCS0) type of memory used Position */
#define HEMC_CR_NCS0_TYPE_Msk                 (_U_(0x1) << HEMC_CR_NCS0_TYPE_Pos)                  /**< (HEMC_CR_NCS0) type of memory used Mask */
#define HEMC_CR_NCS0_TYPE(value)              (HEMC_CR_NCS0_TYPE_Msk & ((value) << HEMC_CR_NCS0_TYPE_Pos))
#define HEMC_CR_NCS0_ADDBASE_Pos              _U_(7)                                               /**< (HEMC_CR_NCS0) relative base address of NCS area Position */
#define HEMC_CR_NCS0_ADDBASE_Msk              (_U_(0x3FFFF) << HEMC_CR_NCS0_ADDBASE_Pos)           /**< (HEMC_CR_NCS0) relative base address of NCS area Mask */
#define HEMC_CR_NCS0_ADDBASE(value)           (HEMC_CR_NCS0_ADDBASE_Msk & ((value) << HEMC_CR_NCS0_ADDBASE_Pos))
#define HEMC_CR_NCS0_WRITE_ECC_CONF_Pos       _U_(29)                                              /**< (HEMC_CR_NCS0) ECC Configuration Protection Enable Position */
#define HEMC_CR_NCS0_WRITE_ECC_CONF_Msk       (_U_(0x1) << HEMC_CR_NCS0_WRITE_ECC_CONF_Pos)        /**< (HEMC_CR_NCS0) ECC Configuration Protection Enable Mask */
#define HEMC_CR_NCS0_WRITE_ECC_CONF(value)    (HEMC_CR_NCS0_WRITE_ECC_CONF_Msk & ((value) << HEMC_CR_NCS0_WRITE_ECC_CONF_Pos))
#define HEMC_CR_NCS0_ECC_ENABLE_Pos           _U_(30)                                              /**< (HEMC_CR_NCS0) ECC Protection Enable Position */
#define HEMC_CR_NCS0_ECC_ENABLE_Msk           (_U_(0x1) << HEMC_CR_NCS0_ECC_ENABLE_Pos)            /**< (HEMC_CR_NCS0) ECC Protection Enable Mask */
#define HEMC_CR_NCS0_ECC_ENABLE(value)        (HEMC_CR_NCS0_ECC_ENABLE_Msk & ((value) << HEMC_CR_NCS0_ECC_ENABLE_Pos))
#define HEMC_CR_NCS0_ECC12_ENABLE_Pos         _U_(31)                                              /**< (HEMC_CR_NCS0) BCH ECC enable Position */
#define HEMC_CR_NCS0_ECC12_ENABLE_Msk         (_U_(0x1) << HEMC_CR_NCS0_ECC12_ENABLE_Pos)          /**< (HEMC_CR_NCS0) BCH ECC enable Mask */
#define HEMC_CR_NCS0_ECC12_ENABLE(value)      (HEMC_CR_NCS0_ECC12_ENABLE_Msk & ((value) << HEMC_CR_NCS0_ECC12_ENABLE_Pos))
#define HEMC_CR_NCS0_Msk                      _U_(0xE1FFFFFF)                                      /**< (HEMC_CR_NCS0) Register Mask  */


/* -------- HEMC_CR_NCS1 : (HEMC Offset: 0x04) (R/W 32) HEMC Control Register NCS 1 -------- */
#define HEMC_CR_NCS1_ZERO_Pos                 _U_(0)                                               /**< (HEMC_CR_NCS1) fixed to 0 Position */
#define HEMC_CR_NCS1_ZERO_Msk                 (_U_(0x1) << HEMC_CR_NCS1_ZERO_Pos)                  /**< (HEMC_CR_NCS1) fixed to 0 Mask */
#define HEMC_CR_NCS1_ZERO(value)              (HEMC_CR_NCS1_ZERO_Msk & ((value) << HEMC_CR_NCS1_ZERO_Pos))
#define HEMC_CR_NCS1_BANKSIZE_Pos             _U_(1)                                               /**< (HEMC_CR_NCS1) Bank Size Position */
#define HEMC_CR_NCS1_BANKSIZE_Msk             (_U_(0x1F) << HEMC_CR_NCS1_BANKSIZE_Pos)             /**< (HEMC_CR_NCS1) Bank Size Mask */
#define HEMC_CR_NCS1_BANKSIZE(value)          (HEMC_CR_NCS1_BANKSIZE_Msk & ((value) << HEMC_CR_NCS1_BANKSIZE_Pos))
#define   HEMC_CR_NCS1_BANKSIZE_8KB_Val       _U_(0x0)                                             /**< (HEMC_CR_NCS1) 8Kbytes  */
#define   HEMC_CR_NCS1_BANKSIZE_16KB_Val      _U_(0x1)                                             /**< (HEMC_CR_NCS1) 16Kbytes  */
#define   HEMC_CR_NCS1_BANKSIZE_32KB_Val      _U_(0x2)                                             /**< (HEMC_CR_NCS1) 32Kbytes  */
#define   HEMC_CR_NCS1_BANKSIZE_64KB_Val      _U_(0x3)                                             /**< (HEMC_CR_NCS1) 64Kbytes  */
#define   HEMC_CR_NCS1_BANKSIZE_128KB_Val     _U_(0x4)                                             /**< (HEMC_CR_NCS1) 128Kbytes  */
#define   HEMC_CR_NCS1_BANKSIZE_256KB_Val     _U_(0x5)                                             /**< (HEMC_CR_NCS1) 256Kbytes  */
#define   HEMC_CR_NCS1_BANKSIZE_512KB_Val     _U_(0x6)                                             /**< (HEMC_CR_NCS1) 512Kbytes  */
#define   HEMC_CR_NCS1_BANKSIZE_1MB_Val       _U_(0x7)                                             /**< (HEMC_CR_NCS1) 1Mbytes  */
#define   HEMC_CR_NCS1_BANKSIZE_2MB_Val       _U_(0x8)                                             /**< (HEMC_CR_NCS1) 2Mbytes  */
#define   HEMC_CR_NCS1_BANKSIZE_NOT_USED_Val  _U_(0x1F)                                            /**< (HEMC_CR_NCS1) NOT_USED  */
#define HEMC_CR_NCS1_BANKSIZE_8KB             (HEMC_CR_NCS1_BANKSIZE_8KB_Val << HEMC_CR_NCS1_BANKSIZE_Pos) /**< (HEMC_CR_NCS1) 8Kbytes Position  */
#define HEMC_CR_NCS1_BANKSIZE_16KB            (HEMC_CR_NCS1_BANKSIZE_16KB_Val << HEMC_CR_NCS1_BANKSIZE_Pos) /**< (HEMC_CR_NCS1) 16Kbytes Position  */
#define HEMC_CR_NCS1_BANKSIZE_32KB            (HEMC_CR_NCS1_BANKSIZE_32KB_Val << HEMC_CR_NCS1_BANKSIZE_Pos) /**< (HEMC_CR_NCS1) 32Kbytes Position  */
#define HEMC_CR_NCS1_BANKSIZE_64KB            (HEMC_CR_NCS1_BANKSIZE_64KB_Val << HEMC_CR_NCS1_BANKSIZE_Pos) /**< (HEMC_CR_NCS1) 64Kbytes Position  */
#define HEMC_CR_NCS1_BANKSIZE_128KB           (HEMC_CR_NCS1_BANKSIZE_128KB_Val << HEMC_CR_NCS1_BANKSIZE_Pos) /**< (HEMC_CR_NCS1) 128Kbytes Position  */
#define HEMC_CR_NCS1_BANKSIZE_256KB           (HEMC_CR_NCS1_BANKSIZE_256KB_Val << HEMC_CR_NCS1_BANKSIZE_Pos) /**< (HEMC_CR_NCS1) 256Kbytes Position  */
#define HEMC_CR_NCS1_BANKSIZE_512KB           (HEMC_CR_NCS1_BANKSIZE_512KB_Val << HEMC_CR_NCS1_BANKSIZE_Pos) /**< (HEMC_CR_NCS1) 512Kbytes Position  */
#define HEMC_CR_NCS1_BANKSIZE_1MB             (HEMC_CR_NCS1_BANKSIZE_1MB_Val << HEMC_CR_NCS1_BANKSIZE_Pos) /**< (HEMC_CR_NCS1) 1Mbytes Position  */
#define HEMC_CR_NCS1_BANKSIZE_2MB             (HEMC_CR_NCS1_BANKSIZE_2MB_Val << HEMC_CR_NCS1_BANKSIZE_Pos) /**< (HEMC_CR_NCS1) 2Mbytes Position  */
#define HEMC_CR_NCS1_BANKSIZE_NOT_USED        (HEMC_CR_NCS1_BANKSIZE_NOT_USED_Val << HEMC_CR_NCS1_BANKSIZE_Pos) /**< (HEMC_CR_NCS1) NOT_USED Position  */
#define HEMC_CR_NCS1_TYPE_Pos                 _U_(6)                                               /**< (HEMC_CR_NCS1) type of memory used Position */
#define HEMC_CR_NCS1_TYPE_Msk                 (_U_(0x1) << HEMC_CR_NCS1_TYPE_Pos)                  /**< (HEMC_CR_NCS1) type of memory used Mask */
#define HEMC_CR_NCS1_TYPE(value)              (HEMC_CR_NCS1_TYPE_Msk & ((value) << HEMC_CR_NCS1_TYPE_Pos))
#define HEMC_CR_NCS1_ADDBASE_Pos              _U_(7)                                               /**< (HEMC_CR_NCS1) relative base address of NCS area Position */
#define HEMC_CR_NCS1_ADDBASE_Msk              (_U_(0x3FFFF) << HEMC_CR_NCS1_ADDBASE_Pos)           /**< (HEMC_CR_NCS1) relative base address of NCS area Mask */
#define HEMC_CR_NCS1_ADDBASE(value)           (HEMC_CR_NCS1_ADDBASE_Msk & ((value) << HEMC_CR_NCS1_ADDBASE_Pos))
#define HEMC_CR_NCS1_ECC_ENABLE_Pos           _U_(30)                                              /**< (HEMC_CR_NCS1) ECC Protection Enable Position */
#define HEMC_CR_NCS1_ECC_ENABLE_Msk           (_U_(0x1) << HEMC_CR_NCS1_ECC_ENABLE_Pos)            /**< (HEMC_CR_NCS1) ECC Protection Enable Mask */
#define HEMC_CR_NCS1_ECC_ENABLE(value)        (HEMC_CR_NCS1_ECC_ENABLE_Msk & ((value) << HEMC_CR_NCS1_ECC_ENABLE_Pos))
#define HEMC_CR_NCS1_ECC12_ENABLE_Pos         _U_(31)                                              /**< (HEMC_CR_NCS1) BCH ECC enable Position */
#define HEMC_CR_NCS1_ECC12_ENABLE_Msk         (_U_(0x1) << HEMC_CR_NCS1_ECC12_ENABLE_Pos)          /**< (HEMC_CR_NCS1) BCH ECC enable Mask */
#define HEMC_CR_NCS1_ECC12_ENABLE(value)      (HEMC_CR_NCS1_ECC12_ENABLE_Msk & ((value) << HEMC_CR_NCS1_ECC12_ENABLE_Pos))
#define HEMC_CR_NCS1_Msk                      _U_(0xC1FFFFFF)                                      /**< (HEMC_CR_NCS1) Register Mask  */


/* -------- HEMC_CTRL : (HEMC Offset: 0x18) (R/W 32) HEMC Polarity Control register -------- */
#define HEMC_CTRL_POL_Pos                     _U_(0)                                               /**< (HEMC_CTRL) External control buffer active polarity Position */
#define HEMC_CTRL_POL_Msk                     (_U_(0x1) << HEMC_CTRL_POL_Pos)                      /**< (HEMC_CTRL) External control buffer active polarity Mask */
#define HEMC_CTRL_POL(value)                  (HEMC_CTRL_POL_Msk & ((value) << HEMC_CTRL_POL_Pos))
#define HEMC_CTRL_Msk                         _U_(0x00000001)                                      /**< (HEMC_CTRL) Register Mask  */


/* -------- HEMC_CRP_NCS : (HEMC Offset: 0x20) (R/W 32) HEMC Control Register Protection NCS -------- */
#define HEMC_CRP_NCS_MASTERNUMBER_Pos         _U_(0)                                               /**< (HEMC_CRP_NCS) Master Number ID Position */
#define HEMC_CRP_NCS_MASTERNUMBER_Msk         (_U_(0xFFFF) << HEMC_CRP_NCS_MASTERNUMBER_Pos)       /**< (HEMC_CRP_NCS) Master Number ID Mask */
#define HEMC_CRP_NCS_MASTERNUMBER(value)      (HEMC_CRP_NCS_MASTERNUMBER_Msk & ((value) << HEMC_CRP_NCS_MASTERNUMBER_Pos))
#define HEMC_CRP_NCS_SUPERUSER_Pos            _U_(16)                                              /**< (HEMC_CRP_NCS) User or Superuser access Position */
#define HEMC_CRP_NCS_SUPERUSER_Msk            (_U_(0x1) << HEMC_CRP_NCS_SUPERUSER_Pos)             /**< (HEMC_CRP_NCS) User or Superuser access Mask */
#define HEMC_CRP_NCS_SUPERUSER(value)         (HEMC_CRP_NCS_SUPERUSER_Msk & ((value) << HEMC_CRP_NCS_SUPERUSER_Pos))
#define HEMC_CRP_NCS_WR_Pos                   _U_(17)                                              /**< (HEMC_CRP_NCS) Write Access Position */
#define HEMC_CRP_NCS_WR_Msk                   (_U_(0x1) << HEMC_CRP_NCS_WR_Pos)                    /**< (HEMC_CRP_NCS) Write Access Mask */
#define HEMC_CRP_NCS_WR(value)                (HEMC_CRP_NCS_WR_Msk & ((value) << HEMC_CRP_NCS_WR_Pos))
#define HEMC_CRP_NCS_RD_Pos                   _U_(18)                                              /**< (HEMC_CRP_NCS) Read Access Position */
#define HEMC_CRP_NCS_RD_Msk                   (_U_(0x1) << HEMC_CRP_NCS_RD_Pos)                    /**< (HEMC_CRP_NCS) Read Access Mask */
#define HEMC_CRP_NCS_RD(value)                (HEMC_CRP_NCS_RD_Msk & ((value) << HEMC_CRP_NCS_RD_Pos))
#define HEMC_CRP_NCS_SPLITBANKSIZE_Pos        _U_(19)                                              /**< (HEMC_CRP_NCS) bank size internal separation Position */
#define HEMC_CRP_NCS_SPLITBANKSIZE_Msk        (_U_(0x1F) << HEMC_CRP_NCS_SPLITBANKSIZE_Pos)        /**< (HEMC_CRP_NCS) bank size internal separation Mask */
#define HEMC_CRP_NCS_SPLITBANKSIZE(value)     (HEMC_CRP_NCS_SPLITBANKSIZE_Msk & ((value) << HEMC_CRP_NCS_SPLITBANKSIZE_Pos))
#define HEMC_CRP_NCS_PROTECTZONE_Pos          _U_(24)                                              /**< (HEMC_CRP_NCS) select area protected Position */
#define HEMC_CRP_NCS_PROTECTZONE_Msk          (_U_(0x1) << HEMC_CRP_NCS_PROTECTZONE_Pos)           /**< (HEMC_CRP_NCS) select area protected Mask */
#define HEMC_CRP_NCS_PROTECTZONE(value)       (HEMC_CRP_NCS_PROTECTZONE_Msk & ((value) << HEMC_CRP_NCS_PROTECTZONE_Pos))
#define HEMC_CRP_NCS_PROTECTON_Pos            _U_(25)                                              /**< (HEMC_CRP_NCS) protection activation Position */
#define HEMC_CRP_NCS_PROTECTON_Msk            (_U_(0x1) << HEMC_CRP_NCS_PROTECTON_Pos)             /**< (HEMC_CRP_NCS) protection activation Mask */
#define HEMC_CRP_NCS_PROTECTON(value)         (HEMC_CRP_NCS_PROTECTON_Msk & ((value) << HEMC_CRP_NCS_PROTECTON_Pos))
#define HEMC_CRP_NCS_Msk                      _U_(0x03FFFFFF)                                      /**< (HEMC_CRP_NCS) Register Mask  */


/* -------- HEMC_IER : (HEMC Offset: 0x38) ( /W 32) HEMC Interrupt Enable Register -------- */
#define HEMC_IER_OUTOFRANGE_Pos               _U_(1)                                               /**< (HEMC_IER) out of range Position */
#define HEMC_IER_OUTOFRANGE_Msk               (_U_(0x1) << HEMC_IER_OUTOFRANGE_Pos)                /**< (HEMC_IER) out of range Mask */
#define HEMC_IER_OUTOFRANGE(value)            (HEMC_IER_OUTOFRANGE_Msk & ((value) << HEMC_IER_OUTOFRANGE_Pos))
#define HEMC_IER_RDERRORACCESS_Pos            _U_(2)                                               /**< (HEMC_IER) read access error Position */
#define HEMC_IER_RDERRORACCESS_Msk            (_U_(0x1) << HEMC_IER_RDERRORACCESS_Pos)             /**< (HEMC_IER) read access error Mask */
#define HEMC_IER_RDERRORACCESS(value)         (HEMC_IER_RDERRORACCESS_Msk & ((value) << HEMC_IER_RDERRORACCESS_Pos))
#define HEMC_IER_WRERRORACCESS_Pos            _U_(3)                                               /**< (HEMC_IER) write access error Position */
#define HEMC_IER_WRERRORACCESS_Msk            (_U_(0x1) << HEMC_IER_WRERRORACCESS_Pos)             /**< (HEMC_IER) write access error Mask */
#define HEMC_IER_WRERRORACCESS(value)         (HEMC_IER_WRERRORACCESS_Msk & ((value) << HEMC_IER_WRERRORACCESS_Pos))
#define HEMC_IER_USERERRORACCESS_Pos          _U_(4)                                               /**< (HEMC_IER) user or superuser access error Position */
#define HEMC_IER_USERERRORACCESS_Msk          (_U_(0x1) << HEMC_IER_USERERRORACCESS_Pos)           /**< (HEMC_IER) user or superuser access error Mask */
#define HEMC_IER_USERERRORACCESS(value)       (HEMC_IER_USERERRORACCESS_Msk & ((value) << HEMC_IER_USERERRORACCESS_Pos))
#define HEMC_IER_Msk                          _U_(0x0000001E)                                      /**< (HEMC_IER) Register Mask  */


/* -------- HEMC_IDR : (HEMC Offset: 0x3C) ( /W 32) HEMC Interrupt Disable Register -------- */
#define HEMC_IDR_OUTOFRANGE_Pos               _U_(1)                                               /**< (HEMC_IDR) out of range Position */
#define HEMC_IDR_OUTOFRANGE_Msk               (_U_(0x1) << HEMC_IDR_OUTOFRANGE_Pos)                /**< (HEMC_IDR) out of range Mask */
#define HEMC_IDR_OUTOFRANGE(value)            (HEMC_IDR_OUTOFRANGE_Msk & ((value) << HEMC_IDR_OUTOFRANGE_Pos))
#define HEMC_IDR_RDERRORACCESS_Pos            _U_(2)                                               /**< (HEMC_IDR) read access error Position */
#define HEMC_IDR_RDERRORACCESS_Msk            (_U_(0x1) << HEMC_IDR_RDERRORACCESS_Pos)             /**< (HEMC_IDR) read access error Mask */
#define HEMC_IDR_RDERRORACCESS(value)         (HEMC_IDR_RDERRORACCESS_Msk & ((value) << HEMC_IDR_RDERRORACCESS_Pos))
#define HEMC_IDR_WRERRORACCESS_Pos            _U_(3)                                               /**< (HEMC_IDR) write access error Position */
#define HEMC_IDR_WRERRORACCESS_Msk            (_U_(0x1) << HEMC_IDR_WRERRORACCESS_Pos)             /**< (HEMC_IDR) write access error Mask */
#define HEMC_IDR_WRERRORACCESS(value)         (HEMC_IDR_WRERRORACCESS_Msk & ((value) << HEMC_IDR_WRERRORACCESS_Pos))
#define HEMC_IDR_USERERRORACCESS_Pos          _U_(4)                                               /**< (HEMC_IDR) user or superuser access error Position */
#define HEMC_IDR_USERERRORACCESS_Msk          (_U_(0x1) << HEMC_IDR_USERERRORACCESS_Pos)           /**< (HEMC_IDR) user or superuser access error Mask */
#define HEMC_IDR_USERERRORACCESS(value)       (HEMC_IDR_USERERRORACCESS_Msk & ((value) << HEMC_IDR_USERERRORACCESS_Pos))
#define HEMC_IDR_Msk                          _U_(0x0000001E)                                      /**< (HEMC_IDR) Register Mask  */


/* -------- HEMC_IMR : (HEMC Offset: 0x40) ( R/ 32) HEMC Interrupt Mask Register -------- */
#define HEMC_IMR_OUTOFRANGE_Pos               _U_(1)                                               /**< (HEMC_IMR) out of range Position */
#define HEMC_IMR_OUTOFRANGE_Msk               (_U_(0x1) << HEMC_IMR_OUTOFRANGE_Pos)                /**< (HEMC_IMR) out of range Mask */
#define HEMC_IMR_OUTOFRANGE(value)            (HEMC_IMR_OUTOFRANGE_Msk & ((value) << HEMC_IMR_OUTOFRANGE_Pos))
#define HEMC_IMR_RDERRORACCESS_Pos            _U_(2)                                               /**< (HEMC_IMR) read access error Position */
#define HEMC_IMR_RDERRORACCESS_Msk            (_U_(0x1) << HEMC_IMR_RDERRORACCESS_Pos)             /**< (HEMC_IMR) read access error Mask */
#define HEMC_IMR_RDERRORACCESS(value)         (HEMC_IMR_RDERRORACCESS_Msk & ((value) << HEMC_IMR_RDERRORACCESS_Pos))
#define HEMC_IMR_WRERRORACCESS_Pos            _U_(3)                                               /**< (HEMC_IMR) write access error Position */
#define HEMC_IMR_WRERRORACCESS_Msk            (_U_(0x1) << HEMC_IMR_WRERRORACCESS_Pos)             /**< (HEMC_IMR) write access error Mask */
#define HEMC_IMR_WRERRORACCESS(value)         (HEMC_IMR_WRERRORACCESS_Msk & ((value) << HEMC_IMR_WRERRORACCESS_Pos))
#define HEMC_IMR_USERERRORACCESS_Pos          _U_(4)                                               /**< (HEMC_IMR) user or superuser access error Position */
#define HEMC_IMR_USERERRORACCESS_Msk          (_U_(0x1) << HEMC_IMR_USERERRORACCESS_Pos)           /**< (HEMC_IMR) user or superuser access error Mask */
#define HEMC_IMR_USERERRORACCESS(value)       (HEMC_IMR_USERERRORACCESS_Msk & ((value) << HEMC_IMR_USERERRORACCESS_Pos))
#define HEMC_IMR_Msk                          _U_(0x0000001E)                                      /**< (HEMC_IMR) Register Mask  */


/* -------- HEMC_ISR : (HEMC Offset: 0x44) ( R/ 32) HEMC Interrupt Status Register -------- */
#define HEMC_ISR_OUTOFRANGE_Pos               _U_(1)                                               /**< (HEMC_ISR) out of range Position */
#define HEMC_ISR_OUTOFRANGE_Msk               (_U_(0x1) << HEMC_ISR_OUTOFRANGE_Pos)                /**< (HEMC_ISR) out of range Mask */
#define HEMC_ISR_OUTOFRANGE(value)            (HEMC_ISR_OUTOFRANGE_Msk & ((value) << HEMC_ISR_OUTOFRANGE_Pos))
#define HEMC_ISR_RDERRORACCESS_Pos            _U_(2)                                               /**< (HEMC_ISR) read access error Position */
#define HEMC_ISR_RDERRORACCESS_Msk            (_U_(0x1) << HEMC_ISR_RDERRORACCESS_Pos)             /**< (HEMC_ISR) read access error Mask */
#define HEMC_ISR_RDERRORACCESS(value)         (HEMC_ISR_RDERRORACCESS_Msk & ((value) << HEMC_ISR_RDERRORACCESS_Pos))
#define HEMC_ISR_WRERRORACCESS_Pos            _U_(3)                                               /**< (HEMC_ISR) Write access error Position */
#define HEMC_ISR_WRERRORACCESS_Msk            (_U_(0x1) << HEMC_ISR_WRERRORACCESS_Pos)             /**< (HEMC_ISR) Write access error Mask */
#define HEMC_ISR_WRERRORACCESS(value)         (HEMC_ISR_WRERRORACCESS_Msk & ((value) << HEMC_ISR_WRERRORACCESS_Pos))
#define HEMC_ISR_USERERRORACCESS_Pos          _U_(4)                                               /**< (HEMC_ISR) User or SuperUser Error Access Position */
#define HEMC_ISR_USERERRORACCESS_Msk          (_U_(0x1) << HEMC_ISR_USERERRORACCESS_Pos)           /**< (HEMC_ISR) User or SuperUser Error Access Mask */
#define HEMC_ISR_USERERRORACCESS(value)       (HEMC_ISR_USERERRORACCESS_Msk & ((value) << HEMC_ISR_USERERRORACCESS_Pos))
#define HEMC_ISR_Msk                          _U_(0x0000001E)                                      /**< (HEMC_ISR) Register Mask  */


/* -------- HEMC_SR : (HEMC Offset: 0x48) ( R/ 32) HEMC Status Register -------- */
#define HEMC_SR_OUTOFRANGE_Pos                _U_(1)                                               /**< (HEMC_SR) out of range Position */
#define HEMC_SR_OUTOFRANGE_Msk                (_U_(0x1) << HEMC_SR_OUTOFRANGE_Pos)                 /**< (HEMC_SR) out of range Mask */
#define HEMC_SR_OUTOFRANGE(value)             (HEMC_SR_OUTOFRANGE_Msk & ((value) << HEMC_SR_OUTOFRANGE_Pos))
#define HEMC_SR_RDERRORACCESS_Pos             _U_(2)                                               /**< (HEMC_SR) Read access error Position */
#define HEMC_SR_RDERRORACCESS_Msk             (_U_(0x1) << HEMC_SR_RDERRORACCESS_Pos)              /**< (HEMC_SR) Read access error Mask */
#define HEMC_SR_RDERRORACCESS(value)          (HEMC_SR_RDERRORACCESS_Msk & ((value) << HEMC_SR_RDERRORACCESS_Pos))
#define HEMC_SR_WRERRORACCESS_Pos             _U_(3)                                               /**< (HEMC_SR) Write access error Position */
#define HEMC_SR_WRERRORACCESS_Msk             (_U_(0x1) << HEMC_SR_WRERRORACCESS_Pos)              /**< (HEMC_SR) Write access error Mask */
#define HEMC_SR_WRERRORACCESS(value)          (HEMC_SR_WRERRORACCESS_Msk & ((value) << HEMC_SR_WRERRORACCESS_Pos))
#define HEMC_SR_USERERRORACCESS_Pos           _U_(4)                                               /**< (HEMC_SR) User or SuperUser Error Access Position */
#define HEMC_SR_USERERRORACCESS_Msk           (_U_(0x1) << HEMC_SR_USERERRORACCESS_Pos)            /**< (HEMC_SR) User or SuperUser Error Access Mask */
#define HEMC_SR_USERERRORACCESS(value)        (HEMC_SR_USERERRORACCESS_Msk & ((value) << HEMC_SR_USERERRORACCESS_Pos))
#define HEMC_SR_Msk                           _U_(0x0000001E)                                      /**< (HEMC_SR) Register Mask  */


/* -------- HEMC_HECC_CR : (HEMC Offset: 0x100) (R/W 32) HECC Control Register Channel 0 (HSMC) -------- */
#define HEMC_HECC_CR_TEST_MODE_RD_Pos         _U_(1)                                               /**< (HEMC_HECC_CR) test mode of ECC protection - read mode Position */
#define HEMC_HECC_CR_TEST_MODE_RD_Msk         (_U_(0x1) << HEMC_HECC_CR_TEST_MODE_RD_Pos)          /**< (HEMC_HECC_CR) test mode of ECC protection - read mode Mask */
#define HEMC_HECC_CR_TEST_MODE_RD(value)      (HEMC_HECC_CR_TEST_MODE_RD_Msk & ((value) << HEMC_HECC_CR_TEST_MODE_RD_Pos))
#define HEMC_HECC_CR_TEST_MODE_WR_Pos         _U_(2)                                               /**< (HEMC_HECC_CR) test mode of ECC protection - write mode Position */
#define HEMC_HECC_CR_TEST_MODE_WR_Msk         (_U_(0x1) << HEMC_HECC_CR_TEST_MODE_WR_Pos)          /**< (HEMC_HECC_CR) test mode of ECC protection - write mode Mask */
#define HEMC_HECC_CR_TEST_MODE_WR(value)      (HEMC_HECC_CR_TEST_MODE_WR_Msk & ((value) << HEMC_HECC_CR_TEST_MODE_WR_Pos))
#define HEMC_HECC_CR_RST_FIX_CPT_Pos          _U_(4)                                               /**< (HEMC_HECC_CR) reset the fixable error counter Position */
#define HEMC_HECC_CR_RST_FIX_CPT_Msk          (_U_(0x1) << HEMC_HECC_CR_RST_FIX_CPT_Pos)           /**< (HEMC_HECC_CR) reset the fixable error counter Mask */
#define HEMC_HECC_CR_RST_FIX_CPT(value)       (HEMC_HECC_CR_RST_FIX_CPT_Msk & ((value) << HEMC_HECC_CR_RST_FIX_CPT_Pos))
#define HEMC_HECC_CR_RST_NOFIX_CPT_Pos        _U_(5)                                               /**< (HEMC_HECC_CR) reset the un-fixable error counter Position */
#define HEMC_HECC_CR_RST_NOFIX_CPT_Msk        (_U_(0x1) << HEMC_HECC_CR_RST_NOFIX_CPT_Pos)         /**< (HEMC_HECC_CR) reset the un-fixable error counter Mask */
#define HEMC_HECC_CR_RST_NOFIX_CPT(value)     (HEMC_HECC_CR_RST_NOFIX_CPT_Msk & ((value) << HEMC_HECC_CR_RST_NOFIX_CPT_Pos))
#define HEMC_HECC_CR_Msk                      _U_(0x00000036)                                      /**< (HEMC_HECC_CR) Register Mask  */


/* -------- HEMC_HECC_TESTCB : (HEMC Offset: 0x140) (R/W 32) HECC Test mode Register Channel 0 (HSMC) -------- */
#define HEMC_HECC_TESTCB_TCB1_Pos             _U_(0)                                               /**< (HEMC_HECC_TESTCB) test check bit (16 bit) Position */
#define HEMC_HECC_TESTCB_TCB1_Msk             (_U_(0xFFFF) << HEMC_HECC_TESTCB_TCB1_Pos)           /**< (HEMC_HECC_TESTCB) test check bit (16 bit) Mask */
#define HEMC_HECC_TESTCB_TCB1(value)          (HEMC_HECC_TESTCB_TCB1_Msk & ((value) << HEMC_HECC_TESTCB_TCB1_Pos))
#define HEMC_HECC_TESTCB_Msk                  _U_(0x0000FFFF)                                      /**< (HEMC_HECC_TESTCB) Register Mask  */


/* -------- HEMC_HECC_SR : (HEMC Offset: 0x180) ( R/ 32) HECC Status Register -------- */
#define HEMC_HECC_SR_MEM_FIX_Pos              _U_(0)                                               /**< (HEMC_HECC_SR) Fixable error status Position */
#define HEMC_HECC_SR_MEM_FIX_Msk              (_U_(0x1) << HEMC_HECC_SR_MEM_FIX_Pos)               /**< (HEMC_HECC_SR) Fixable error status Mask */
#define HEMC_HECC_SR_MEM_FIX(value)           (HEMC_HECC_SR_MEM_FIX_Msk & ((value) << HEMC_HECC_SR_MEM_FIX_Pos))
#define HEMC_HECC_SR_CPT_FIX_Pos              _U_(2)                                               /**< (HEMC_HECC_SR) 5 bits counter Position */
#define HEMC_HECC_SR_CPT_FIX_Msk              (_U_(0x1F) << HEMC_HECC_SR_CPT_FIX_Pos)              /**< (HEMC_HECC_SR) 5 bits counter Mask */
#define HEMC_HECC_SR_CPT_FIX(value)           (HEMC_HECC_SR_CPT_FIX_Msk & ((value) << HEMC_HECC_SR_CPT_FIX_Pos))
#define HEMC_HECC_SR_OVER_FIX_Pos             _U_(7)                                               /**< (HEMC_HECC_SR) counter overflow Position */
#define HEMC_HECC_SR_OVER_FIX_Msk             (_U_(0x1) << HEMC_HECC_SR_OVER_FIX_Pos)              /**< (HEMC_HECC_SR) counter overflow Mask */
#define HEMC_HECC_SR_OVER_FIX(value)          (HEMC_HECC_SR_OVER_FIX_Msk & ((value) << HEMC_HECC_SR_OVER_FIX_Pos))
#define HEMC_HECC_SR_MEM_NOFIX_Pos            _U_(8)                                               /**< (HEMC_HECC_SR) Un-fixable error status Position */
#define HEMC_HECC_SR_MEM_NOFIX_Msk            (_U_(0x1) << HEMC_HECC_SR_MEM_NOFIX_Pos)             /**< (HEMC_HECC_SR) Un-fixable error status Mask */
#define HEMC_HECC_SR_MEM_NOFIX(value)         (HEMC_HECC_SR_MEM_NOFIX_Msk & ((value) << HEMC_HECC_SR_MEM_NOFIX_Pos))
#define HEMC_HECC_SR_CPT_NOFIX_Pos            _U_(10)                                              /**< (HEMC_HECC_SR) 5 bits counter Position */
#define HEMC_HECC_SR_CPT_NOFIX_Msk            (_U_(0x1F) << HEMC_HECC_SR_CPT_NOFIX_Pos)            /**< (HEMC_HECC_SR) 5 bits counter Mask */
#define HEMC_HECC_SR_CPT_NOFIX(value)         (HEMC_HECC_SR_CPT_NOFIX_Msk & ((value) << HEMC_HECC_SR_CPT_NOFIX_Pos))
#define HEMC_HECC_SR_OVER_NOFIX_Pos           _U_(15)                                              /**< (HEMC_HECC_SR) counter overflow Position */
#define HEMC_HECC_SR_OVER_NOFIX_Msk           (_U_(0x1) << HEMC_HECC_SR_OVER_NOFIX_Pos)            /**< (HEMC_HECC_SR) counter overflow Mask */
#define HEMC_HECC_SR_OVER_NOFIX(value)        (HEMC_HECC_SR_OVER_NOFIX_Msk & ((value) << HEMC_HECC_SR_OVER_NOFIX_Pos))
#define HEMC_HECC_SR_HES_Pos                  _U_(24)                                              /**< (HEMC_HECC_SR) Hardware Error Size Position */
#define HEMC_HECC_SR_HES_Msk                  (_U_(0x7) << HEMC_HECC_SR_HES_Pos)                   /**< (HEMC_HECC_SR) Hardware Error Size Mask */
#define HEMC_HECC_SR_HES(value)               (HEMC_HECC_SR_HES_Msk & ((value) << HEMC_HECC_SR_HES_Pos))
#define HEMC_HECC_SR_TYPE_Pos                 _U_(27)                                              /**< (HEMC_HECC_SR) write or read access Position */
#define HEMC_HECC_SR_TYPE_Msk                 (_U_(0x1) << HEMC_HECC_SR_TYPE_Pos)                  /**< (HEMC_HECC_SR) write or read access Mask */
#define HEMC_HECC_SR_TYPE(value)              (HEMC_HECC_SR_TYPE_Msk & ((value) << HEMC_HECC_SR_TYPE_Pos))
#define HEMC_HECC_SR_Msk                      _U_(0x0F00FDFD)                                      /**< (HEMC_HECC_SR) Register Mask  */


/* -------- HEMC_HECC_IER : (HEMC Offset: 0x184) ( /W 32) HECC Interrupt Enable Register -------- */
#define HEMC_HECC_IER_MEM_FIX_Pos             _U_(0)                                               /**< (HEMC_HECC_IER) Fixable error Position */
#define HEMC_HECC_IER_MEM_FIX_Msk             (_U_(0x1) << HEMC_HECC_IER_MEM_FIX_Pos)              /**< (HEMC_HECC_IER) Fixable error Mask */
#define HEMC_HECC_IER_MEM_FIX(value)          (HEMC_HECC_IER_MEM_FIX_Msk & ((value) << HEMC_HECC_IER_MEM_FIX_Pos))
#define HEMC_HECC_IER_MEM_NOFIX_Pos           _U_(1)                                               /**< (HEMC_HECC_IER) Un-fixable error Position */
#define HEMC_HECC_IER_MEM_NOFIX_Msk           (_U_(0x1) << HEMC_HECC_IER_MEM_NOFIX_Pos)            /**< (HEMC_HECC_IER) Un-fixable error Mask */
#define HEMC_HECC_IER_MEM_NOFIX(value)        (HEMC_HECC_IER_MEM_NOFIX_Msk & ((value) << HEMC_HECC_IER_MEM_NOFIX_Pos))
#define HEMC_HECC_IER_Msk                     _U_(0x00000003)                                      /**< (HEMC_HECC_IER) Register Mask  */


/* -------- HEMC_HECC_IDR : (HEMC Offset: 0x188) ( /W 32) HECC Interrupt Disable Register -------- */
#define HEMC_HECC_IDR_MEM_FIX_Pos             _U_(0)                                               /**< (HEMC_HECC_IDR) fixable error Position */
#define HEMC_HECC_IDR_MEM_FIX_Msk             (_U_(0x1) << HEMC_HECC_IDR_MEM_FIX_Pos)              /**< (HEMC_HECC_IDR) fixable error Mask */
#define HEMC_HECC_IDR_MEM_FIX(value)          (HEMC_HECC_IDR_MEM_FIX_Msk & ((value) << HEMC_HECC_IDR_MEM_FIX_Pos))
#define HEMC_HECC_IDR_MEM_NOFIX_Pos           _U_(1)                                               /**< (HEMC_HECC_IDR) un-fixable error Position */
#define HEMC_HECC_IDR_MEM_NOFIX_Msk           (_U_(0x1) << HEMC_HECC_IDR_MEM_NOFIX_Pos)            /**< (HEMC_HECC_IDR) un-fixable error Mask */
#define HEMC_HECC_IDR_MEM_NOFIX(value)        (HEMC_HECC_IDR_MEM_NOFIX_Msk & ((value) << HEMC_HECC_IDR_MEM_NOFIX_Pos))
#define HEMC_HECC_IDR_Msk                     _U_(0x00000003)                                      /**< (HEMC_HECC_IDR) Register Mask  */


/* -------- HEMC_HECC_IMR : (HEMC Offset: 0x18C) ( R/ 32) HECC Interrupt Mask Register -------- */
#define HEMC_HECC_IMR_MEM_FIX_Pos             _U_(0)                                               /**< (HEMC_HECC_IMR) fixable error Position */
#define HEMC_HECC_IMR_MEM_FIX_Msk             (_U_(0x1) << HEMC_HECC_IMR_MEM_FIX_Pos)              /**< (HEMC_HECC_IMR) fixable error Mask */
#define HEMC_HECC_IMR_MEM_FIX(value)          (HEMC_HECC_IMR_MEM_FIX_Msk & ((value) << HEMC_HECC_IMR_MEM_FIX_Pos))
#define HEMC_HECC_IMR_MEM_NOFIX_Pos           _U_(1)                                               /**< (HEMC_HECC_IMR) un-fixable error Position */
#define HEMC_HECC_IMR_MEM_NOFIX_Msk           (_U_(0x1) << HEMC_HECC_IMR_MEM_NOFIX_Pos)            /**< (HEMC_HECC_IMR) un-fixable error Mask */
#define HEMC_HECC_IMR_MEM_NOFIX(value)        (HEMC_HECC_IMR_MEM_NOFIX_Msk & ((value) << HEMC_HECC_IMR_MEM_NOFIX_Pos))
#define HEMC_HECC_IMR_Msk                     _U_(0x00000003)                                      /**< (HEMC_HECC_IMR) Register Mask  */


/* -------- HEMC_HECC_FAILAR : (HEMC Offset: 0x190) ( R/ 32) HECC Fail address register -------- */
#define HEMC_HECC_FAILAR_ADDRESS_Pos          _U_(0)                                               /**< (HEMC_HECC_FAILAR) address of the error detected Position */
#define HEMC_HECC_FAILAR_ADDRESS_Msk          (_U_(0xFFFFFFFF) << HEMC_HECC_FAILAR_ADDRESS_Pos)    /**< (HEMC_HECC_FAILAR) address of the error detected Mask */
#define HEMC_HECC_FAILAR_ADDRESS(value)       (HEMC_HECC_FAILAR_ADDRESS_Msk & ((value) << HEMC_HECC_FAILAR_ADDRESS_Pos))
#define HEMC_HECC_FAILAR_Msk                  _U_(0xFFFFFFFF)                                      /**< (HEMC_HECC_FAILAR) Register Mask  */


/* -------- HEMC_HECC_FAILDR : (HEMC Offset: 0x194) ( R/ 32) HECC Fail data register -------- */
#define HEMC_HECC_FAILDR_DATA_Pos             _U_(0)                                               /**< (HEMC_HECC_FAILDR) Data error detected Position */
#define HEMC_HECC_FAILDR_DATA_Msk             (_U_(0xFFFFFFFF) << HEMC_HECC_FAILDR_DATA_Pos)       /**< (HEMC_HECC_FAILDR) Data error detected Mask */
#define HEMC_HECC_FAILDR_DATA(value)          (HEMC_HECC_FAILDR_DATA_Msk & ((value) << HEMC_HECC_FAILDR_DATA_Pos))
#define HEMC_HECC_FAILDR_Msk                  _U_(0xFFFFFFFF)                                      /**< (HEMC_HECC_FAILDR) Register Mask  */


/** \brief HEMC register offsets definitions */
#define HEMC_CR_NCS0_REG_OFST          (0x00)              /**< (HEMC_CR_NCS0) HEMC Control Register NCS 0 Offset */
#define HEMC_CR_NCS1_REG_OFST          (0x04)              /**< (HEMC_CR_NCS1) HEMC Control Register NCS 1 Offset */
#define HEMC_CTRL_REG_OFST             (0x18)              /**< (HEMC_CTRL) HEMC Polarity Control register Offset */
#define HEMC_CRP_NCS_REG_OFST          (0x20)              /**< (HEMC_CRP_NCS) HEMC Control Register Protection NCS Offset */
#define HEMC_CRP_NCS0_REG_OFST         (0x20)              /**< (HEMC_CRP_NCS0) HEMC Control Register Protection NCS Offset */
#define HEMC_CRP_NCS1_REG_OFST         (0x24)              /**< (HEMC_CRP_NCS1) HEMC Control Register Protection NCS Offset */
#define HEMC_IER_REG_OFST              (0x38)              /**< (HEMC_IER) HEMC Interrupt Enable Register Offset */
#define HEMC_IDR_REG_OFST              (0x3C)              /**< (HEMC_IDR) HEMC Interrupt Disable Register Offset */
#define HEMC_IMR_REG_OFST              (0x40)              /**< (HEMC_IMR) HEMC Interrupt Mask Register Offset */
#define HEMC_ISR_REG_OFST              (0x44)              /**< (HEMC_ISR) HEMC Interrupt Status Register Offset */
#define HEMC_SR_REG_OFST               (0x48)              /**< (HEMC_SR) HEMC Status Register Offset */
#define HEMC_HECC_CR_REG_OFST          (0x100)             /**< (HEMC_HECC_CR) HECC Control Register Channel 0 (HSMC) Offset */
#define HEMC_HECC_TESTCB_REG_OFST      (0x140)             /**< (HEMC_HECC_TESTCB) HECC Test mode Register Channel 0 (HSMC) Offset */
#define HEMC_HECC_SR_REG_OFST          (0x180)             /**< (HEMC_HECC_SR) HECC Status Register Offset */
#define HEMC_HECC_IER_REG_OFST         (0x184)             /**< (HEMC_HECC_IER) HECC Interrupt Enable Register Offset */
#define HEMC_HECC_IDR_REG_OFST         (0x188)             /**< (HEMC_HECC_IDR) HECC Interrupt Disable Register Offset */
#define HEMC_HECC_IMR_REG_OFST         (0x18C)             /**< (HEMC_HECC_IMR) HECC Interrupt Mask Register Offset */
#define HEMC_HECC_FAILAR_REG_OFST      (0x190)             /**< (HEMC_HECC_FAILAR) HECC Fail address register Offset */
#define HEMC_HECC_FAILDR_REG_OFST      (0x194)             /**< (HEMC_HECC_FAILDR) HECC Fail data register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief HEMC register API structure */
typedef struct
{
  __IO  uint32_t                       HEMC_CR_NCS0;       /**< Offset: 0x00 (R/W  32) HEMC Control Register NCS 0 */
  __IO  uint32_t                       HEMC_CR_NCS1;       /**< Offset: 0x04 (R/W  32) HEMC Control Register NCS 1 */
  __I   uint8_t                        Reserved1[0x10];
  __IO  uint32_t                       HEMC_CTRL;          /**< Offset: 0x18 (R/W  32) HEMC Polarity Control register */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       HEMC_CRP_NCS[2];    /**< Offset: 0x20 (R/W  32) HEMC Control Register Protection NCS */
  __I   uint8_t                        Reserved3[0x10];
  __O   uint32_t                       HEMC_IER;           /**< Offset: 0x38 ( /W  32) HEMC Interrupt Enable Register */
  __O   uint32_t                       HEMC_IDR;           /**< Offset: 0x3C ( /W  32) HEMC Interrupt Disable Register */
  __I   uint32_t                       HEMC_IMR;           /**< Offset: 0x40 (R/   32) HEMC Interrupt Mask Register */
  __I   uint32_t                       HEMC_ISR;           /**< Offset: 0x44 (R/   32) HEMC Interrupt Status Register */
  __I   uint32_t                       HEMC_SR;            /**< Offset: 0x48 (R/   32) HEMC Status Register */
  __I   uint8_t                        Reserved4[0xB4];
  __IO  uint32_t                       HEMC_HECC_CR;       /**< Offset: 0x100 (R/W  32) HECC Control Register Channel 0 (HSMC) */
  __I   uint8_t                        Reserved5[0x3C];
  __IO  uint32_t                       HEMC_HECC_TESTCB;   /**< Offset: 0x140 (R/W  32) HECC Test mode Register Channel 0 (HSMC) */
  __I   uint8_t                        Reserved6[0x3C];
  __I   uint32_t                       HEMC_HECC_SR;       /**< Offset: 0x180 (R/   32) HECC Status Register */
  __O   uint32_t                       HEMC_HECC_IER;      /**< Offset: 0x184 ( /W  32) HECC Interrupt Enable Register */
  __O   uint32_t                       HEMC_HECC_IDR;      /**< Offset: 0x188 ( /W  32) HECC Interrupt Disable Register */
  __I   uint32_t                       HEMC_HECC_IMR;      /**< Offset: 0x18C (R/   32) HECC Interrupt Mask Register */
  __I   uint32_t                       HEMC_HECC_FAILAR;   /**< Offset: 0x190 (R/   32) HECC Fail address register */
  __I   uint32_t                       HEMC_HECC_FAILDR;   /**< Offset: 0x194 (R/   32) HECC Fail data register */
} hemc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMRH707_HEMC_COMPONENT_H_ */
