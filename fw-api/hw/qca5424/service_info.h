
/*
 * Copyright (c) 2024, Qualcomm Innovation Center, Inc. All rights reserved.
 * SPDX-License-Identifier: ISC
 */

 

 
 
 
 
 
 
 
 


#ifndef _SERVICE_INFO_H_
#define _SERVICE_INFO_H_
#if !defined(__ASSEMBLER__)
#endif

#define NUM_OF_DWORDS_SERVICE_INFO 1


struct service_info {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t scrambler_seed                                          :  7,  
                      reserved                                                :  1,  
                      sig_b_crc_user                                          :  8,  
                      reserved_1                                              : 16;  
#else
             uint32_t reserved_1                                              : 16,  
                      sig_b_crc_user                                          :  8,  
                      reserved                                                :  1,  
                      scrambler_seed                                          :  7;  
#endif
};


 

#define SERVICE_INFO_SCRAMBLER_SEED_OFFSET                                          0x00000000
#define SERVICE_INFO_SCRAMBLER_SEED_LSB                                             0
#define SERVICE_INFO_SCRAMBLER_SEED_MSB                                             6
#define SERVICE_INFO_SCRAMBLER_SEED_MASK                                            0x0000007f


 

#define SERVICE_INFO_RESERVED_OFFSET                                                0x00000000
#define SERVICE_INFO_RESERVED_LSB                                                   7
#define SERVICE_INFO_RESERVED_MSB                                                   7
#define SERVICE_INFO_RESERVED_MASK                                                  0x00000080


 

#define SERVICE_INFO_SIG_B_CRC_USER_OFFSET                                          0x00000000
#define SERVICE_INFO_SIG_B_CRC_USER_LSB                                             8
#define SERVICE_INFO_SIG_B_CRC_USER_MSB                                             15
#define SERVICE_INFO_SIG_B_CRC_USER_MASK                                            0x0000ff00


 

#define SERVICE_INFO_RESERVED_1_OFFSET                                              0x00000000
#define SERVICE_INFO_RESERVED_1_LSB                                                 16
#define SERVICE_INFO_RESERVED_1_MSB                                                 31
#define SERVICE_INFO_RESERVED_1_MASK                                                0xffff0000



#endif    
