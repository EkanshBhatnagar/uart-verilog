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
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {7U, 7U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {4U, 0U};



static void Always_101_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 4008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4824);
    *((int *)t2) = 1;
    t3 = (t0 + 4040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(101, ng0);

LAB5:    xsi_set_current_line(102, ng0);
    t5 = (t0 + 1728U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2768);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(102, ng0);

LAB13:    xsi_set_current_line(103, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2768);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 3);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

}

static void Always_110_1(char *t0)
{
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 4256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 4840);
    *((int *)t2) = 1;
    t3 = (t0 + 4288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(110, ng0);

LAB5:    xsi_set_current_line(111, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(114, ng0);
    t7 = (t0 + 1728U);
    t8 = *((char **)t7);
    t7 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB20:    goto LAB17;

LAB9:    xsi_set_current_line(118, ng0);

LAB21:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2928);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB17;

LAB11:    xsi_set_current_line(122, ng0);

LAB22:    xsi_set_current_line(123, ng0);
    t3 = (t0 + 3088);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng7)));
    memset(t16, 0, 8);
    t14 = (t7 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB24;

LAB23:    t15 = (t8 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB24;

LAB27:    if (*((unsigned int *)t7) < *((unsigned int *)t8))
        goto LAB25;

LAB26:    t18 = (t16 + 4);
    t9 = *((unsigned int *)t18);
    t10 = (~(t9));
    t11 = *((unsigned int *)t16);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB30:    goto LAB17;

LAB13:    xsi_set_current_line(130, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 2928);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB17;

LAB15:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2928);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB17;

LAB18:    xsi_set_current_line(115, ng0);
    t14 = ((char*)((ng4)));
    t15 = (t0 + 2928);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 3);
    goto LAB20;

LAB24:    t17 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB26;

LAB25:    *((unsigned int *)t16) = 1;
    goto LAB26;

LAB28:    xsi_set_current_line(123, ng0);

LAB31:    xsi_set_current_line(124, ng0);
    t19 = ((char*)((ng5)));
    t20 = (t0 + 2928);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 3);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t5, 4, t7, 32);
    t8 = (t0 + 3088);
    xsi_vlogvar_assign_value(t8, t16, 0, 0, 4);
    goto LAB30;

}

static void Always_136_2(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 4504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 4856);
    *((int *)t2) = 1;
    t3 = (t0 + 4536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(136, ng0);

LAB5:    xsi_set_current_line(137, ng0);
    t4 = (t0 + 2928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 2928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB17;

LAB14:    if (t20 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t8) = 1;

LAB17:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 2928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB25;

LAB22:    if (t20 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t8) = 1;

LAB25:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 2928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB32;

LAB29:    if (t20 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t8) = 1;

LAB32:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(150, ng0);

LAB36:    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB35:
LAB28:
LAB20:
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(137, ng0);

LAB13:    xsi_set_current_line(138, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 2288);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB16:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(142, ng0);

LAB21:    xsi_set_current_line(143, ng0);
    t23 = ((char*)((ng6)));
    t24 = (t0 + 2288);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 1);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB20;

LAB24:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(147, ng0);
    t23 = ((char*)((ng5)));
    t24 = (t0 + 2608);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 2);
    goto LAB28;

LAB31:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(149, ng0);
    t23 = ((char*)((ng8)));
    t24 = (t0 + 2608);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 2);
    goto LAB35;

}


extern void work_m_00000000000641350337_2074104654_init()
{
	static char *pe[] = {(void *)Always_101_0,(void *)Always_110_1,(void *)Always_136_2};
	xsi_register_didat("work_m_00000000000641350337_2074104654", "isim/tb_transmitter_isim_beh.exe.sim/work/m_00000000000641350337_2074104654.didat");
	xsi_register_executes(pe);
}
