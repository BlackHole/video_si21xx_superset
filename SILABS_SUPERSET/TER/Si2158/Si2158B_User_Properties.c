/*************************************************************************************************************
Copyright 2015-2019, Silicon Laboratories, Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
 *************************************************************************************************************/
/*************************************************************************************
                  Silicon Laboratories Broadcast Si2158B Layer 1 API


   API commands definitions
   FILE: Si2158B_L1_Commands.c
   Supported IC : Si2158B
   Compiled for ROM 51 firmware 4_1_build_3
   Revision: 0.1
   Tag:  ROM51_4_1_build_3_V0.1
   Date: June 23 2016
**************************************************************************************/

#include "Si2158B_L1_API.h"
/***********************************************************************************************************************
  Si2158B_storeUserProperties function
  Use:        property preparation function
              Used to fill the prop structure with user values.
  Parameter: *prop    a property structure to be filled

  Returns:    void
 ***********************************************************************************************************************/
void          Si2158B_storeUserProperties    (Si2158B_PropObj   *prop) {
#ifdef    Si2158B_ATV_AFC_RANGE_PROP
  prop->atv_afc_range.range_khz              =  1000; /* (default  1000) */
#endif /* Si2158B_ATV_AFC_RANGE_PROP */

#ifdef    Si2158B_ATV_AGC_SPEED_PROP
  prop->atv_agc_speed.if_agc_speed           = Si2158B_ATV_AGC_SPEED_PROP_IF_AGC_SPEED_AUTO ; /* (default 'AUTO') */
#endif /* Si2158B_ATV_AGC_SPEED_PROP */

#ifdef    Si2158B_ATV_AGC_SPEED_LOW_RSSI_PROP
  prop->atv_agc_speed_low_rssi.if_agc_speed  = Si2158B_ATV_AGC_SPEED_LOW_RSSI_PROP_IF_AGC_SPEED_158 ; /* (default '158') */
  prop->atv_agc_speed_low_rssi.thld          =  -128; /* (default  -128) */
#endif /* Si2158B_ATV_AGC_SPEED_LOW_RSSI_PROP */

#ifdef    Si2158B_ATV_ARTIFICIAL_SNOW_PROP
  prop->atv_artificial_snow.gain             = Si2158B_ATV_ARTIFICIAL_SNOW_PROP_GAIN_AUTO   ; /* (default 'AUTO') */
  prop->atv_artificial_snow.period           = Si2158B_ATV_ARTIFICIAL_SNOW_PROP_PERIOD_LONG ; /* (default 'LONG') */
  prop->atv_artificial_snow.offset           =     0; /* (default     0) */
#endif /* Si2158B_ATV_ARTIFICIAL_SNOW_PROP */

#ifdef    Si2158B_ATV_CONFIG_IF_PORT_PROP
  prop->atv_config_if_port.atv_out_type      = Si2158B_ATV_CONFIG_IF_PORT_PROP_ATV_OUT_TYPE_LIF_DIFF_IF1   ; /* (default 'LIF_DIFF_IF1') */
  prop->atv_config_if_port.atv_agc_source    = Si2158B_ATV_CONFIG_IF_PORT_PROP_ATV_AGC_SOURCE_INTERNAL     ; /* (default 'INTERNAL') */
#endif /* Si2158B_ATV_CONFIG_IF_PORT_PROP */

#ifdef    Si2158B_ATV_EXT_AGC_PROP
  prop->atv_ext_agc.min_10mv                 =    50; /* (default    50) */
  prop->atv_ext_agc.max_10mv                 =   200; /* (default   200) */
#endif /* Si2158B_ATV_EXT_AGC_PROP */

#ifdef    Si2158B_ATV_HSYNC_OUT_PROP
  prop->atv_hsync_out.gpio_sel               = Si2158B_ATV_HSYNC_OUT_PROP_GPIO_SEL_NONE ; /* (default 'NONE') */
  prop->atv_hsync_out.width                  =    42; /* (default    42) */
  prop->atv_hsync_out.offset                 =     0; /* (default     0) */
#endif /* Si2158B_ATV_HSYNC_OUT_PROP */

#ifdef    Si2158B_ATV_IEN_PROP
  prop->atv_ien.chlien                       = Si2158B_ATV_IEN_PROP_CHLIEN_ENABLE  ; /* (default 'ENABLE') */
  prop->atv_ien.pclien                       = Si2158B_ATV_IEN_PROP_PCLIEN_DISABLE ; /* (default 'DISABLE') */
#endif /* Si2158B_ATV_IEN_PROP */

#ifdef    Si2158B_ATV_INT_SENSE_PROP
  prop->atv_int_sense.chlnegen               = Si2158B_ATV_INT_SENSE_PROP_CHLNEGEN_DISABLE ; /* (default 'DISABLE') */
  prop->atv_int_sense.pclnegen               = Si2158B_ATV_INT_SENSE_PROP_PCLNEGEN_DISABLE ; /* (default 'DISABLE') */
  prop->atv_int_sense.chlposen               = Si2158B_ATV_INT_SENSE_PROP_CHLPOSEN_ENABLE  ; /* (default 'ENABLE') */
  prop->atv_int_sense.pclposen               = Si2158B_ATV_INT_SENSE_PROP_PCLPOSEN_ENABLE  ; /* (default 'ENABLE') */
#endif /* Si2158B_ATV_INT_SENSE_PROP */

#ifdef    Si2158B_ATV_LIF_FREQ_PROP
  prop->atv_lif_freq.offset                  =  5000; /* (default  5000) */
#endif /* Si2158B_ATV_LIF_FREQ_PROP */

#ifdef    Si2158B_ATV_LIF_OUT_PROP
  prop->atv_lif_out.offset                   =   148; /* (default   148) */
  prop->atv_lif_out.amp                      =   100; /* (default   100) */
#endif /* Si2158B_ATV_LIF_OUT_PROP */

#ifdef    Si2158B_ATV_PGA_TARGET_PROP
  prop->atv_pga_target.pga_target            =     0; /* (default     0) */
  prop->atv_pga_target.override_enable       = Si2158B_ATV_PGA_TARGET_PROP_OVERRIDE_ENABLE_DISABLE ; /* (default 'DISABLE') */
#endif /* Si2158B_ATV_PGA_TARGET_PROP */

#ifdef    Si2158B_ATV_RF_TOP_PROP
  prop->atv_rf_top.atv_rf_top                = Si2158B_ATV_RF_TOP_PROP_ATV_RF_TOP_AUTO ; /* (default 'AUTO') */
#endif /* Si2158B_ATV_RF_TOP_PROP */

#ifdef    Si2158B_ATV_RSQ_RSSI_THRESHOLD_PROP
  prop->atv_rsq_rssi_threshold.lo            =   -70; /* (default   -70) */
  prop->atv_rsq_rssi_threshold.hi            =     0; /* (default     0) */
#endif /* Si2158B_ATV_RSQ_RSSI_THRESHOLD_PROP */

#ifdef    Si2158B_ATV_VIDEO_MODE_PROP
  prop->atv_video_mode.video_sys             = Si2158B_ATV_VIDEO_MODE_PROP_VIDEO_SYS_B              ; /* (default 'B') */
  prop->atv_video_mode.color                 = Si2158B_ATV_VIDEO_MODE_PROP_COLOR_PAL_NTSC           ; /* (default 'PAL_NTSC') */
  prop->atv_video_mode.invert_spectrum       = Si2158B_ATV_VIDEO_MODE_PROP_INVERT_SPECTRUM_INVERTED ; /* (default 'INVERTED') */
#endif /* Si2158B_ATV_VIDEO_MODE_PROP */

#ifdef    Si2158B_ATV_VSNR_CAP_PROP
  prop->atv_vsnr_cap.atv_vsnr_cap            =     0; /* (default     0) */
#endif /* Si2158B_ATV_VSNR_CAP_PROP */

#ifdef    Si2158B_CRYSTAL_TRIM_PROP
  prop->crystal_trim.xo_cap                  = Si2158B_CRYSTAL_TRIM_PROP_XO_CAP_6P7PF ; /* (default '6p7pF') */
#endif /* Si2158B_CRYSTAL_TRIM_PROP */

#ifdef    Si2158B_MASTER_IEN_PROP
  prop->master_ien.tunien                    = Si2158B_MASTER_IEN_PROP_TUNIEN_OFF ; /* (default 'OFF') */
  prop->master_ien.atvien                    = Si2158B_MASTER_IEN_PROP_ATVIEN_OFF ; /* (default 'OFF') */
  prop->master_ien.dtvien                    = Si2158B_MASTER_IEN_PROP_DTVIEN_OFF ; /* (default 'OFF') */
  prop->master_ien.errien                    = Si2158B_MASTER_IEN_PROP_ERRIEN_OFF ; /* (default 'OFF') */
  prop->master_ien.ctsien                    = Si2158B_MASTER_IEN_PROP_CTSIEN_OFF ; /* (default 'OFF') */
#endif /* Si2158B_MASTER_IEN_PROP */

#ifdef    Si2158B_XOUT_PROP
  prop->xout.amp                             = Si2158B_XOUT_PROP_AMP_HIGH ; /* (default 'HIGH') */
#endif /* Si2158B_XOUT_PROP */

#ifdef    Si2158B_DTV_AGC_AUTO_FREEZE_PROP
  prop->dtv_agc_auto_freeze.thld             =   255; /* (default   255) */
  prop->dtv_agc_auto_freeze.timeout          =     1; /* (default     1) */
#endif /* Si2158B_DTV_AGC_AUTO_FREEZE_PROP */

#ifdef    Si2158B_DTV_AGC_FREEZE_INPUT_PROP
  prop->dtv_agc_freeze_input.level           = Si2158B_DTV_AGC_FREEZE_INPUT_PROP_LEVEL_LOW  ; /* (default 'LOW') */
  prop->dtv_agc_freeze_input.pin             = Si2158B_DTV_AGC_FREEZE_INPUT_PROP_PIN_NONE   ; /* (default 'NONE') */
#endif /* Si2158B_DTV_AGC_FREEZE_INPUT_PROP */

#ifdef    Si2158B_DTV_AGC_SPEED_PROP
  prop->dtv_agc_speed.if_agc_speed           = Si2158B_DTV_AGC_SPEED_PROP_IF_AGC_SPEED_AUTO ; /* (default 'AUTO') */
  prop->dtv_agc_speed.agc_decim              = Si2158B_DTV_AGC_SPEED_PROP_AGC_DECIM_OFF     ; /* (default 'OFF') */
#endif /* Si2158B_DTV_AGC_SPEED_PROP */

#ifdef    Si2158B_DTV_CONFIG_IF_PORT_PROP
  prop->dtv_config_if_port.dtv_out_type      = Si2158B_DTV_CONFIG_IF_PORT_PROP_DTV_OUT_TYPE_LIF_IF2    ; /* (default 'LIF_IF2') */
  prop->dtv_config_if_port.dtv_agc_source    = Si2158B_DTV_CONFIG_IF_PORT_PROP_DTV_AGC_SOURCE_INTERNAL ; /* (default 'INTERNAL') */
#endif /* Si2158B_DTV_CONFIG_IF_PORT_PROP */

#ifdef    Si2158B_DTV_EXT_AGC_PROP
  prop->dtv_ext_agc.min_10mv                 =    50; /* (default    50) */
  prop->dtv_ext_agc.max_10mv                 =   200; /* (default   200) */
#endif /* Si2158B_DTV_EXT_AGC_PROP */

#ifdef    Si2158B_DTV_IEN_PROP
  prop->dtv_ien.chlien                       = Si2158B_DTV_IEN_PROP_CHLIEN_ENABLE ; /* (default 'ENABLE') */
#endif /* Si2158B_DTV_IEN_PROP */

#ifdef    Si2158B_DTV_IF_AGC_SPEED_PROP
  prop->dtv_if_agc_speed.attack              = Si2158B_DTV_IF_AGC_SPEED_PROP_ATTACK_AUTO ; /* (default 'AUTO') */
  prop->dtv_if_agc_speed.decay               = Si2158B_DTV_IF_AGC_SPEED_PROP_DECAY_AUTO  ; /* (default 'AUTO') */
#endif /* Si2158B_DTV_IF_AGC_SPEED_PROP */

#ifdef    Si2158B_DTV_INITIAL_AGC_SPEED_PROP
  prop->dtv_initial_agc_speed.if_agc_speed   = Si2158B_DTV_INITIAL_AGC_SPEED_PROP_IF_AGC_SPEED_AUTO ; /* (default 'AUTO') */
  prop->dtv_initial_agc_speed.agc_decim      = Si2158B_DTV_INITIAL_AGC_SPEED_PROP_AGC_DECIM_OFF     ; /* (default 'OFF') */
#endif /* Si2158B_DTV_INITIAL_AGC_SPEED_PROP */

#ifdef    Si2158B_DTV_INITIAL_AGC_SPEED_PERIOD_PROP
  prop->dtv_initial_agc_speed_period.period  =     0; /* (default     0) */
#endif /* Si2158B_DTV_INITIAL_AGC_SPEED_PERIOD_PROP */

#ifdef    Si2158B_DTV_INTERNAL_ZIF_PROP
  prop->dtv_internal_zif.atsc                = Si2158B_DTV_INTERNAL_ZIF_PROP_ATSC_ZIF   ; /* (default 'ZIF') */
  prop->dtv_internal_zif.qam_us              = Si2158B_DTV_INTERNAL_ZIF_PROP_QAM_US_ZIF ; /* (default 'ZIF') */
  prop->dtv_internal_zif.dvbt                = Si2158B_DTV_INTERNAL_ZIF_PROP_DVBT_ZIF   ; /* (default 'ZIF') */
  prop->dtv_internal_zif.dvbc                = Si2158B_DTV_INTERNAL_ZIF_PROP_DVBC_ZIF   ; /* (default 'ZIF') */
  prop->dtv_internal_zif.isdbt               = Si2158B_DTV_INTERNAL_ZIF_PROP_ISDBT_ZIF  ; /* (default 'ZIF') */
  prop->dtv_internal_zif.isdbc               = Si2158B_DTV_INTERNAL_ZIF_PROP_ISDBC_ZIF  ; /* (default 'ZIF') */
  prop->dtv_internal_zif.dtmb                = Si2158B_DTV_INTERNAL_ZIF_PROP_DTMB_ZIF   ; /* (default 'ZIF') */
#endif /* Si2158B_DTV_INTERNAL_ZIF_PROP */

#ifdef    Si2158B_DTV_INT_SENSE_PROP
  prop->dtv_int_sense.chlnegen               = Si2158B_DTV_INT_SENSE_PROP_CHLNEGEN_DISABLE ; /* (default 'DISABLE') */
  prop->dtv_int_sense.chlposen               = Si2158B_DTV_INT_SENSE_PROP_CHLPOSEN_ENABLE  ; /* (default 'ENABLE') */
#endif /* Si2158B_DTV_INT_SENSE_PROP */

#ifdef    Si2158B_DTV_LIF_FREQ_PROP
  prop->dtv_lif_freq.offset                  =  5000; /* (default  5000) */
#endif /* Si2158B_DTV_LIF_FREQ_PROP */

#ifdef    Si2158B_DTV_LIF_OUT_PROP
  prop->dtv_lif_out.offset                   =   148; /* (default   148) */
  prop->dtv_lif_out.amp                      =    27; /* (default    27) */
#endif /* Si2158B_DTV_LIF_OUT_PROP */

#ifdef    Si2158B_DTV_MODE_PROP
  prop->dtv_mode.bw                          = Si2158B_DTV_MODE_PROP_BW_BW_8MHZ              ; /* (default 'BW_8MHZ') */
  prop->dtv_mode.modulation                  = Si2158B_DTV_MODE_PROP_MODULATION_DVBT         ; /* (default 'DVBT') */
  prop->dtv_mode.invert_spectrum             = Si2158B_DTV_MODE_PROP_INVERT_SPECTRUM_NORMAL  ; /* (default 'NORMAL') */
#endif /* Si2158B_DTV_MODE_PROP */

#ifdef    Si2158B_DTV_PGA_LIMITS_PROP
  prop->dtv_pga_limits.min                   =    -1; /* (default    -1) */
  prop->dtv_pga_limits.max                   =    -1; /* (default    -1) */
#endif /* Si2158B_DTV_PGA_LIMITS_PROP */

#ifdef    Si2158B_DTV_PGA_TARGET_PROP
  prop->dtv_pga_target.pga_target            =     0; /* (default     0) */
  prop->dtv_pga_target.override_enable       = Si2158B_DTV_PGA_TARGET_PROP_OVERRIDE_ENABLE_DISABLE ; /* (default 'DISABLE') */
#endif /* Si2158B_DTV_PGA_TARGET_PROP */

#ifdef    Si2158B_DTV_RF_AGC_SPEED_PROP
  prop->dtv_rf_agc_speed.attack              = Si2158B_DTV_RF_AGC_SPEED_PROP_ATTACK_AUTO ; /* (default 'AUTO') */
  prop->dtv_rf_agc_speed.decay               = Si2158B_DTV_RF_AGC_SPEED_PROP_DECAY_AUTO  ; /* (default 'AUTO') */
#endif /* Si2158B_DTV_RF_AGC_SPEED_PROP */

#ifdef    Si2158B_DTV_RF_TOP_PROP
  prop->dtv_rf_top.dtv_rf_top                = Si2158B_DTV_RF_TOP_PROP_DTV_RF_TOP_AUTO ; /* (default 'AUTO') */
#endif /* Si2158B_DTV_RF_TOP_PROP */

#ifdef    Si2158B_DTV_RSQ_RSSI_THRESHOLD_PROP
  prop->dtv_rsq_rssi_threshold.lo            =   -80; /* (default   -80) */
  prop->dtv_rsq_rssi_threshold.hi            =     0; /* (default     0) */
#endif /* Si2158B_DTV_RSQ_RSSI_THRESHOLD_PROP */

#ifdef    Si2158B_DTV_WB_AGC_SPEED_PROP
  prop->dtv_wb_agc_speed.attack              = Si2158B_DTV_WB_AGC_SPEED_PROP_ATTACK_AUTO ; /* (default 'AUTO') */
  prop->dtv_wb_agc_speed.decay               = Si2158B_DTV_WB_AGC_SPEED_PROP_DECAY_AUTO  ; /* (default 'AUTO') */
#endif /* Si2158B_DTV_WB_AGC_SPEED_PROP */

#ifdef    Si2158B_DTV_ZIF_DC_CANCELLER_BW_PROP
  prop->dtv_zif_dc_canceller_bw.bandwidth    = Si2158B_DTV_ZIF_DC_CANCELLER_BW_PROP_BANDWIDTH_DEFAULT ; /* (default 'DEFAULT') */
#endif /* Si2158B_DTV_ZIF_DC_CANCELLER_BW_PROP */

#ifdef    Si2158B_TUNER_BLOCKED_VCO_PROP
  prop->tuner_blocked_vco.vco_code           = 0x8000; /* (default 0x8000) */
#endif /* Si2158B_TUNER_BLOCKED_VCO_PROP */

#ifdef    Si2158B_TUNER_IEN_PROP
  prop->tuner_ien.tcien                      = Si2158B_TUNER_IEN_PROP_TCIEN_ENABLE     ; /* (default 'ENABLE') */
  prop->tuner_ien.rssilien                   = Si2158B_TUNER_IEN_PROP_RSSILIEN_DISABLE ; /* (default 'DISABLE') */
  prop->tuner_ien.rssihien                   = Si2158B_TUNER_IEN_PROP_RSSIHIEN_DISABLE ; /* (default 'DISABLE') */
#endif /* Si2158B_TUNER_IEN_PROP */

#ifdef    Si2158B_TUNER_INT_SENSE_PROP
  prop->tuner_int_sense.tcnegen              = Si2158B_TUNER_INT_SENSE_PROP_TCNEGEN_DISABLE    ; /* (default 'DISABLE') */
  prop->tuner_int_sense.rssilnegen           = Si2158B_TUNER_INT_SENSE_PROP_RSSILNEGEN_DISABLE ; /* (default 'DISABLE') */
  prop->tuner_int_sense.rssihnegen           = Si2158B_TUNER_INT_SENSE_PROP_RSSIHNEGEN_DISABLE ; /* (default 'DISABLE') */
  prop->tuner_int_sense.tcposen              = Si2158B_TUNER_INT_SENSE_PROP_TCPOSEN_ENABLE     ; /* (default 'ENABLE') */
  prop->tuner_int_sense.rssilposen           = Si2158B_TUNER_INT_SENSE_PROP_RSSILPOSEN_ENABLE  ; /* (default 'ENABLE') */
  prop->tuner_int_sense.rssihposen           = Si2158B_TUNER_INT_SENSE_PROP_RSSIHPOSEN_ENABLE  ; /* (default 'ENABLE') */
#endif /* Si2158B_TUNER_INT_SENSE_PROP */

#ifdef    Si2158B_TUNER_LO_INJECTION_PROP
  prop->tuner_lo_injection.band_1            = Si2158B_TUNER_LO_INJECTION_PROP_BAND_1_HIGH_SIDE ; /* (default 'HIGH_SIDE') */
  prop->tuner_lo_injection.band_2            = Si2158B_TUNER_LO_INJECTION_PROP_BAND_2_LOW_SIDE  ; /* (default 'LOW_SIDE') */
  prop->tuner_lo_injection.band_3            = Si2158B_TUNER_LO_INJECTION_PROP_BAND_3_LOW_SIDE  ; /* (default 'LOW_SIDE') */
#endif /* Si2158B_TUNER_LO_INJECTION_PROP */

#ifdef    Si2158B_TUNER_RETURN_LOSS_PROP
  prop->tuner_return_loss.config             = Si2158B_TUNER_RETURN_LOSS_PROP_CONFIG_127         ; /* (default '127') */
  prop->tuner_return_loss.mode               = Si2158B_TUNER_RETURN_LOSS_PROP_MODE_TERRESTRIAL   ; /* (default 'TERRESTRIAL') */
#endif /* Si2158B_TUNER_RETURN_LOSS_PROP */

}
