/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Verilog/project/uart_new/transmitter.v";
static int ng1[] = {1, 0};



static void Always_46_0(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(51, ng0);

LAB9:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 7);
    t14 = (t10 & 1);
    *((unsigned int *)t5) = t14;
    t12 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_lshift(t13, 8, t4, 8, t5, 32);
    t11 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 8, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(49, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    t11 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 8, 0LL);
    goto LAB8;

}


extern void work_m_00000000004100273959_2422098934_init()
{
	static char *pe[] = {(void *)Always_46_0};
	xsi_register_didat("work_m_00000000004100273959_2422098934", "isim/tb_transmitter_isim_beh.exe.sim/work/m_00000000004100273959_2422098934.didat");
	xsi_register_executes(pe);
}
