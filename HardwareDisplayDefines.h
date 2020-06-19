
#ifndef R8C25DEF_H
#define R8C25DEF_H
/***********************************************************************************
FILE NAME    : SFR_R825.h
DESCRIPTION : Definition of R8C/24 & R8C/25 Group SFR  Version : 1.30 (05-11-30)

Copyright   : 2006 Renesas Technology Europe Ltd.
Copyright   : 2006 Renesas Solutions Corporation.
Copyright   : 2006 Renesas Technology Corporation.
          All Rights Reserved

***********************************************************************************/
/***********************************************************************************
Revision History
DD.MM.YYYY OSO-UID Description
02.05.2006 RTE-NPS First Release
***********************************************************************************/

/********************************************************
 *  declare SFR addresses                                *
 ********************************************************/

#pragma ADDRESS pm0_addr 0004H /* Processor mode register 0 */

#pragma ADDRESS pm1_addr 0005H /* Processor mode register 1 */

#pragma ADDRESS cm0_addr 0006H /* System clock control register 0 */

#pragma ADDRESS cm1_addr 0007H /* System clock control register 1 */

#pragma ADDRESS prcr_addr 000AH /* Protect register */

#pragma ADDRESS ocd_addr 000CH /* Oscillation stop detect register */

#pragma ADDRESS wdtr_addr 000DH /* Watchdog timer reset register */

#pragma ADDRESS wdts_addr 000EH /* Watchdog timer start register */

#pragma ADDRESS wdc_addr 000FH /* Watchdog timer control register */

#pragma ADDRESS rmad0_addr 0010H /* Address match interrupt register0 */

#pragma ADDRESS aier_addr 0013H /* Address match interrupt enable register */

#pragma ADDRESS rmad1_addr 0014H /* Address match interrupt register1 */

#pragma ADDRESS cspr_addr 001CH /* Count source protect mode register */

#pragma ADDRESS                                                                \
    fra0_addr 0023H /* High-speed on-chip oscillator contorl register 0 */

#pragma ADDRESS                                                                \
    fra1_addr 0024H /* High-speed on-chip oscillator contorl register 1 */

#pragma ADDRESS                                                                \
    fra2_addr 0025H /* High-speed on-chip oscillator contorl register 2 */

#pragma ADDRESS cpsrf_addr 0028H /* Clock prescaler reset flag */

#pragma ADDRESS vca1_addr 0031H /* Voltage detection register 1 */

#pragma ADDRESS vca2_addr 0032H /* Voltage detection register 2 */

#pragma ADDRESS vw1c_addr 0036H /* Voltage monitor 1 circuit control register  \
                                 */

#pragma ADDRESS vw2c_addr 0037H /* Voltage monitor 2 circuit control register  \
                                 */

#pragma ADDRESS vw0c_addr 0038H /* Voltage monitor 0 circuit control register  \
                                 */

#pragma ADDRESS trd0ic_addr 0048H /* Timer RD0 interrupt control register */

#pragma ADDRESS trd1ic_addr 0049H /* Timer RD1 interrupt control register */

#pragma ADDRESS treic_addr 004AH /* Timer RE interrupt control register */

#pragma ADDRESS kupic_addr 004DH /* Key input interrupt control register */

#pragma ADDRESS adic_addr 004EH /* A-D conversion interrupt control register   \
                                 */

#pragma ADDRESS ssuaic_addr 004FH /* SSU interrupt control register */

#pragma ADDRESS iic2aic_addr 004FH /* IIC interrupt control register */

#pragma ADDRESS s0tic_addr 0051H /* UART0 transmit interrupt control register  \
                                  */

#pragma ADDRESS s0ric_addr 0052H /* UART0 receive interrupt control register   \
                                  */

#pragma ADDRESS s1tic_addr 0053H /* UART1 transmit interrupt control register  \
                                  */

#pragma ADDRESS s1ric_addr 0054H /* UART1 receive interrupt control register   \
                                  */

#pragma ADDRESS int2ic_addr 0055H /* INT2 interrupt control register */

#pragma ADDRESS traic_addr 0056H /* Timer RA interrupt control register */

#pragma ADDRESS trbic_addr 0058H /* Timer RB interrupt control register */

#pragma ADDRESS int1ic_addr 0059H /* INT1 interrupt control register */

#pragma ADDRESS int3ic_addr 005AH /* INT3 interrupt control register */

#pragma ADDRESS int0ic_addr 005DH /* INT0 interrupt control register */

#pragma ADDRESS u0mr_addr 00A0H /* UART0 transmit/receive mode register */

#pragma ADDRESS u0brg_addr 00A1H /* UART0 bit rate register */

#pragma ADDRESS u0tb_addr 00A2H /* UART0 transmit buffer register */

#pragma ADDRESS u0c0_addr 00A4H /* UART0 transmit/receive control register 0   \
                                 */

#pragma ADDRESS u0c1_addr 00A5H /* UART0 transmit/receive control register 1   \
                                 */

#pragma ADDRESS u0rb_addr 00A6H /* UART0 receive buffer register */

#pragma ADDRESS u1mr_addr 00A8H /* UART1 transmit/receive mode register */

#pragma ADDRESS u1brg_addr 00A9H /* UART1 bit rate register */

#pragma ADDRESS u1tb_addr 00AAH /* UART1 transmit buffer register */

#pragma ADDRESS u1c0_addr 00ACH /* UART1 transmit/receive control register 0   \
                                 */

#pragma ADDRESS u1c1_addr 00ADH /* UART1 transmit/receive control register 1   \
                                 */

#pragma ADDRESS u1rb_addr 00AEH /* UART1 receive buffer register */

#pragma ADDRESS sscrh_addr 00B8H /* SS control register H */

#pragma ADDRESS iccr1_addr 00B8H /* IIC bus control register 1 */

#pragma ADDRESS sscrl_addr 00B9H /* SS control register L */

#pragma ADDRESS iccr2_addr 00B9H /* IIC bus control register 2 */

#pragma ADDRESS ssmr_addr 00BAH /* SS mode register */

#pragma ADDRESS icmr_addr 00BAH /* IIC bus mode register */

#pragma ADDRESS sser_addr 00BBH /* SS enable register */

#pragma ADDRESS icier_addr 00BBH /* IIC bus interrupt enable register */

#pragma ADDRESS sssr_addr 00BCH /* SS status register */

#pragma ADDRESS icsr_addr 00BCH /* IIC bus status register */

#pragma ADDRESS ssmr2_addr 00BDH /* SS mode register 2 */

#pragma ADDRESS sar_addr 00BDH /* Slave address register */

#pragma ADDRESS sstdr_addr 00BEH /* SS transmit data register */

#pragma ADDRESS icdrt_addr 00BEH /* IIC bus transmit data register */

#pragma ADDRESS ssrdr_addr 00BFH /* SS receive data register */

#pragma ADDRESS icdrr_addr 00BFH /* IIC bus receive data register */

#pragma ADDRESS ad_addr 00C0H /* A-D register */

#pragma ADDRESS adcon2_addr 00D4H /* A-D control register 2 */

#pragma ADDRESS adcon0_addr 00D6H /* A-D control register 0 */

#pragma ADDRESS adcon1_addr 00D7H /* A-D control register 1 */

#pragma ADDRESS p0_addr 00E0H /* Port P0 register */

#pragma ADDRESS p1_addr 00E1H /* Port P1 register */

#pragma ADDRESS pd0_addr 00E2H /* Port P0 direction register */

#pragma ADDRESS pd1_addr 00E3H /* Port P1 direction register */

#pragma ADDRESS p2_addr 00E4H /* Port P2 register */

#pragma ADDRESS p3_addr 00E5H /* Port P3 register */

#pragma ADDRESS pd2_addr 00E6H /* Port P2 direction register */

#pragma ADDRESS pd3_addr 00E7H /* Port P3 direction register */

#pragma ADDRESS p4_addr 00E8H /* Port P4 register */

#pragma ADDRESS pd4_addr 00EAH /* Port P4 direction register */

#pragma ADDRESS p6_addr 00ECH /* Port P6 register */

#pragma ADDRESS pd6_addr 00EEH /* Port P6 direction register */

#pragma ADDRESS p2drr_addr 00F4H /* Port P2 drive capacity control register */

#pragma ADDRESS u1sr_addr 00F5H /* UART1 function select register */

#pragma ADDRESS pmr_addr 00F8H /* Port mode register */

#pragma ADDRESS inten_addr 00F9H /* External interrupt enable register */

#pragma ADDRESS intf_addr 00FAH /* External interrupt filter select register   \
                                 */

#pragma ADDRESS kien_addr 00FBH /* Key input enable register */

#pragma ADDRESS pur0_addr 00FCH /* Pull-up control register0 */

#pragma ADDRESS pur1_addr 00FDH /* Pull-up control register1 */

#pragma ADDRESS tracr_addr 0100H /* Timer RA control register */

#pragma ADDRESS traioc_addr 0101H /* Timer RA I/O control register */

#pragma ADDRESS tramr_addr 0102H /* Timer RA mode register */

#pragma ADDRESS trapre_addr 0103H /* Timer RA prescaler register */

#pragma ADDRESS tra_addr 0104H /* Timer RA register */

#pragma ADDRESS lincr_addr 0106H /* LIN control register */

#pragma ADDRESS linst_addr 0107H /* LIN status register */

#pragma ADDRESS trbcr_addr 0108H /* Timer RB control register */

#pragma ADDRESS trbocr_addr 0109H /* Timer RB one-shot control register */

#pragma ADDRESS trbioc_addr 010AH /* Timer RB I/O control register */

#pragma ADDRESS trbmr_addr 010BH /* Timer RB mode register */

#pragma ADDRESS trbpre_addr 010CH /* Timer RB prescaler register */

#pragma ADDRESS trbsc_addr 010DH /* Timer RB secondary register */

#pragma ADDRESS trbpr_addr 010EH /* Timer RB primary register */

#pragma ADDRESS tresec_addr 0118H /* Timer RE seconds data register / Timer RE \
                                     counter data register */

#pragma ADDRESS tremin_addr 0119H /* Timer RE minutes data register / Timer RE \
                                     compare data register */

#pragma ADDRESS trehr_addr 011AH /* Timer RE hours data register */

#pragma ADDRESS trewk_addr 011BH /* Timer RE days of week data register */

#pragma ADDRESS trecr1_addr 011CH /* Timer RE control register1 */

#pragma ADDRESS trecr2_addr 011DH /* Timer RE control register2 */

#pragma ADDRESS trecsr_addr 011EH /* Timer RE count source select register */

#pragma ADDRESS trdstr_addr 0137H /* Timer RD start register */

#pragma ADDRESS trdmr_addr 0138H /* Timer RD mode register */

#pragma ADDRESS trdpmr_addr 0139H /* Timer RD PWM mode register */

#pragma ADDRESS trdfcr_addr 013AH /* Timer RD function control register */

#pragma ADDRESS                                                                \
    trdoer1_addr 013BH /* Timer RD output master enable register 1 */

#pragma ADDRESS                                                                \
    trdoer2_addr 013CH /* Timer RD output master enable register 2 */

#pragma ADDRESS trdocr_addr 013DH /* Timer RD output control register */

#pragma ADDRESS trddf0_addr 013EH /* Timer RD digital filter function          \
                                     selection register 0 */

#pragma ADDRESS trddf1_addr 013FH /* Timer RD digital filter function          \
                                     selection register 1 */

#pragma ADDRESS trdcr0_addr 0140H /* Timer RD control register 0 */

#pragma ADDRESS trdiora0_addr 0141H /* Timer RD I/O contorol register A0 */

#pragma ADDRESS trdiorc0_addr 0142H /* Timer RD I/O contorol register C0 */

#pragma ADDRESS trdsr0_addr 0143H /* Timer RD status register 0 */

#pragma ADDRESS trdier0_addr 0144H /* Timer RD interrupt enable register 0 */

#pragma ADDRESS trdpocr0_addr 0145H /* Timer RD PWM mode output level control  \
                                       register 0 */

#pragma ADDRESS trd0_addr 0146H /* Timer RD counter 0 */

#pragma ADDRESS trdgra0_addr 0148H /* Timer RD general register A0 */

#pragma ADDRESS trdgrb0_addr 014AH /* Timer RD general register B0 */

#pragma ADDRESS trdgrc0_addr 014CH /* Timer RD general register C0 */

#pragma ADDRESS trdgrd0_addr 014EH /* Timer RD general register D0 */

#pragma ADDRESS trdcr1_addr 0150H /* Timer RD control register 1 */

#pragma ADDRESS trdiora1_addr 0151H /* Timer RD I/O contorol register A1 */

#pragma ADDRESS trdiorc1_addr 0152H /* Timer RD I/O contorol register C1 */

#pragma ADDRESS trdsr1_addr 0153H /* Timer RD status register 1 */

#pragma ADDRESS trdier1_addr 0154H /* Timer RD interrupt enable register 1 */

#pragma ADDRESS trdpocr1_addr 0155H /* Timer RD PWM mode output level control  \
                                       register 1 */

#pragma ADDRESS trd1_addr 0156H /* Timer RD counter 1 */

#pragma ADDRESS trdgra1_addr 0158H /* Timer RD general register A1 */

#pragma ADDRESS trdgrb1_addr 015AH /* Timer RD general register B1 */

#pragma ADDRESS trdgrc1_addr 015CH /* Timer RD general register C1 */

#pragma ADDRESS trdgrd1_addr 015EH /* Timer RD general register D1 */

#pragma ADDRESS fmr4_addr 01B3H /* Flash memory control register 4 */

#pragma ADDRESS fmr1_addr 01B5H /* Flash memory control register 1 */

#pragma ADDRESS fmr0_addr 01B7H /* Flash memory control register 0 */

/********************************************************
 *  declare SFR bit                                      *
 ********************************************************/
struct bit_def {
    char b0 : 1;
    char b1 : 1;
    char b2 : 1;
    char b3 : 1;
    char b4 : 1;
    char b5 : 1;
    char b6 : 1;
    char b7 : 1;
};
union byte_def {
    struct bit_def bit;
    char byte;
};

/*------------------------------------------------------
  Processor mode register0
------------------------------------------------------*/
union byte_def pm0_addr;
#define pm0 pm0_addr.byte

#define pm03 pm0_addr.bit.b3 /* Software reset bit */

/*------------------------------------------------------
  Processor mode register1
------------------------------------------------------*/
union byte_def pm1_addr;
#define pm1 pm1_addr.byte

#define pm12 pm1_addr.bit.b2 /* WDT interrupt/reset switch bit */

/*------------------------------------------------------
  System clock control register0
------------------------------------------------------*/
union byte_def cm0_addr;
#define cm0 cm0_addr.byte

#define cm02 cm0_addr.bit.b2 /* WAIT peripheral function clock stop bit */
#define cm04 cm0_addr.bit.b4 /* Port XC Switch bit */
#define cm05 cm0_addr.bit.b5 /* Xin clock (Xin-Xout) stop bit */
#define cm06 cm0_addr.bit.b6 /* System clock division select bit0 */
#define cm07 cm0_addr.bit.b7 /* CPU Clock Select bit */

/*------------------------------------------------------
  System clock control register1
------------------------------------------------------*/
union byte_def cm1_addr;
#define cm1 cm1_addr.byte

#define cm10 cm1_addr.bit.b0 /* All clock stop control bit */
#define cm12 cm1_addr.bit.b2 /* XCIN-XCOUT internal resistor select bit */
#define cm13 cm1_addr.bit.b3 /* Port Xin-Xout switch bit */
#define cm14 cm1_addr.bit.b4 /* Low-speed on-chip oscillation stop bit */
#define cm15 cm1_addr.bit.b5 /* Xin-Xout drive capacity select bit */
#define cm16 cm1_addr.bit.b6 /* System clock division select bit1 */
#define cm17 cm1_addr.bit.b7 /* System clock division select bit1 */

/*------------------------------------------------------
  Address match interrupt enable register
------------------------------------------------------*/
union byte_def aier_addr;
#define aier aier_addr.byte

#define aier0 aier_addr.bit.b0 /* Address match interrupt 0 enable bit */
#define aier1 aier_addr.bit.b1 /* Address match interrupt 1 enable bit */

/*------------------------------------------------------
  Protect register
------------------------------------------------------*/
union byte_def prcr_addr;
#define prcr prcr_addr.byte

#define prc0 prcr_addr.bit.b0 /* Protect bit0 */
#define prc1 prcr_addr.bit.b1 /* Protect bit1 */
#define prc2 prcr_addr.bit.b2 /* Protect bit2 */
#define prc3 prcr_addr.bit.b3 /* Protect bit3 */

/*------------------------------------------------------
  Oscillation stop detection register
------------------------------------------------------*/
union byte_def ocd_addr;
#define ocd ocd_addr.byte

#define ocd0 ocd_addr.bit.b0 /* Oscillation stop detection enable bit */
#define ocd1                                                                   \
    ocd_addr.bit.b1 /* Oscillation stop detection interrupt enable bit */
#define ocd2 ocd_addr.bit.b2 /* System clock select bit */
#define ocd3 ocd_addr.bit.b3 /* Clock monitor bit */

/*------------------------------------------------------
  Watchdog timer reset register
------------------------------------------------------*/
union byte_def wdtr_addr;
#define wdtr wdtr_addr.byte

/*------------------------------------------------------
  Watchdog timer start register
------------------------------------------------------*/
union byte_def wdts_addr;
#define wdts wdts_addr.byte

/*------------------------------------------------------
  Watchdog timer control register
------------------------------------------------------*/
union byte_def wdc_addr;
#define wdc wdc_addr.byte

#define wdc7 wdc_addr.bit.b7 /* Prescaler select bit */

/*------------------------------------------------------
  Count source protection mode register
------------------------------------------------------*/
union byte_def cspr_addr;
#define cspr cspr_addr.byte
#define cspro cspr_addr.bit.b7 /* Count source protection mode select bit */

/*------------------------------------------------------
  High-speed on-chip oscillator control register 0
------------------------------------------------------*/
union byte_def fra0_addr;
#define fra0 fra0_addr.byte

#define fra00 fra0_addr.bit.b0 /* High-speed on-chip oscillator enable bit */
#define fra01 fra0_addr.bit.b1 /* High-speed on-chip oscillator select bit */

/*------------------------------------------------------
  High-speed on-chip oscillator control register 1
------------------------------------------------------*/
union byte_def fra1_addr;
#define fra1 fra1_addr.byte

/*------------------------------------------------------
  High-speed on-chip oscillator control register 2
------------------------------------------------------*/
union byte_def fra2_addr;
#define fra2 fra2_addr.byte

#define fra20                                                                  \
    fra2_addr.bit.b0 /* High-speed on-chip oscillator frequency switching bit  \
                      */
#define fra21                                                                  \
    fra2_addr.bit.b1 /* High-speed on-chip oscillator frequency switching bit  \
                      */
#define fra22                                                                  \
    fra2_addr.bit.b2 /* High-speed on-chip oscillator frequency switching bit  \
                      */

/*------------------------------------------------------
  Clock prescaler reset flag
------------------------------------------------------*/
union byte_def cpsrf_addr;
#define cpsrf cpsrf_addr.byte

#define cpsr cpsrf_addr.bit.b7 /* Clock prescaler reset flag */

/*------------------------------------------------------
  Voltage detection register 1
------------------------------------------------------*/
union byte_def vca1_addr;
#define vca1 vca1_addr.byte

#define vca13 vca1_addr.bit.b3 /* Voltage detection 2 signal monitor flag */

/*------------------------------------------------------
  Voltage detection register 2
------------------------------------------------------*/
union byte_def vca2_addr;
#define vca2 vca2_addr.byte

#define vca25 vca2_addr.bit.b5 /* Voltage detection 0 enable bit */
#define vca26 vca2_addr.bit.b6 /* Voltage detection 1 enable bit */
#define vca27 vca2_addr.bit.b7 /* Voltage detection 2 enable bit */

/*------------------------------------------------------
  Voltage monitor 1 circuit control register
------------------------------------------------------*/
union byte_def vw1c_addr;
#define vw1c vw1c_addr.byte

#define vw1c0                                                                  \
    vw1c_addr.bit.b0 /* Voltage monitor 1 interrupt / reset enable bit */
#define vw1c1                                                                  \
    vw1c_addr.bit                                                              \
        .b1 /* Voltage Monitor 1 digital filter disable mode select bit */
#define vw1c2 vw1c_addr.bit.b2 /* Voltage change detection flag */
#define vw1c3 vw1c_addr.bit.b3 /* Voltage detection 1 signal monitor flag */
#define vw1f0 vw1c_addr.bit.b4 /* Sampling clock select bit */
#define vw1f1 vw1c_addr.bit.b5 /* Sampling clock select bit */
#define vw1c6 vw1c_addr.bit.b6 /* Voltage monitor 1 circuit mode select bit */
#define vw1c7                                                                  \
    vw1c_addr.bit.b7 /* Voltage monitor 1 interrupt / reset generation         \
                        condition select bit */

/*------------------------------------------------------
  Voltage monitor 2 circuit control register
------------------------------------------------------*/
union byte_def vw2c_addr;
#define vw2c vw2c_addr.byte

#define vw2c0                                                                  \
    vw2c_addr.bit.b0 /* Voltage monitor 2 interrupt / reset enable bit */
#define vw2c1                                                                  \
    vw2c_addr.bit                                                              \
        .b1 /* Voltage monitor 2 digital filter disabled mode select bit */
#define vw2c2 vw2c_addr.bit.b2 /* Voltage change detection flag */
#define vw2c3 vw2c_addr.bit.b3 /* WDT Detection Flag */
#define vw2f0 vw2c_addr.bit.b4 /* Sampling clock select bit */
#define vw2f1 vw2c_addr.bit.b5 /* Sampling clock select bit */
#define vw2c6 vw2c_addr.bit.b6 /* Voltage monitor 2 circuit mode select bit */
#define vw2c7                                                                  \
    vw2c_addr.bit.b7 /* Voltage monitor 2 interrupt / reset generation         \
                        condition select bit */

/*------------------------------------------------------
  Voltage monitor 0 circuit control register
------------------------------------------------------*/
union byte_def vw0c_addr;
#define vw0c vw0c_addr.byte

#define vw0c0 vw0c_addr.bit.b0 /* Voltage monitor 0 reset enable bit */
#define vw0c1                                                                  \
    vw0c_addr.bit                                                              \
        .b1 /* Voltage monitor 0 digital filter disabled mode select bit */
#define vw0c2 vw0c_addr.bit.b2 /*  */
#define vw0f0 vw0c_addr.bit.b4 /* Sampling clock select bit */
#define vw0f1 vw0c_addr.bit.b5 /* Sampling clock select bit */
#define vw0c6 vw0c_addr.bit.b6 /* Voltage monitor 0 circuit mode select bit */
#define vw0c7                                                                  \
    vw0c_addr.bit                                                              \
        .b7 /* Voltage monitor 0 reset generation condition select bit */

/*------------------------------------------------------
  UART0 bit rate register
------------------------------------------------------*/
union byte_def u0brg_addr;
#define u0brg u0brg_addr.byte

/*------------------------------------------------------
  UART1 bit rate register
------------------------------------------------------*/
union byte_def u1brg_addr;
#define u1brg u1brg_addr.byte

/*------------------------------------------------------
  SS control register H
------------------------------------------------------*/
union byte_def sscrh_addr;
#define sscrh sscrh_addr.byte

#define cks0_sscrh sscrh_addr.bit.b0  /* Transfer clock rate select bit */
#define cks1_sscrh sscrh_addr.bit.b1  /* Transfer clock rate select bit */
#define cks2_sscrh sscrh_addr.bit.b2  /* Transfer clock rate select bit */
#define mss_sscrh sscrh_addr.bit.b5   /* Master/Slave device select bit */
#define rsstp_sscrh sscrh_addr.bit.b6 /* Receive single stop bit */

/*------------------------------------------------------
  SS control register L
------------------------------------------------------*/
union byte_def sscrl_addr;
#define sscrl sscrl_addr.byte

#define sres_sscrl                                                             \
    sscrl_addr.bit.b1 /* Clock synchronous serial I/O with chip select control \
                         part reset bit */
#define solp_sscrl sscrl_addr.bit.b4 /* SOL write protect bit */
#define sol_sscrl sscrl_addr.bit.b5  /* Serial data output value setting bit */

/*------------------------------------------------------
  SS mode register
------------------------------------------------------*/
union byte_def ssmr_addr;
#define ssmr ssmr_addr.byte

#define bc0_ssmr ssmr_addr.bit.b0  /* Bit counter 2 to 0*/
#define bc1_ssmr ssmr_addr.bit.b1  /* Bit counter 2 to 0*/
#define bc2_ssmr ssmr_addr.bit.b2  /* Bit counter 2 to 0*/
#define cphs_ssmr ssmr_addr.bit.b5 /* SSCK clock phase select bit */
#define cpos_ssmr ssmr_addr.bit.b6 /* SSCK clock polarity select bit */
#define mls_ssmr ssmr_addr.bit.b7  /* MSB first/ LSB first select bit */

/*------------------------------------------------------
  SS enable register
------------------------------------------------------*/
union byte_def sser_addr;
#define sser sser_addr.byte

#define ceie_sser sser_addr.bit.b0 /* Conflict error interrupt enable bit */
#define re_sser sser_addr.bit.b3   /* Receive enable bit */
#define te_sser sser_addr.bit.b4   /* Transmit enable bit */
#define rie_sser sser_addr.bit.b5  /* Receive interrupt enable bit */
#define teie_sser sser_addr.bit.b6 /* Transmit end interrupt enable bit */
#define tie_sser sser_addr.bit.b7  /* Transmit interrupt enable bit */

/*------------------------------------------------------
  SS status register
------------------------------------------------------*/
union byte_def sssr_addr;
#define sssr sssr_addr.byte

#define ce_sssr sssr_addr.bit.b0   /* Conflict error flag */
#define orer_sssr sssr_addr.bit.b2 /* Overrun error flag */
#define rdrf_sssr sssr_addr.bit.b5 /* Receive data register full */
#define tend_sssr sssr_addr.bit.b6 /* Transmit end */
#define tdre_sssr sssr_addr.bit.b7 /* Transmit data empty */

/*------------------------------------------------------
  SS mode register 2
------------------------------------------------------*/
union byte_def ssmr2_addr;
#define ssmr2 ssmr2_addr.byte

#define ssums_ssmr2                                                            \
    ssmr2_addr.bit.b0 /* Clock synchronous serial I/O with chip select mode    \
                         select bit */
#define csos_ssmr2                                                             \
    ssmr2_addr.bit.b1 /* SCS pin open drain output select bit                  \
                       */
#define soos_ssmr2                                                             \
    ssmr2_addr.bit.b2 /* SSO pin open drain output select bit                  \
                       */
#define sckos_ssmr2                                                            \
    ssmr2_addr.bit.b3                /* SSCK pin open drain output select bit */
#define css0_ssmr2 ssmr2_addr.bit.b4 /* SCS pin selsct bit */
#define css1_ssmr2 ssmr2_addr.bit.b5 /* SCS pin select bit */
#define scks_ssmr2 ssmr2_addr.bit.b6 /* SSCK pin select bit */
#define bide_ssmr2 ssmr2_addr.bit.b7 /* Bidirectional mode enable bit */

/*------------------------------------------------------
  SS transmit data register
------------------------------------------------------*/
union byte_def sstdr_addr;
#define sstdr sstdr_addr.byte

/*------------------------------------------------------
  SS receive data register
------------------------------------------------------*/
union byte_def ssrdr_addr;
#define ssrdr ssrdr_addr.byte

/*------------------------------------------------------
  IIC bus control register 1
------------------------------------------------------*/
union byte_def iccr1_addr;
#define iccr1 iccr1_addr.byte

#define cks0_iccr1 iccr1_addr.bit.b0 /* Transmit clock select bit 3 to 0 */
#define cks1_iccr1 iccr1_addr.bit.b1 /* Transmit clock select bit 3 to 0 */
#define cks2_iccr1 iccr1_addr.bit.b2 /* Transmit clock select bit 3 to 0 */
#define cks3_iccr1 iccr1_addr.bit.b3 /* Transmit clock select bit 3 to 0 */
#define trs_iccr1 iccr1_addr.bit.b4  /* Transfer/receive select bit */
#define mst_iccr1 iccr1_addr.bit.b5  /* Master/slave select bit */
#define rcvd_iccr1 iccr1_addr.bit.b6 /* Receive disable bit */
#define ice_iccr1 iccr1_addr.bit.b7  /* IIC bus interface enable bit */

/*------------------------------------------------------
  IIC bus control register 2
------------------------------------------------------*/
union byte_def iccr2_addr;
#define iccr2 iccr2_addr.byte

#define iicrst_iccr2 iccr2_addr.bit.b1 /* IIC control part reset bit */
#define sclo_iccr2 iccr2_addr.bit.b3   /* SCL monitor flag */
#define sdaop_iccr2 iccr2_addr.bit.b4  /* SDAO write protect bit */
#define sdao_iccr2 iccr2_addr.bit.b5   /* SDA output value control bit */
#define scp_iccr2                                                              \
    iccr2_addr.bit.b6 /* Start/Stop condition generation disable bit */
#define bbsy_iccr2 iccr2_addr.bit.b7 /* Bus busy bit */

/*------------------------------------------------------
  IIC bus mode register
------------------------------------------------------*/
union byte_def icmr_addr;
#define icmr icmr_addr.byte

#define bc0_icmr icmr_addr.bit.b0  /* Bit counter 2 to 0 */
#define bc1_icmr icmr_addr.bit.b1  /* Bit Counter 2 to 0 */
#define bc2_icmr icmr_addr.bit.b2  /* Bit Counter 2 to 0 */
#define bcwp_icmr icmr_addr.bit.b3 /* BC write protect bit */
#define wait_icmr icmr_addr.bit.b6 /* Wait insertion bit */
#define mls_icmr icmr_addr.bit.b7  /* MSB-First/LSB-First select */

/*------------------------------------------------------
  IIC bus interrupt enable register
------------------------------------------------------*/
union byte_def icier_addr;
#define icier icier_addr.byte

#define ackbt_icier icier_addr.bit.b0 /* Transmit acknow ledge select bit */
#define ackbr_icier icier_addr.bit.b1 /* Receive acknow ledge bit */
#define acke_icier                                                             \
    icier_addr.bit.b2 /* Acknowledge bit judgement select bit                  \
                       */
#define stie_icier                                                             \
    icier_addr.bit.b3 /* Stop condition detection interrupt enable bit */
#define nakie_icier icier_addr.bit.b4 /* NACK receive interrupt enable bit */
#define rie_icier icier_addr.bit.b5   /* Receive interrupt enable bit */
#define teie_icier icier_addr.bit.b6  /* Transmit end interrupt enable bit */
#define tie_icier icier_addr.bit.b7   /* Transmit interrupt enable bit */

/*------------------------------------------------------
  IIC bus status register
------------------------------------------------------*/
union byte_def icsr_addr;
#define icsr icsr_addr.byte

#define adz_icsr icsr_addr.bit.b0 /* General call address recognition flag */
#define aas_icsr icsr_addr.bit.b1 /* Slave address recognition flag */
#define al_icsr                                                                \
    icsr_addr.bit.b2 /* Arbitration lost flag / Overrun error flag */
#define stop_icsr icsr_addr.bit.b3  /* Stop condition detection flag */
#define nackf_icsr icsr_addr.bit.b4 /* No acknow ledge detection flag */
#define rdrf_icsr icsr_addr.bit.b5  /* Receive data register full */
#define tend_icsr icsr_addr.bit.b6  /* Transmit end */
#define tdre_icsr icsr_addr.bit.b7  /* Transmit data empty */

/*------------------------------------------------------
  Slave address register
------------------------------------------------------*/
union byte_def sar_addr;
#define sar sar_addr.byte

#define fs_sar sar_addr.bit.b0   /* Format select bit */
#define sva0_sar sar_addr.bit.b1 /* Slave address 6 to 0 */
#define sva1_sar sar_addr.bit.b2 /* Slave address 6 to 0 */
#define sva2_sar sar_addr.bit.b3 /* Slave address 6 to 0 */
#define sva3_sar sar_addr.bit.b4 /* Slave address 6 to 0 */
#define sva4_sar sar_addr.bit.b5 /* Slave address 6 to 0 */
#define sva5_sar sar_addr.bit.b6 /* Slave address 6 to 0 */
#define sva6_sar sar_addr.bit.b7 /* Slave address 6 to 0 */

/*------------------------------------------------------
  IIC bus transmit data register
------------------------------------------------------*/
union byte_def icdrt_addr;
#define icdrt icdrt_addr.byte

/*------------------------------------------------------
  IIC bus receive data register
------------------------------------------------------*/
union byte_def icdrr_addr;
#define icdrr icdrr_addr.byte

/*------------------------------------------------------
  A-D control register2
------------------------------------------------------*/
union byte_def adcon2_addr;
#define adcon2 adcon2_addr.byte

#define smp adcon2_addr.bit.b0 /* A-D conversion method select bit */

/*------------------------------------------------------
  A-D control register0
------------------------------------------------------*/
union byte_def adcon0_addr;
#define adcon0 adcon0_addr.byte

#define ch0 adcon0_addr.bit.b0     /* Analog input pin select bit */
#define ch1 adcon0_addr.bit.b1     /* Analog input pin select bit */
#define ch2 adcon0_addr.bit.b2     /* Analog input pin select bit */
#define md adcon0_addr.bit.b3      /* A-D operation mode select bit */
#define adgsel0 adcon0_addr.bit.b4 /* A-D input group select bit */
#define adcap adcon0_addr.bit.b5   /* A-D conversion automatic start bit */
#define adst adcon0_addr.bit.b6    /* A-D conversion start flag */
#define cks0 adcon0_addr.bit.b7    /* Frequency select bit0 */
#define cks0_adcon0 cks0

/*------------------------------------------------------
  A-D control register1
------------------------------------------------------*/
union byte_def adcon1_addr;
#define adcon1 adcon1_addr.byte

#define bits adcon1_addr.bit.b3 /* 8/10-bit mode select bit */
#define cks1 adcon1_addr.bit.b4 /* Frequency select bit1 */
#define cks1_adcon1 cks1
#define vcut adcon1_addr.bit.b5 /* Vref connect bit */

/*------------------------------------------------------
  Port P0 register
------------------------------------------------------*/
union byte_def p0_addr;
#define p0 p0_addr.byte

#define p0_0 p0_addr.bit.b0 /* Port P00 bit */
#define p0_1 p0_addr.bit.b1 /* Port P01 bit */
#define p0_2 p0_addr.bit.b2 /* Port P02 bit */
#define p0_3 p0_addr.bit.b3 /* Port P03 bit */
#define p0_4 p0_addr.bit.b4 /* Port P04 bit */
#define p0_5 p0_addr.bit.b5 /* Port P05 bit */
#define p0_6 p0_addr.bit.b6 /* Port P06 bit */
#define p0_7 p0_addr.bit.b7 /* Port P07 bit */

/*------------------------------------------------------
  Port P0 direction register
------------------------------------------------------*/
union byte_def pd0_addr;
#define pd0 pd0_addr.byte

#define pd0_0 pd0_addr.bit.b0 /* Port P00 direction bit */
#define pd0_1 pd0_addr.bit.b1 /* Port P01 direction bit */
#define pd0_2 pd0_addr.bit.b2 /* Port P02 direction bit */
#define pd0_3 pd0_addr.bit.b3 /* Port P03 direction bit */
#define pd0_4 pd0_addr.bit.b4 /* Port P04 direction bit */
#define pd0_5 pd0_addr.bit.b5 /* Port P05 direction bit */
#define pd0_6 pd0_addr.bit.b6 /* Port P06 direction bit */
#define pd0_7 pd0_addr.bit.b7 /* Port P07 direction bit */

/*------------------------------------------------------
  Port P1 register
------------------------------------------------------*/
union byte_def p1_addr;
#define p1 p1_addr.byte

#define p1_0 p1_addr.bit.b0 /* Port P10 bit */
#define p1_1 p1_addr.bit.b1 /* Port P11 bit */
#define p1_2 p1_addr.bit.b2 /* Port P12 bit */
#define p1_3 p1_addr.bit.b3 /* Port P13 bit */
#define p1_4 p1_addr.bit.b4 /* Port P14 bit */
#define p1_5 p1_addr.bit.b5 /* Port P15 bit */
#define p1_6 p1_addr.bit.b6 /* Port P16 bit */
#define p1_7 p1_addr.bit.b7 /* Port P17 bit */

/*------------------------------------------------------
  Port P1 direction register
------------------------------------------------------*/
union byte_def pd1_addr;
#define pd1 pd1_addr.byte

#define pd1_0 pd1_addr.bit.b0 /* Port P10 direction bit */
#define pd1_1 pd1_addr.bit.b1 /* Port P11 direction bit */
#define pd1_2 pd1_addr.bit.b2 /* Port P12 direction bit */
#define pd1_3 pd1_addr.bit.b3 /* Port P13 direction bit */
#define pd1_4 pd1_addr.bit.b4 /* Port P14 direction bit */
#define pd1_5 pd1_addr.bit.b5 /* Port P15 direction bit */
#define pd1_6 pd1_addr.bit.b6 /* Port P16 direction bit */
#define pd1_7 pd1_addr.bit.b7 /* Port P17 direction bit */

/*------------------------------------------------------
  Port P2 register
------------------------------------------------------*/
union byte_def p2_addr;
#define p2 p2_addr.byte

#define p2_0 p2_addr.bit.b0 /* Port P20 bit */
#define p2_1 p2_addr.bit.b1 /* Port P21 bit */
#define p2_2 p2_addr.bit.b2 /* Port P22 bit */
#define p2_3 p2_addr.bit.b3 /* Port P23 bit */
#define p2_4 p2_addr.bit.b4 /* Port P24 bit */
#define p2_5 p2_addr.bit.b5 /* Port P25 bit */
#define p2_6 p2_addr.bit.b6 /* Port P26 bit */
#define p2_7 p2_addr.bit.b7 /* Port P27 bit */

/*------------------------------------------------------
  Port P2 direction register
------------------------------------------------------*/
union byte_def pd2_addr;
#define pd2 pd2_addr.byte

#define pd2_0 pd2_addr.bit.b0 /* Port P20 direction bit */
#define pd2_1 pd2_addr.bit.b1 /* Port P21 direction bit */
#define pd2_2 pd2_addr.bit.b2 /* Port P22 direction bit */
#define pd2_3 pd2_addr.bit.b3 /* Port P23 direction bit */
#define pd2_4 pd2_addr.bit.b4 /* Port P24 direction bit */
#define pd2_5 pd2_addr.bit.b5 /* Port P25 direction bit */
#define pd2_6 pd2_addr.bit.b6 /* Port P26 direction bit */
#define pd2_7 pd2_addr.bit.b7 /* Port P27 direction bit */

/*------------------------------------------------------
  Port P3 register
------------------------------------------------------*/
union byte_def p3_addr;
#define p3 p3_addr.byte

#define p3_0 p3_addr.bit.b0 /* Port P30 bit */
#define p3_1 p3_addr.bit.b1 /* Port P31 bit */
#define p3_3 p3_addr.bit.b3 /* Port P33 bit */
#define p3_4 p3_addr.bit.b4 /* Port P34 bit */
#define p3_5 p3_addr.bit.b5 /* Port P35 bit */
#define p3_7 p3_addr.bit.b7 /* Port P37 bit */

/*------------------------------------------------------
  Port P3 direction register
------------------------------------------------------*/
union byte_def pd3_addr;
#define pd3 pd3_addr.byte

#define pd3_0 pd3_addr.bit.b0 /* Port P30 direction bit */
#define pd3_1 pd3_addr.bit.b1 /* Port P31 direction bit */
#define pd3_3 pd3_addr.bit.b3 /* Port P33 direction bit */
#define pd3_4 pd3_addr.bit.b4 /* Port P34 direction bit */
#define pd3_5 pd3_addr.bit.b5 /* Port P35 direction bit */
#define pd3_7 pd3_addr.bit.b7 /* Port P37 direction bit */

/*------------------------------------------------------
  Port P4 register
------------------------------------------------------*/
union byte_def p4_addr;
#define p4 p4_addr.byte

#define p4_2 p4_addr.bit.b2 /* Port P42 bit */
#define p4_3 p4_addr.bit.b3 /* Port P43 bit */
#define p4_4 p4_addr.bit.b4 /* Port P44 bit */
#define p4_5 p4_addr.bit.b5 /* Port P45 bit */
#define p4_6 p4_addr.bit.b6 /* Port P46 bit */
#define p4_7 p4_addr.bit.b7 /* Port P47 bit */

/*------------------------------------------------------
  Port P4 direction register
------------------------------------------------------*/
union byte_def pd4_addr;
#define pd4 pd4_addr.byte

#define pd4_3 pd4_addr.bit.b3 /* Port P43 direction bit */
#define pd4_4 pd4_addr.bit.b4 /* Port P44 direction bit */
#define pd4_5 pd4_addr.bit.b5 /* Port P45 direction bit */

/*------------------------------------------------------
  Port P6 register
------------------------------------------------------*/
union byte_def p6_addr;
#define p6 p6_addr.byte

#define p6_0 p6_addr.bit.b0 /* Port P60 bit */
#define p6_1 p6_addr.bit.b1 /* Port P61 bit */
#define p6_2 p6_addr.bit.b2 /* Port P62 bit */
#define p6_3 p6_addr.bit.b3 /* Port P63 bit */
#define p6_4 p6_addr.bit.b4 /* Port P64 bit */
#define p6_5 p6_addr.bit.b5 /* Port P65 bit */
#define p6_6 p6_addr.bit.b6 /* Port P66 bit */
#define p6_7 p6_addr.bit.b7 /* Port P67 bit */

/*------------------------------------------------------
  Port P6 direction register
------------------------------------------------------*/
union byte_def pd6_addr;
#define pd6 pd6_addr.byte

#define pd6_0 pd6_addr.bit.b0 /* Port P60 direction bit */
#define pd6_1 pd6_addr.bit.b1 /* Port P61 direction bit */
#define pd6_2 pd6_addr.bit.b2 /* Port P62 direction bit */
#define pd6_3 pd6_addr.bit.b3 /* Port P63 direction bit */
#define pd6_4 pd6_addr.bit.b4 /* Port P64 direction bit */
#define pd6_5 pd6_addr.bit.b5 /* Port P65 direction bit */
#define pd6_6 pd6_addr.bit.b6 /* Port P66 direction bit */
#define pd6_7 pd6_addr.bit.b7 /* Port P67 direction bit */

/*------------------------------------------------------
  Port P2 drive capacity control register
------------------------------------------------------*/
union byte_def p2drr_addr;
#define p2drr p2drr_addr.byte

#define p2drr0 p2drr_addr.bit.b0 /* P20 drive capacity */
#define p2drr1 p2drr_addr.bit.b1 /* P21 drive capacity */
#define p2drr2 p2drr_addr.bit.b2 /* P22 drive capacity */
#define p2drr3 p2drr_addr.bit.b3 /* P23 drive capacity */
#define p2drr4 p2drr_addr.bit.b4 /* P24 drive capacity */
#define p2drr5 p2drr_addr.bit.b5 /* P25 drive capacity */
#define p2drr6 p2drr_addr.bit.b6 /* P26 drive capacity */
#define p2drr7 p2drr_addr.bit.b7 /* P27 drive capacity */

/*------------------------------------------------------
  UART1 function select register
------------------------------------------------------*/
union byte_def u1sr_addr;
#define u1sr u1sr_addr.byte

/*------------------------------------------------------
  Port mode register
------------------------------------------------------*/
union byte_def pmr_addr;
#define pmr pmr_addr.byte

#define u1pinsel pmr_addr.bit.b4 /* Port CLK1/TXD1/RXD1 switch bit */
#define iicsel pmr_addr.bit.b7   /* SSU/IIC bus switch bit */

/*------------------------------------------------------
  External input enable register
------------------------------------------------------*/
union byte_def inten_addr;
#define inten inten_addr.byte

#define int0en inten_addr.bit.b0 /* INT0 input enable bit */
#define int0pl inten_addr.bit.b1 /* INT0 input polarity select bit */
#define int1en inten_addr.bit.b2 /* INT1 input enable bit */
#define int1pl inten_addr.bit.b3 /* INT1 input polarity select bit */
#define int2en inten_addr.bit.b4 /* INT2 input enable bit */
#define int2pl inten_addr.bit.b5 /* INT2 input polarity select bit */
#define int3en inten_addr.bit.b6 /* INT3 input enable bit */
#define int3pl inten_addr.bit.b7 /* INT3 input polarity select bit */

/*------------------------------------------------------
  INT0 input filter select register
------------------------------------------------------*/
union byte_def intf_addr;
#define intf intf_addr.byte

#define int0f0 intf_addr.bit.b0 /* INT0 input filter select bit */
#define int0f1 intf_addr.bit.b1 /* INT0 input filter select bit */
#define int1f0 intf_addr.bit.b2 /* INT1 input filter select bit */
#define int1f1 intf_addr.bit.b3 /* INT1 input filter select bit */
#define int2f0 intf_addr.bit.b4 /* INT2 input filter select bit */
#define int2f1 intf_addr.bit.b5 /* INT2 input filter select bit */
#define int3f0 intf_addr.bit.b6 /* INT3 input filter select bit */
#define int3f1 intf_addr.bit.b7 /* INT3 input filter select bit */

/*------------------------------------------------------
  Key input enable register
------------------------------------------------------*/
union byte_def kien_addr;
#define kien kien_addr.byte

#define ki0en kien_addr.bit.b0 /* KI0 input enable bit */
#define ki0pl kien_addr.bit.b1 /* KI0 input polarity select bit */
#define ki1en kien_addr.bit.b2 /* KI1 input enable bit */
#define ki1pl kien_addr.bit.b3 /* KI1 input polarity select bit */
#define ki2en kien_addr.bit.b4 /* KI2 input enable bit */
#define ki2pl kien_addr.bit.b5 /* KI2 input polarity select bit */
#define ki3en kien_addr.bit.b6 /* KI3 input enable bit */
#define ki3pl kien_addr.bit.b7 /* KI3 input polarity select bit */

/*------------------------------------------------------
  Pull-up control register0
------------------------------------------------------*/
union byte_def pur0_addr;
#define pur0 pur0_addr.byte

#define pu00 pur0_addr.bit.b0 /* P00 to P03 pull-up */
#define pu01 pur0_addr.bit.b1 /* P04 to P07 pull-up */
#define pu02 pur0_addr.bit.b2 /* P10 to P13 pull-up */
#define pu03 pur0_addr.bit.b3 /* P14 to P17 pull-up */
#define pu04 pur0_addr.bit.b4 /* P20 to P23 pull-up */
#define pu05 pur0_addr.bit.b5 /* P24 to P27 pull-up */
#define pu06 pur0_addr.bit.b6 /* P30, P31, P33 pull-up */
#define pu07 pur0_addr.bit.b7 /* P34, P35, P37 pull-up */

/*------------------------------------------------------
  Pull-up control register1
------------------------------------------------------*/
union byte_def pur1_addr;
#define pur1 pur1_addr.byte

#define pu10 pur1_addr.bit.b0 /* P43 pull-up */
#define pu11 pur1_addr.bit.b1 /* P44, P45 pull-up */
#define pu14 pur1_addr.bit.b4 /* P60 to P63 pull-up */
#define pu15 pur1_addr.bit.b5 /* P64 to P67 pull-up */

/*------------------------------------------------------
  Timer RA control register
------------------------------------------------------*/
union byte_def tracr_addr;
#define tracr tracr_addr.byte

#define tstart_tracr tracr_addr.bit.b0 /* Timer RA count start bit */
#define tcstf_tracr tracr_addr.bit.b1  /* Timer RA count status flag */
#define tstop_tracr tracr_addr.bit.b2  /* Timer RA count forcible stop bit */
#define tedgf_tracr tracr_addr.bit.b4  /* Active edge judgment flag */
#define tundf_tracr tracr_addr.bit.b5  /* Timer RA underflow flag */

/*------------------------------------------------------
  Timer RA I/O control register
------------------------------------------------------*/
union byte_def traioc_addr;
#define traioc traioc_addr.byte

#define tedgsel_traioc traioc_addr.bit.b0 /* TRAIO polarity switch bit */
#define topcr_traioc traioc_addr.bit.b1   /* TRAIO output control bit */
#define toena_traioc traioc_addr.bit.b2   /* TRAO output enable bit */
#define tiosel_traioc traioc_addr.bit.b3  /* INT1/TRAIO select bit */
#define tipf0_traioc traioc_addr.bit.b4   /* TRAIO input filter select bit */
#define tipf1_traioc traioc_addr.bit.b5   /* TRAIO input filter select bit */

/*------------------------------------------------------
  Timer RA mode register
------------------------------------------------------*/
union byte_def tramr_addr;
#define tramr tramr_addr.byte

#define tmod0_tramr tramr_addr.bit.b0  /* Timer RA operation mode select bit */
#define tmod1_tramr tramr_addr.bit.b1  /* Timer RA operation mode select bit */
#define tmod2_tramr tramr_addr.bit.b2  /* Timer RA operation mode select bit */
#define tck0_tramr tramr_addr.bit.b4   /* Timer RA count source select bit */
#define tck1_tramr tramr_addr.bit.b5   /* Timer RA count source select bit */
#define tck2_tramr tramr_addr.bit.b6   /* Timer RA count source select bit */
#define tckcut_tramr tramr_addr.bit.b7 /* Timer RA count source cutoff bit */

/*------------------------------------------------------
  Timer RA prescaler register
------------------------------------------------------*/
union byte_def trapre_addr;
#define trapre trapre_addr.byte

/*------------------------------------------------------
  Timer RA register
------------------------------------------------------*/
union byte_def tra_addr;
#define tra tra_addr.byte

/*------------------------------------------------------
  Timer RB control register
------------------------------------------------------*/
union byte_def trbcr_addr;
#define trbcr trbcr_addr.byte

#define tstart_trbcr trbcr_addr.bit.b0 /* Timer RB count start bit */
#define tcstf_trbcr trbcr_addr.bit.b1  /* Timer RB count status flag */
#define tstop_trbcr trbcr_addr.bit.b2  /* Timer RB count forcible stop bit */

/*------------------------------------------------------
  Timer RB one shot control register
------------------------------------------------------*/
union byte_def trbocr_addr;
#define trbocr trbocr_addr.byte

#define tosst_trbocr trbocr_addr.bit.b0  /* Timer RB one-shot start bit */
#define tossp_trbocr trbocr_addr.bit.b1  /* Timer RB one-shot stop bit */
#define tosstf_trbocr trbocr_addr.bit.b2 /* Timer RB one-shot status flag */

/*------------------------------------------------------
  Timer RB I/O control register
------------------------------------------------------*/
union byte_def trbioc_addr;
#define trbioc trbioc_addr.byte

#define topl_trbioc trbioc_addr.bit.b0   /* Timer RB output level select bit */
#define tocnt_trbioc trbioc_addr.bit.b1  /* Timer RB output switch bit */
#define inostg_trbioc trbioc_addr.bit.b2 /* One-shot trigger control bit */
#define inoseg_trbioc                                                          \
    trbioc_addr.bit.b3 /* One-shot trigger polarity select bit */

/*------------------------------------------------------
  Timer RB mode register
------------------------------------------------------*/
union byte_def trbmr_addr;
#define trbmr trbmr_addr.byte

#define tmod0_trbmr trbmr_addr.bit.b0  /* Timer RB operating mode select bit */
#define tmod1_trbmr trbmr_addr.bit.b1  /* Timer RB operating mode select bit */
#define twrc_trbmr trbmr_addr.bit.b3   /* Timer RB write control bit */
#define tck0_trbmr trbmr_addr.bit.b4   /* Timer RB count source select bit */
#define tck1_trbmr trbmr_addr.bit.b5   /* Timer RB count source select bit */
#define tckcut_trbmr trbmr_addr.bit.b7 /* Timer RB count source cutoff bit */

/*------------------------------------------------------
  Timer RB prescaler register
------------------------------------------------------*/
union byte_def trbpre_addr;
#define trbpre trbpre_addr.byte

/*------------------------------------------------------
  Timer RB secondary register
------------------------------------------------------*/
union byte_def trbsc_addr;
#define trbsc trbsc_addr.byte

/*------------------------------------------------------
  Timer RB Primary Register
------------------------------------------------------*/
union byte_def trbpr_addr;
#define trbpr trbpr_addr.byte

/*------------------------------------------------------
  Timer RE seconds data register / Timer RE counter data register
------------------------------------------------------*/
union byte_def tresec_addr;
#define tresec tresec_addr.byte

#define sc00_tresec tresec_addr.bit.b0 /* 1st digit of seconds count bits */
#define sc01_tresec tresec_addr.bit.b1 /* 1st digit of seconds count bits */
#define sc02_tresec tresec_addr.bit.b2 /* 1st digit of seconds count bits */
#define sc03_tresec tresec_addr.bit.b3 /* 1st digit of seconds count bits */
#define sc10_tresec tresec_addr.bit.b4 /* 2nd digit of seconds count bits */
#define sc11_tresec tresec_addr.bit.b5 /* 2nd digit of seconds count bits */
#define sc12_tresec tresec_addr.bit.b6 /* 2nd digit of seconds count bits */
#define bsy_tresec tresec_addr.bit.b7  /* Timer RE busy flag */

/*------------------------------------------------------
  Timer RE minutes data register / Timer RE compare data register
------------------------------------------------------*/
union byte_def tremin_addr;
#define tremin tremin_addr.byte

#define mn00_tremin tremin_addr.bit.b0 /* 1st digit of minutes count bits */
#define mn01_tremin tremin_addr.bit.b1 /* 1st digit of minutes count bits */
#define mn02_tremin tremin_addr.bit.b2 /* 1st digit of minutes count bits */
#define mn03_tremin tremin_addr.bit.b3 /* 1st digit of minutes count bits */
#define mn10_tremin tremin_addr.bit.b4 /* 2nd digit of minutes count bits */
#define mn11_tremin tremin_addr.bit.b5 /* 2nd digit of minutes count bits */
#define mn12_tremin tremin_addr.bit.b6 /* 2nd digit of minutes count bits */
#define bsy_tremin tremin_addr.bit.b7  /* Timer RE busy flag */

/*------------------------------------------------------
  Timer RE Hours Data Register
------------------------------------------------------*/
union byte_def trehr_addr;
#define trehr trehr_addr.byte

#define hr00_trehr trehr_addr.bit.b0 /* 1st digit of hours count bits */
#define hr01_trehr trehr_addr.bit.b1 /* 1st digit of hours count bits */
#define hr02_trehr trehr_addr.bit.b2 /* 1st digit of hours count bits */
#define hr03_trehr trehr_addr.bit.b3 /* 1st digit of hours count bits */
#define hr10_trehr trehr_addr.bit.b4 /* 2nd digit of hours count bits */
#define hr11_trehr trehr_addr.bit.b5 /* 2nd digit of hours count bits */
#define bsy_trehr trehr_addr.bit.b7  /* Timer RE busy flag */

/*------------------------------------------------------
  Timer RE Days of Week Data Register
------------------------------------------------------*/
union byte_def trewk_addr;
#define trewk trewk_addr.byte

#define wk0_trewk trewk_addr.bit.b0 /* Days of week count bits */
#define wk1_trewk trewk_addr.bit.b1 /* Days of week count bits */
#define wk2_trewk trewk_addr.bit.b2 /* Days of week count bits */
#define bsy_trewk trewk_addr.bit.b7 /* Timer RE busy flag */

/*------------------------------------------------------
  Timer RE control register1
------------------------------------------------------*/
union byte_def trecr1_addr;
#define trecr1 trecr1_addr.byte

#define tcstf_trecr1 trecr1_addr.bit.b1   /* Timer RE count status flag */
#define toena_trecr1 trecr1_addr.bit.b2   /* TREO pin output enable bit */
#define int_trecr1 trecr1_addr.bit.b3     /* Interrupt request timing bit */
#define trerst_trecr1 trecr1_addr.bit.b4  /* Timer RE reset bit */
#define pm_trecr1 trecr1_addr.bit.b5      /* A.M. / P.M. bit */
#define h12_h24_trecr1 trecr1_addr.bit.b6 /* Operating mode select bit */
#define tstart_trecr1 trecr1_addr.bit.b7  /* Timer RE count start bit */

/*------------------------------------------------------
  Timer RE control register2
------------------------------------------------------*/
union byte_def trecr2_addr;
#define trecr2 trecr2_addr.byte

#define seie_trecr2                                                            \
    trecr2_addr.bit                                                            \
        .b0 /* Periodic interrupt triggered every second enable bit */
#define mnie_trecr2                                                            \
    trecr2_addr.bit                                                            \
        .b1 /* Periodic interrupt triggered every minute enable bit */
#define hrie_trecr2                                                            \
    trecr2_addr.bit.b2 /* Periodic interrupt triggered every hour enable bit   \
                        */
#define dyie_trecr2                                                            \
    trecr2_addr.bit.b3 /* Periodic interrupt triggered every day enable bit */
#define wkie_trecr2                                                            \
    trecr2_addr.bit.b4 /* Periodic interrupt triggered every week enable bit   \
                        */
#define comie_trecr2                                                           \
    trecr2_addr.bit.b5 /* Compare match interrupt enable bit                   \
                        */

/*------------------------------------------------------
  Timer RE count source select register
------------------------------------------------------*/
union byte_def trecsr_addr;
#define trecsr trecsr_addr.byte

#define rcs0_trecsr trecsr_addr.bit.b0 /* Count source select bit */
#define rcs1_trecsr trecsr_addr.bit.b1 /* Count source select bit */
#define rcs2_trecsr trecsr_addr.bit.b2 /* 4-Bit counter select bit */
#define rcs3_trecsr trecsr_addr.bit.b3 /* Real-Time clock mode select bit */
#define rcs5_trecsr trecsr_addr.bit.b5 /* Clock output select bit */
#define rcs6_trecsr trecsr_addr.bit.b6 /* Clock output select bit */

/*------------------------------------------------------
  Timer RD start register
------------------------------------------------------*/
union byte_def trdstr_addr;
#define trdstr trdstr_addr.byte

#define tstart0_trdstr trdstr_addr.bit.b0 /* TRD0 count start bit */
#define tstart1_trdstr trdstr_addr.bit.b1 /* TRD1 count start bit */
#define csel0_trdstr trdstr_addr.bit.b2   /* TRD0 count operation select bit */
#define csel1_trdstr trdstr_addr.bit.b3   /* TRD1 count operation select bit */

#define tstop0_trdstr csel0_trdstr
#define tstop1_trdstr csel1_trdstr

/*------------------------------------------------------
  Timer RD mode register
------------------------------------------------------*/
union byte_def trdmr_addr;
#define trdmr trdmr_addr.byte

#define sync_trdmr trdmr_addr.bit.b0 /* Timer RD synchronous bit */
#define bfc0_trdmr                                                             \
    trdmr_addr.bit.b4 /* TRDGRC0 register function selection bit */
#define bfd0_trdmr                                                             \
    trdmr_addr.bit.b5 /* TRDGRD0 register function selection bit */
#define bfc1_trdmr                                                             \
    trdmr_addr.bit.b6 /* TRDGRC1 register function selection bit */
#define bfd1_trdmr                                                             \
    trdmr_addr.bit.b7 /* TRDGRD1 register function selection bit */

#define trdmdr trdmr
#define sync_trdmdr sync_trdmr
#define bfc0_trdmdr bfc0_trdmr
#define bfd0_trdmdr bfd0_trdmr
#define bfc1_trdmdr bfc1_trdmr
#define bfd1_trdmdr bfd1_trdmr

/*------------------------------------------------------
  Timer RD PWM mode register
------------------------------------------------------*/
union byte_def trdpmr_addr;
#define trdpmr trdpmr_addr.byte

#define pwmb0_trdpmr                                                           \
    trdpmr_addr.bit.b0 /* PWM mode of TRDIOB0 selection bit                    \
                        */
#define pwmc0_trdpmr                                                           \
    trdpmr_addr.bit.b1 /* PWM mode of TRDIOC0 selection bit                    \
                        */
#define pwmd0_trdpmr                                                           \
    trdpmr_addr.bit.b2 /* PWM mode of TRDIOD0 selection bit                    \
                        */
#define pwmb1_trdpmr                                                           \
    trdpmr_addr.bit.b4 /* PWM mode of TRDIOB1 selection bit                    \
                        */
#define pwmc1_trdpmr                                                           \
    trdpmr_addr.bit.b5 /* PWM mode of TRDIOC1 selection bit                    \
                        */
#define pwmd1_trdpmr                                                           \
    trdpmr_addr.bit.b6 /* PWM mode of TRDIOD1 selection bit                    \
                        */

/*------------------------------------------------------
  Timer RD function control register
------------------------------------------------------*/
union byte_def trdfcr_addr;
#define trdfcr trdfcr_addr.byte

#define cmd0_trdfcr trdfcr_addr.bit.b0 /* Combination mode selection bit */
#define cmd1_trdfcr trdfcr_addr.bit.b1 /* Combination mode selection bit */
#define ols0_trdfcr                                                            \
    trdfcr_addr.bit.b2 /* Normal-Phase output level selection bit */
#define ols1_trdfcr                                                            \
    trdfcr_addr.bit.b3 /* Counter-Phase output level selection bit */
#define adtrg_trdfcr trdfcr_addr.bit.b4 /* A/D trigger enable bit */
#define adeg_trdfcr trdfcr_addr.bit.b5  /* A/D trigger edge selection bit */
#define stclk_trdfcr                                                           \
    trdfcr_addr.bit.b6                 /* External clock input selection bit   \
                                        */
#define pwm3_trdfcr trdfcr_addr.bit.b7 /* PWM3 mode selection bit */

/*------------------------------------------------------
  Timer RD output master enable register 1
------------------------------------------------------*/
union byte_def trdoer1_addr;
#define trdoer1 trdoer1_addr.byte

#define ea0_trdoer1 trdoer1_addr.bit.b0 /* TRDIOA0 output disable bit */
#define eb0_trdoer1 trdoer1_addr.bit.b1 /* TRDIOB0 output disable bit */
#define ec0_trdoer1 trdoer1_addr.bit.b2 /* TRDIOC0 output disable bit */
#define ed0_trdoer1 trdoer1_addr.bit.b3 /* TRDIOD0 output disable bit */
#define ea1_trdoer1 trdoer1_addr.bit.b4 /* TRDIOA1 output disable bit */
#define eb1_trdoer1 trdoer1_addr.bit.b5 /* TRDIOB1 output disable bit */
#define ec1_trdoer1 trdoer1_addr.bit.b6 /* TRDIOC1 output disable bit */
#define ed1_trdoer1 trdoer1_addr.bit.b7 /* TRDIOD1 output disable bit */

/*------------------------------------------------------
  Timer RD output master enable register 2
------------------------------------------------------*/
union byte_def trdoer2_addr;
#define trdoer2 trdoer2_addr.byte

#define pto_trdoer2                                                            \
    trdoer2_addr.bit                                                           \
        .b7 /* INT0 of pulse output forced cutoff signal input enabled bit */

/*------------------------------------------------------
  Timer RD output control register
------------------------------------------------------*/
union byte_def trdocr_addr;
#define trdocr trdocr_addr.byte

#define toa0_trdocr                                                            \
    trdocr_addr.bit.b0 /* TRDIOA0 output level selection bit                   \
                        */
#define tob0_trdocr                                                            \
    trdocr_addr.bit.b1 /* TRDIOB0 output level selection bit                   \
                        */
#define toc0_trdocr                                                            \
    trdocr_addr.bit.b2 /* TRDIOC0 initial output level selection bit */
#define tod0_trdocr                                                            \
    trdocr_addr.bit.b3 /* TRDIOD0 initial output level selection bit */
#define toa1_trdocr                                                            \
    trdocr_addr.bit.b4 /* TRDIOA1 initial output level selection bit */
#define tob1_trdocr                                                            \
    trdocr_addr.bit.b5 /* TRDIOB1 initial output level selection bit */
#define toc1_trdocr                                                            \
    trdocr_addr.bit.b6 /* TRDIOC1 initial output level selection bit */
#define tod1_trdocr                                                            \
    trdocr_addr.bit.b7 /* TRDIOD1 initial output level selection bit */

/*------------------------------------------------------
  Timer RD digital filter function selection register 0
------------------------------------------------------*/
union byte_def trddf0_addr;
#define trddf0 trddf0_addr.byte

#define dfa_trddf0                                                             \
    trddf0_addr.bit.b0 /* TRDIOA pin digital filter function selection bit */
#define dfb_trddf0                                                             \
    trddf0_addr.bit.b1 /* TRDIOB pin digital filter function selection bit */
#define dfc_trddf0                                                             \
    trddf0_addr.bit.b2 /* TRDIOC pin digital filter function selection bit */
#define dfd_trddf0                                                             \
    trddf0_addr.bit.b3 /* TRDIOD pin digital filter function selection bit */
#define dfck0_trddf0                                                           \
    trddf0_addr.bit.b6 /* Clock selection bit for digital filter function */
#define dfck1_trddf0                                                           \
    trddf0_addr.bit.b7 /* Clock selection bit for digital filter function */

/*------------------------------------------------------
  Timer RD digital filter function selection register 1
------------------------------------------------------*/
union byte_def trddf1_addr;
#define trddf1 trddf1_addr.byte

#define dfa_trddf1                                                             \
    trddf1_addr.bit.b0 /* TRDIOA pin digital filter function selection bit */
#define dfb_trddf1                                                             \
    trddf1_addr.bit.b1 /* TRDIOB pin digital filter function selection bit */
#define dfc_trddf1                                                             \
    trddf1_addr.bit.b2 /* TRDIOC pin digital filter function selection bit */
#define dfd_trddf1                                                             \
    trddf1_addr.bit.b3 /* TRDIOD pin digital filter function selection bit */
#define dfck0_trddf1                                                           \
    trddf1_addr.bit.b6 /* Clock selection bit for digital filter function */
#define dfck1_trddf1                                                           \
    trddf1_addr.bit.b7 /* Clock selection bit for digital filter function */

/*------------------------------------------------------
  Timer RD control register 0
------------------------------------------------------*/
union byte_def trdcr0_addr;
#define trdcr0 trdcr0_addr.byte

#define tck0_trdcr0 trdcr0_addr.bit.b0 /* Count source selection bit */
#define tck1_trdcr0 trdcr0_addr.bit.b1 /* Count source selection bit */
#define tck2_trdcr0 trdcr0_addr.bit.b2 /* Count source selection bit */
#define tpsc0_trdcr0 tck0_trdcr0
#define tpsc1_trdcr0 tck1_trdcr0
#define tpsc2_trdcr0 tck2_trdcr0
#define ckeg0_trdcr0                                                           \
    trdcr0_addr.bit.b3 /* External clock edge selection bit                    \
                        */
#define ckeg1_trdcr0                                                           \
    trdcr0_addr.bit.b4                  /* External clock edge selection bit   \
                                         */
#define cclr0_trdcr0 trdcr0_addr.bit.b5 /* TRD0 counter clear selection bit */
#define cclr1_trdcr0 trdcr0_addr.bit.b6 /* TRD0 counter clear selection bit */
#define cclr2_trdcr0 trdcr0_addr.bit.b7 /* TRD0 counter clear selection bit */

/*------------------------------------------------------
  Timer RD control register 1
------------------------------------------------------*/
union byte_def trdcr1_addr;
#define trdcr1 trdcr1_addr.byte

#define tck0_trdcr1 trdcr1_addr.bit.b0 /* Count source selection bit */
#define tck1_trdcr1 trdcr1_addr.bit.b1 /* Count source selection bit */
#define tck2_trdcr1 trdcr1_addr.bit.b2 /* Count source selection bit */
#define tpsc0_trdcr1 tck0_trdcr1
#define tpsc1_trdcr1 tck1_trdcr1
#define tpsc2_trdcr1 tck2_trdcr1
#define ckeg0_trdcr1                                                           \
    trdcr1_addr.bit.b3 /* External clock edge selection bit                    \
                        */
#define ckeg1_trdcr1                                                           \
    trdcr1_addr.bit.b4                  /* External clock edge selection bit   \
                                         */
#define cclr0_trdcr1 trdcr1_addr.bit.b5 /* TRD1 counter clear selection bit */
#define cclr1_trdcr1 trdcr1_addr.bit.b6 /* TRD1 counter clear selection bit */
#define cclr2_trdcr1 trdcr1_addr.bit.b7 /* TRD1 counter clear selection bit */

/*------------------------------------------------------
  Timer RD I/O control register A0
------------------------------------------------------*/
union byte_def trdiora0_addr;
#define trdiora0 trdiora0_addr.byte

#define ioa0_trdiora0 trdiora0_addr.bit.b0 /* TRDGRA control bit */
#define ioa1_trdiora0 trdiora0_addr.bit.b1 /* TRDGRA control bit */
#define ioa2_trdiora0 trdiora0_addr.bit.b2 /* TRDGRA mode selection bit */
#define ioa3_trdiora0                                                          \
    trdiora0_addr.bit.b3                   /* Input capture input switch bit   \
                                            */
#define iob0_trdiora0 trdiora0_addr.bit.b4 /* TRDGRB control bit */
#define iob1_trdiora0 trdiora0_addr.bit.b5 /* TRDGRB control bit */
#define iob2_trdiora0 trdiora0_addr.bit.b6 /* TRDGRB mode selection bit */

/*------------------------------------------------------
  Timer RD I/O control register A1
------------------------------------------------------*/
union byte_def trdiora1_addr;
#define trdiora1 trdiora1_addr.byte

#define ioa0_trdiora1 trdiora1_addr.bit.b0 /* TRDGRA control bit */
#define ioa1_trdiora1 trdiora1_addr.bit.b1 /* TRDGRA control bit */
#define ioa2_trdiora1 trdiora1_addr.bit.b2 /* TRDGRA mode selection bit */
#define ioa3_trdiora1                                                          \
    trdiora1_addr.bit.b3                   /* Input capture input switch bit   \
                                            */
#define iob0_trdiora1 trdiora1_addr.bit.b4 /* TRDGRB control bit */
#define iob1_trdiora1 trdiora1_addr.bit.b5 /* TRDGRB control bit */
#define iob2_trdiora1 trdiora1_addr.bit.b6 /* TRDGRB mode selection bit */

/*------------------------------------------------------
  Timer RD I/O control register C0
------------------------------------------------------*/
union byte_def trdiorc0_addr;
#define trdiorc0 trdiorc0_addr.byte

#define ioc0_trdiorc0 trdiorc0_addr.bit.b0 /* TRDGRC control bit */
#define ioc1_trdiorc0 trdiorc0_addr.bit.b1 /* TRDGRC control bit */
#define ioc2_trdiorc0 trdiorc0_addr.bit.b2 /* TRDGRC mode selection bit */
#define ioc3_trdiorc0                                                          \
    trdiorc0_addr.bit.b3 /* TRDGRC register function selection bit */
#define iod0_trdiorc0 trdiorc0_addr.bit.b4 /* TRDGRD control bit */
#define iod1_trdiorc0 trdiorc0_addr.bit.b5 /* TRDGRD control bit */
#define iod2_trdiorc0 trdiorc0_addr.bit.b6 /* TRDGRD mode selection bit */
#define iod3_trdiorc0                                                          \
    trdiorc0_addr.bit.b7 /* TRDGRD register function selection bit */

/*------------------------------------------------------
  Timer RD I/O control register C1
------------------------------------------------------*/
union byte_def trdiorc1_addr;
#define trdiorc1 trdiorc1_addr.byte

#define ioc0_trdiorc1 trdiorc1_addr.bit.b0 /* TRDGRC control bit */
#define ioc1_trdiorc1 trdiorc1_addr.bit.b1 /* TRDGRC control bit */
#define ioc2_trdiorc1 trdiorc1_addr.bit.b2 /* TRDGRC mode selection bit */
#define ioc3_trdiorc1                                                          \
    trdiorc1_addr.bit.b3 /* TRDGRC register function selection bit */
#define iod0_trdiorc1 trdiorc1_addr.bit.b4 /* TRDGRD control bit */
#define iod1_trdiorc1 trdiorc1_addr.bit.b5 /* TRDGRD control bit */
#define iod2_trdiorc1 trdiorc1_addr.bit.b6 /* TRDGRD mode selection bit */
#define iod3_trdiorc1                                                          \
    trdiorc1_addr.bit.b7 /* TRDGRD register function selection bit */

/*------------------------------------------------------
  Timer RD status register 0
------------------------------------------------------*/
union byte_def trdsr0_addr;
#define trdsr0 trdsr0_addr.byte

#define imfa_trdsr0                                                            \
    trdsr0_addr.bit.b0 /* Input capture / compare match flag A */
#define imfb_trdsr0                                                            \
    trdsr0_addr.bit.b1 /* Input capture / compare match flag B */
#define imfc_trdsr0                                                            \
    trdsr0_addr.bit.b2 /* Input capture / compare match flag C */
#define imfd_trdsr0                                                            \
    trdsr0_addr.bit.b3                /* Input capture / compare match flag D */
#define ovf_trdsr0 trdsr0_addr.bit.b4 /* Overflow flag */

/*------------------------------------------------------
  Timer RD status register 1
------------------------------------------------------*/
union byte_def trdsr1_addr;
#define trdsr1 trdsr1_addr.byte

#define imfa_trdsr1                                                            \
    trdsr1_addr.bit.b0 /* Input capture / compare match flag A */
#define imfb_trdsr1                                                            \
    trdsr1_addr.bit.b1 /* Input capture / compare match flag B */
#define imfc_trdsr1                                                            \
    trdsr1_addr.bit.b2 /* Input capture / compare match flag C */
#define imfd_trdsr1                                                            \
    trdsr1_addr.bit.b3                /* Input capture / compare match flag D */
#define ovf_trdsr1 trdsr1_addr.bit.b4 /* Overflow flag */
#define udf_trdsr1 trdsr1_addr.bit.b5 /* Underflow flag */

/*------------------------------------------------------
  Timer RD interrupt enable register 0
------------------------------------------------------*/
union byte_def trdier0_addr;
#define trdier0 trdier0_addr.byte

#define imiea_trdier0                                                          \
    trdier0_addr.bit                                                           \
        .b0 /* Input capture / compare match interrupt enable bit A */
#define imieb_trdier0                                                          \
    trdier0_addr.bit                                                           \
        .b1 /* Input capture / compare match interrupt enable bit B */
#define imiec_trdier0                                                          \
    trdier0_addr.bit                                                           \
        .b2 /* Input capture / compare match interrupt enable bit C */
#define imied_trdier0                                                          \
    trdier0_addr.bit                                                           \
        .b3 /* Input capture / compare match interrupt enable bit D */
#define ovie_trdier0                                                           \
    trdier0_addr.bit.b4 /* Overflow / underflow interrupt enable bit */

/*------------------------------------------------------
  Timer RD interrupt enable register 1
------------------------------------------------------*/
union byte_def trdier1_addr;
#define trdier1 trdier1_addr.byte

#define imiea_trdier1                                                          \
    trdier1_addr.bit                                                           \
        .b0 /* Input capture / compare match interrupt enable bit A */
#define imieb_trdier1                                                          \
    trdier1_addr.bit                                                           \
        .b1 /* Input capture / compare match interrupt enable bit B */
#define imiec_trdier1                                                          \
    trdier1_addr.bit                                                           \
        .b2 /* Input capture / compare match interrupt enable bit C */
#define imied_trdier1                                                          \
    trdier1_addr.bit                                                           \
        .b3 /* Input capture / compare match interrupt enable bit D */
#define ovie_trdier1                                                           \
    trdier1_addr.bit.b4 /* Overflow / underflow interrupt enable bit */

/*------------------------------------------------------
  Timer RD PWM mode output level control register 0
------------------------------------------------------*/
union byte_def trdpocr0_addr;
#define trdpocr0 trdpocr0_addr.byte

#define polb_trdpocr0                                                          \
    trdpocr0_addr.bit.b0 /* PWM mode output level control bit B */
#define polc_trdpocr0                                                          \
    trdpocr0_addr.bit.b1 /* PWM mode output level control bit C */
#define pold_trdpocr0                                                          \
    trdpocr0_addr.bit.b2 /* PWM mode output level control bit D */

/*------------------------------------------------------
  Timer RD PWM mode output level control register 1
------------------------------------------------------*/
union byte_def trdpocr1_addr;
#define trdpocr1 trdpocr1_addr.byte

#define polb_trdpocr1                                                          \
    trdpocr1_addr.bit.b0 /* PWM mode output level control bit B */
#define polc_trdpocr1                                                          \
    trdpocr1_addr.bit.b1 /* PWM mode output level control bit C */
#define pold_trdpocr1                                                          \
    trdpocr1_addr.bit.b2 /* PWM mode output level control bit D */

/*------------------------------------------------------
  Timer RD Counter , Timer RD general register A,B,C,D
------------------------------------------------------*/
unsigned short trd0_addr, trdgra0_addr, trdgrb0_addr, trdgrc0_addr,
    trdgrd0_addr;
unsigned short trd1_addr, trdgra1_addr, trdgrb1_addr, trdgrc1_addr,
    trdgrd1_addr;

#define trd0 trd0_addr       /* Timer RD counter 0 */
#define trdgra0 trdgra0_addr /* Timer RD general register A0 */
#define trdgrb0 trdgrb0_addr /* Timer RD general register B0 */
#define trdgrc0 trdgrc0_addr /* Timer RD general register C0 */
#define trdgrd0 trdgrd0_addr /* Timer RD general register D0 */

#define trd1 trd1_addr       /* Timer RD counter 1 */
#define trdgra1 trdgra1_addr /* Timer RD general register A1 */
#define trdgrb1 trdgrb1_addr /* Timer RD general register B1 */
#define trdgrc1 trdgrc1_addr /* Timer RD general register C1 */
#define trdgrd1 trdgrd1_addr /* Timer RD general register D1 */

/*------------------------------------------------------
  LIN control register
------------------------------------------------------*/
union byte_def lincr_addr;
#define lincr lincr_addr.byte

#define sfie_lincr                                                             \
    lincr_addr.bit                                                             \
        .b0 /* Synchronous field measurementcompleted interrupt enable bit */
#define sbie_lincr                                                             \
    lincr_addr.bit.b1 /* Synchronous break detection interrupt enable bit */
#define bcie_lincr                                                             \
    lincr_addr.bit.b2 /* Bus collision detection interrupt enable bit */
#define rxdsf_lincr lincr_addr.bit.b3 /* RxD0 input status flag */
#define lstart_lincr                                                           \
    lincr_addr.bit.b4 /* Synchronous Break detection start bit */
#define sbe_lincr                                                              \
    lincr_addr.bit.b5                /* RxD0 input unmasking timing select bit \
                                      */
#define mst_lincr lincr_addr.bit.b6  /* LIN operation mode setting bit */
#define line_lincr lincr_addr.bit.b7 /* LIN operation start bit */

/*------------------------------------------------------
  LIN status register
------------------------------------------------------*/
union byte_def linst_addr;
#define linst linst_addr.byte

#define sfdct_linst                                                            \
    linst_addr.bit.b0 /* Synchronous field measurementcompleted flag */
#define sbdct_linst linst_addr.bit.b1 /* Synchronous break detection flag */
#define bcdct_linst linst_addr.bit.b2 /* Bus collision detection flag */
#define b0clr_linst linst_addr.bit.b3 /* SFDCT flag clear bit */
#define b1clr_linst linst_addr.bit.b4 /* SBDCT flag clear bit */
#define b2clr_linst linst_addr.bit.b5 /* BCDCT flag clear bit */

/*------------------------------------------------------
  Flash mamory control register4
------------------------------------------------------*/
union byte_def fmr4_addr;
#define fmr4 fmr4_addr.byte

#define fmr40 fmr4_addr.bit.b0 /* Erase-suspend function enable bit */
#define fmr41 fmr4_addr.bit.b1 /* Erase-suspend request bit */
#define fmr42 fmr4_addr.bit.b2 /* Program-suspend request bit */
#define fmr43 fmr4_addr.bit.b3 /* Erase command flag */
#define fmr44 fmr4_addr.bit.b4 /* Program command flag */
#define fmr46 fmr4_addr.bit.b6 /* Read status flag */
#define fmr47                                                                  \
    fmr4_addr.bit.b7 /* Low-Power consumption read mode enable bit             \
                      */

/*------------------------------------------------------
  Flash mamory control register1
------------------------------------------------------*/
union byte_def fmr1_addr;
#define fmr1 fmr1_addr.byte

#define fmr11 fmr1_addr.bit.b1 /* EW1 mode select bit */
#define fmr15 fmr1_addr.bit.b5 /* Block0 rewrite disable bit */
#define fmr16 fmr1_addr.bit.b6 /* Block1 rewrite disable bit */

/*------------------------------------------------------
  Flash mamory control register0
------------------------------------------------------*/
union byte_def fmr0_addr;
#define fmr0 fmr0_addr.byte

#define fmr00 fmr0_addr.bit.b0 /* RY/BY status flag */
#define fmr01 fmr0_addr.bit.b1 /* CPU rewrite mode select bit */
#define fmr02 fmr0_addr.bit.b2 /* Block 0, 1 rew rite enable bit */
#define fmstp fmr0_addr.bit.b3 /* Flash memory stop bit */
#define fmr06 fmr0_addr.bit.b6 /* Program status flag  */
#define fmr07 fmr0_addr.bit.b7 /* Erase status flag */

/*------------------------------------------------------
  Interrupt control register
------------------------------------------------------*/
union {
    struct {
        char ilvl0 : 1; /* Interrupt priority level select bit */
        char ilvl1 : 1; /* Interrupt priority level select bit */
        char ilvl2 : 1; /* Interrupt priority level select bit */
        char ir : 1;    /* Interrupt request bit */
        char pol : 1;   /* Polarity switch bit */
        char b5 : 1;
        char b6 : 1;
        char b7 : 1;
    } bit;
    char byte;
} trd0ic_addr, trd1ic_addr, treic_addr, kupic_addr, adic_addr, ssuaic_addr,
    iic2aic_addr, s0tic_addr, s0ric_addr, s1tic_addr, s1ric_addr, int2ic_addr,
    traic_addr, trbic_addr, int1ic_addr, int3ic_addr, int0ic_addr;

/*------------------------------------------------------
  Timer RD 0  interrupt control register
------------------------------------------------------*/
#define trd0ic trd0ic_addr.byte

#define ilvl0_trd0ic trd0ic_addr.bit.ilvl0
#define ilvl1_trd0ic trd0ic_addr.bit.ilvl1
#define ilvl2_trd0ic trd0ic_addr.bit.ilvl2
#define ir_trd0ic trd0ic_addr.bit.ir

/*------------------------------------------------------
  Timer RD 1  interrupt control register
------------------------------------------------------*/
#define trd1ic trd1ic_addr.byte

#define ilvl0_trd1ic trd1ic_addr.bit.ilvl0
#define ilvl1_trd1ic trd1ic_addr.bit.ilvl1
#define ilvl2_trd1ic trd1ic_addr.bit.ilvl2
#define ir_trd1ic trd1ic_addr.bit.ir

/*------------------------------------------------------
  Timer RE  interrupt control register
------------------------------------------------------*/
#define treic treic_addr.byte

#define ilvl0_treic treic_addr.bit.ilvl0
#define ilvl1_treic treic_addr.bit.ilvl1
#define ilvl2_treic treic_addr.bit.ilvl2
#define ir_treic treic_addr.bit.ir

/*------------------------------------------------------
  Key input interrupt control register
------------------------------------------------------*/
#define kupic kupic_addr.byte

#define ilvl0_kupic kupic_addr.bit.ilvl0
#define ilvl1_kupic kupic_addr.bit.ilvl1
#define ilvl2_kupic kupic_addr.bit.ilvl2
#define ir_kupic kupic_addr.bit.ir

/*------------------------------------------------------
  A-D interrupt control register
------------------------------------------------------*/
#define adic adic_addr.byte

#define ilvl0_adic adic_addr.bit.ilvl0
#define ilvl1_adic adic_addr.bit.ilvl1
#define ilvl2_adic adic_addr.bit.ilvl2
#define ir_adic adic_addr.bit.ir

/*------------------------------------------------------
  SSU interrupt control register
------------------------------------------------------*/
#define ssuaic ssuaic_addr.byte

#define ilvl0_ssuaic ssuaic_addr.bit.ilvl0
#define ilvl1_ssuaic ssuaic_addr.bit.ilvl1
#define ilvl2_ssuaic ssuaic_addr.bit.ilvl2
#define ir_ssuaic ssuaic_addr.bit.ir

/*------------------------------------------------------
  IIC interrupt control register
------------------------------------------------------*/
#define iic2aic iic2aic_addr.byte

#define ilvl0_iic2aic iic2aic_addr.bit.ilvl0
#define ilvl1_iic2aic iic2aic_addr.bit.ilvl1
#define ilvl2_iic2aic iic2aic_addr.bit.ilvl2
#define ir_iic2aic iic2aic_addr.bit.ir

/*------------------------------------------------------
  UART0 transmit interrupt control register
------------------------------------------------------*/
#define s0tic s0tic_addr.byte

#define ilvl0_s0tic s0tic_addr.bit.ilvl0
#define ilvl1_s0tic s0tic_addr.bit.ilvl1
#define ilvl2_s0tic s0tic_addr.bit.ilvl2
#define ir_s0tic s0tic_addr.bit.ir

/*------------------------------------------------------
  UART0 receive interrupt control register
------------------------------------------------------*/
#define s0ric s0ric_addr.byte

#define ilvl0_s0ric s0ric_addr.bit.ilvl0
#define ilvl1_s0ric s0ric_addr.bit.ilvl1
#define ilvl2_s0ric s0ric_addr.bit.ilvl2
#define ir_s0ric s0ric_addr.bit.ir

/*------------------------------------------------------
  UART1 transmit interrupt control register
------------------------------------------------------*/
#define s1tic s1tic_addr.byte

#define ilvl0_s1tic s1tic_addr.bit.ilvl0
#define ilvl1_s1tic s1tic_addr.bit.ilvl1
#define ilvl2_s1tic s1tic_addr.bit.ilvl2
#define ir_s1tic s1tic_addr.bit.ir

/*------------------------------------------------------
  UART1 receive interrupt control register
------------------------------------------------------*/
#define s1ric s1ric_addr.byte

#define ilvl0_s1ric s1ric_addr.bit.ilvl0
#define ilvl1_s1ric s1ric_addr.bit.ilvl1
#define ilvl2_s1ric s1ric_addr.bit.ilvl2
#define ir_s1ric s1ric_addr.bit.ir

/*------------------------------------------------------
  INT2 interrupt control register
------------------------------------------------------*/
#define int2ic int2ic_addr.byte

#define ilvl0_int2ic int2ic_addr.bit.ilvl0
#define ilvl1_int2ic int2ic_addr.bit.ilvl1
#define ilvl2_int2ic int2ic_addr.bit.ilvl2
#define ir_int2ic int2ic_addr.bit.ir
#define pol_int2ic int2ic_addr.bit.pol

/*------------------------------------------------------
  Timer RA interrupt control register
------------------------------------------------------*/
#define traic traic_addr.byte

#define ilvl0_traic traic_addr.bit.ilvl0
#define ilvl1_traic traic_addr.bit.ilvl1
#define ilvl2_traic traic_addr.bit.ilvl2
#define ir_traic traic_addr.bit.ir

/*------------------------------------------------------
  Timer RB interrupt control register
------------------------------------------------------*/
#define trbic trbic_addr.byte

#define ilvl0_trbic trbic_addr.bit.ilvl0
#define ilvl1_trbic trbic_addr.bit.ilvl1
#define ilvl2_trbic trbic_addr.bit.ilvl2
#define ir_trbic trbic_addr.bit.ir

/*------------------------------------------------------
  INT1 interrupt control register
------------------------------------------------------*/
#define int1ic int1ic_addr.byte

#define ilvl0_int1ic int1ic_addr.bit.ilvl0
#define ilvl1_int1ic int1ic_addr.bit.ilvl1
#define ilvl2_int1ic int1ic_addr.bit.ilvl2
#define ir_int1ic int1ic_addr.bit.ir
#define pol_int1ic int1ic_addr.bit.pol

/*------------------------------------------------------
  INT3 interrupt control register
------------------------------------------------------*/
#define int3ic int3ic_addr.byte

#define ilvl0_int3ic int3ic_addr.bit.ilvl0
#define ilvl1_int3ic int3ic_addr.bit.ilvl1
#define ilvl2_int3ic int3ic_addr.bit.ilvl2
#define ir_int3ic int3ic_addr.bit.ir
#define pol_int3ic int3ic_addr.bit.pol

/*------------------------------------------------------
  INT0 interrupt control register
------------------------------------------------------*/
#define int0ic int0ic_addr.byte

#define ilvl0_int0ic int0ic_addr.bit.ilvl0
#define ilvl1_int0ic int0ic_addr.bit.ilvl1
#define ilvl2_int0ic int0ic_addr.bit.ilvl2
#define ir_int0ic int0ic_addr.bit.ir
#define pol_int0ic int0ic_addr.bit.pol

/*------------------------------------------------------
  UARTi transmit/receive mode register
------------------------------------------------------*/
union {
    struct {
        char smd0 : 1;  /* Serial I/O mode select bit */
        char smd1 : 1;  /* Serial I/O mode select bit */
        char smd2 : 1;  /* Serial I/O mode select bit */
        char ckdir : 1; /* Internal/external clock select bit */
        char stps : 1;  /* Stop bit length select bit */
        char pry : 1;   /* Odd/even parity select bit */
        char prye : 1;  /* Parity enable bit */
        char b7 : 1;
    } bit;
    char byte;
} u0mr_addr, u1mr_addr;

/*------------------------------------------------------
  UARTi transmit/receive mode register
------------------------------------------------------*/
#define u0mr u0mr_addr.byte

#define smd0_u0mr u0mr_addr.bit.smd0 /* Serial I/O mode select bit */
#define smd1_u0mr u0mr_addr.bit.smd1 /* Serial I/O mode select bit */
#define smd2_u0mr u0mr_addr.bit.smd2 /* Serial I/O mode select bit */
#define ckdir_u0mr                                                             \
    u0mr_addr.bit.ckdir              /* Internal/external clock select bit     \
                                      */
#define stps_u0mr u0mr_addr.bit.stps /* Stop bit length select bit */
#define pry_u0mr u0mr_addr.bit.pry   /* Odd/even parity select bit */
#define prye_u0mr u0mr_addr.bit.prye /* Parity enable bit */

#define u1mr u1mr_addr.byte

#define smd0_u1mr u1mr_addr.bit.smd0 /* Serial I/O mode select bit */
#define smd1_u1mr u1mr_addr.bit.smd1 /* Serial I/O mode select bit */
#define smd2_u1mr u1mr_addr.bit.smd2 /* Serial I/O mode select bit */
#define ckdir_u1mr                                                             \
    u1mr_addr.bit.ckdir              /* Internal/external clock select bit     \
                                      */
#define stps_u1mr u1mr_addr.bit.stps /* Stop bit length select bit */
#define pry_u1mr u1mr_addr.bit.pry   /* Odd/even parity select bit */
#define prye_u1mr u1mr_addr.bit.prye /* Parity enable bit */

/*------------------------------------------------------
  UARTi transmit/receive control register0
------------------------------------------------------*/
union {
    struct {
        char clk0 : 1; /* BRG count source select bit */
        char clk1 : 1; /* BRG count source select bit */
        char b2 : 1;
        char txept : 1; /* Transmit register empty flag */
        char b4 : 1;
        char nch : 1;   /* Data output select bit */
        char ckpol : 1; /* CLK polarity select bit */
        char uform : 1; /* Transfer format select bit */
    } bit;
    char byte;
} u0c0_addr, u1c0_addr;

/*------------------------------------------------------
  UARTi transmit/receive control register0
------------------------------------------------------*/
#define u0c0 u0c0_addr.byte

#define clk0_u0c0 u0c0_addr.bit.clk0   /* BRG count source select bit */
#define clk1_u0c0 u0c0_addr.bit.clk1   /* BRG count source select bit */
#define txept_u0c0 u0c0_addr.bit.txept /* Transmit register empty flag */
#define nch_u0c0 u0c0_addr.bit.nch     /* Data output select bit */
#define ckpol_u0c0 u0c0_addr.bit.ckpol /* CLK polarity select bit */
#define uform_u0c0 u0c0_addr.bit.uform /* Transfer format select bit */

#define u1c0 u1c0_addr.byte

#define clk0_u1c0 u1c0_addr.bit.clk0   /* BRG count source select bit */
#define clk1_u1c0 u1c0_addr.bit.clk1   /* BRG count source select bit */
#define txept_u1c0 u1c0_addr.bit.txept /* Transmit register empty flag */
#define nch_u1c0 u1c0_addr.bit.nch     /* Data output select bit */
#define ckpol_u1c0 u1c0_addr.bit.ckpol /* CLK polarity select bit */
#define uform_u1c0 u1c0_addr.bit.uform /* Transfer format select bit */

/*------------------------------------------------------
  UARTi transmit/receive control register1
------------------------------------------------------*/
union {
    struct {
        char te : 1; /* Transmit enable bit */
        char ti : 1; /* Transmit buffer empty flag */
        char re : 1; /* Receive enable bit */
        char ri : 1; /* Receive complete flag */
        char irs : 1;
        char rrm : 1;
        char b6 : 1;
        char b7 : 1;
    } bit;
    char byte;
} u0c1_addr, u1c1_addr;

/*------------------------------------------------------
  UARTi transmit/receive control register1
------------------------------------------------------*/
#define u0c1 u0c1_addr.byte

#define te_u0c1 u0c1_addr.bit.te /* Transmit enable bit */
#define ti_u0c1 u0c1_addr.bit.ti /* Transmit buffer empty flag */
#define re_u0c1 u0c1_addr.bit.re /* Receive enable bit */
#define ri_u0c1 u0c1_addr.bit.ri /* Receive complete flag */
#define u0irs_u0c1                                                             \
    u0c1_addr.bit.irs /* UART0 transmit interrupt cause select bit */
#define u0rrm_u0c1                                                             \
    u0c1_addr.bit.rrm /* UART0 continuous receive mode enable bit */

#define u1c1 u1c1_addr.byte

#define te_u1c1 u1c1_addr.bit.te /* Transmit enable bit */
#define ti_u1c1 u1c1_addr.bit.ti /* Transmit buffer empty flag */
#define re_u1c1 u1c1_addr.bit.re /* Receive enable bit */
#define ri_u1c1 u1c1_addr.bit.ri /* Receive complete flag */
#define u1irs_u1c1                                                             \
    u1c1_addr.bit.irs /* UART1 transmit interrupt cause select bit */
#define u1rrm_u1c1                                                             \
    u1c1_addr.bit.rrm /* UART1 continuous receive mode enable bit */

/*------------------------------------------------------
  UARTi receive buffer register
------------------------------------------------------*/
union {
    struct {
        char b0 : 1;
        char b1 : 1;
        char b2 : 1;
        char b3 : 1;
        char b4 : 1;
        char b5 : 1;
        char b6 : 1;
        char b7 : 1;
        char b8 : 1;
        char b9 : 1;
        char b10 : 1;
        char b11 : 1;
        char oer : 1; /* Overrun error flag */
        char fer : 1; /* Framing error flag */
        char per : 1; /* Parity error flag */
        char sum : 1; /* Error sum flag */
    } bit;
    struct {
        char low;  /* Low  8 bit */
        char high; /* High 8 bit */
    } byte;
    unsigned short word;
} u0rb_addr, u1rb_addr;

/*------------------------------------------------------
  UARTi receive buffer register
------------------------------------------------------*/
#define u0rb u0rb_addr.word
#define u0rbl u0rb_addr.byte.low
#define u0rbh u0rb_addr.byte.high

#define oer_u0rb u0rb_addr.bit.oer /* Overrun error flag */
#define fer_u0rb u0rb_addr.bit.fer /* Framing error flag */
#define per_u0rb u0rb_addr.bit.per /* Parity error flag */
#define sum_u0rb u0rb_addr.bit.sum /* Error sum flag */

#define u1rb u1rb_addr.word
#define u1rbl u1rb_addr.byte.low
#define u1rbh u1rb_addr.byte.high

#define oer_u1rb u1rb_addr.bit.oer /* Overrun error flag */
#define fer_u1rb u1rb_addr.bit.fer /* Framing error flag */
#define per_u1rb u1rb_addr.bit.per /* Parity error flag */
#define sum_u1rb u1rb_addr.bit.sum /* Error sum flag */

/********************************************************
 *  declare SFR union                                    *
 ********************************************************/

union {
    struct {
        char b0 : 1;
        char b1 : 1;
        char b2 : 1;
        char b3 : 1;
        char b4 : 1;
        char b5 : 1;
        char b6 : 1;
        char b7 : 1;
        char b8 : 1;
        char b9 : 1;
        char b10 : 1;
        char b11 : 1;
        char b12 : 1;
        char b13 : 1;
        char b14 : 1;
        char b15 : 1;
        char b16 : 1;
        char b17 : 1;
        char b18 : 1;
        char b19 : 1;
    } bit;
    struct {
        char low;  /* low  8 bit */
        char mid;  /* mid  8 bit */
        char high; /* high 8 bit */
        char nc;   /* non use */
    } byte;

    unsigned long dword;
} rmad0_addr, rmad1_addr;

#define rmad0 rmad0_addr.dword     /* Address match interrupt register0 */
#define rmad0l rmad0_addr.byte.low /* Address match interrupt register0 Low */
#define rmad0m                                                                 \
    rmad0_addr.byte.mid /* Address match interrupt register0 Middle */
#define rmad0h                                                                 \
    rmad0_addr.byte.high           /* Address match interrupt register0 High   \
                                    */
#define rmad1 rmad1_addr.dword     /* Address match interrupt register1 */
#define rmad1l rmad1_addr.byte.low /* Address match interrupt register1 Low */
#define rmad1m                                                                 \
    rmad1_addr.byte.mid /* Address match interrupt register1 Middle */
#define rmad1h                                                                 \
    rmad1_addr.byte.high /* Address match interrupt register1 High             \
                          */

union {
    struct {
        char b0 : 1;
        char b1 : 1;
        char b2 : 1;
        char b3 : 1;
        char b4 : 1;
        char b5 : 1;
        char b6 : 1;
        char b7 : 1;
        char b8 : 1;
        char b9 : 1;
        char b10 : 1;
        char b11 : 1;
        char b12 : 1;
        char b13 : 1;
        char b14 : 1;
        char b15 : 1;
    } bit;
    struct {
        char low;  /* low  8 bit */
        char high; /* high 8 bit */
    } byte;
    unsigned int word;
} u0tb_addr, u1tb_addr, ad_addr;

#define u0tb u0tb_addr.word       /* UART0 transmit buffer register */
#define u0tbl u0tb_addr.byte.low  /* UART0 transmit buffer register Low */
#define u0tbh u0tb_addr.byte.high /* UART0 transmit buffer register High */
#define u1tb u1tb_addr.word       /* UART1 transmit buffer register */
#define u1tbl u1tb_addr.byte.low  /* UART1 transmit buffer register Low */
#define u1tbh u1tb_addr.byte.high /* UART1 transmit buffer register High */
#define ad ad_addr.word           /* A-D register  */
#define adl ad_addr.byte.low      /* A-D register Low */
#define adh ad_addr.byte.high     /* A-D register High */

#endif
