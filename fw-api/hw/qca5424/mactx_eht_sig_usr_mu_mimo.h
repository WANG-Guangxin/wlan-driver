
/*
 * Copyright (c) 2024, Qualcomm Innovation Center, Inc. All rights reserved.
 * SPDX-License-Identifier: ISC
 */

 

 
 
 
 
 
 
 
 


#ifndef _MACTX_EHT_SIG_USR_MU_MIMO_H_
#define _MACTX_EHT_SIG_USR_MU_MIMO_H_
#if !defined(__ASSEMBLER__)
#endif

#include "eht_sig_usr_mu_mimo_info.h"
#define NUM_OF_DWORDS_MACTX_EHT_SIG_USR_MU_MIMO 2

#define NUM_OF_QWORDS_MACTX_EHT_SIG_USR_MU_MIMO 1


struct mactx_eht_sig_usr_mu_mimo {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             struct   eht_sig_usr_mu_mimo_info                                  mactx_eht_sig_usr_mu_mimo_info_details;
#else
             struct   eht_sig_usr_mu_mimo_info                                  mactx_eht_sig_usr_mu_mimo_info_details;
#endif
};


 


 

#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_STA_ID_OFFSET 0x0000000000000000
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_STA_ID_LSB 0
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_STA_ID_MSB 10
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_STA_ID_MASK 0x00000000000007ff


 

#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_STA_MCS_OFFSET 0x0000000000000000
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_STA_MCS_LSB 11
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_STA_MCS_MSB 14
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_STA_MCS_MASK 0x0000000000007800


 

#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_STA_CODING_OFFSET 0x0000000000000000
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_STA_CODING_LSB 15
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_STA_CODING_MSB 15
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_STA_CODING_MASK 0x0000000000008000


 

#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_STA_SPATIAL_CONFIG_OFFSET 0x0000000000000000
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_STA_SPATIAL_CONFIG_LSB 16
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_STA_SPATIAL_CONFIG_MSB 21
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_STA_SPATIAL_CONFIG_MASK 0x00000000003f0000


 

#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_RESERVED_0A_OFFSET 0x0000000000000000
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_RESERVED_0A_LSB 22
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_RESERVED_0A_MSB 22
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_RESERVED_0A_MASK 0x0000000000400000


 

#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_OFFSET 0x0000000000000000
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_LSB 23
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_MSB 23
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_MASK 0x0000000000800000


 

#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_SUBBAND80_CC_MASK_OFFSET 0x0000000000000000
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_SUBBAND80_CC_MASK_LSB 24
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_SUBBAND80_CC_MASK_MSB 31
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_SUBBAND80_CC_MASK_MASK 0x00000000ff000000


 

#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_USER_ORDER_SUBBAND80_0_OFFSET 0x0000000000000000
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_USER_ORDER_SUBBAND80_0_LSB 32
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_USER_ORDER_SUBBAND80_0_MSB 39
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_USER_ORDER_SUBBAND80_0_MASK 0x000000ff00000000


 

#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_USER_ORDER_SUBBAND80_1_OFFSET 0x0000000000000000
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_USER_ORDER_SUBBAND80_1_LSB 40
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_USER_ORDER_SUBBAND80_1_MSB 47
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_USER_ORDER_SUBBAND80_1_MASK 0x0000ff0000000000


 

#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_USER_ORDER_SUBBAND80_2_OFFSET 0x0000000000000000
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_USER_ORDER_SUBBAND80_2_LSB 48
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_USER_ORDER_SUBBAND80_2_MSB 55
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_USER_ORDER_SUBBAND80_2_MASK 0x00ff000000000000


 

#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_USER_ORDER_SUBBAND80_3_OFFSET 0x0000000000000000
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_USER_ORDER_SUBBAND80_3_LSB 56
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_USER_ORDER_SUBBAND80_3_MSB 63
#define MACTX_EHT_SIG_USR_MU_MIMO_MACTX_EHT_SIG_USR_MU_MIMO_INFO_DETAILS_USER_ORDER_SUBBAND80_3_MASK 0xff00000000000000



#endif    
