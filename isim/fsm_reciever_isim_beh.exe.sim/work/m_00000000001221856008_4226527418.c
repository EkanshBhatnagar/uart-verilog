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
static const char *ng0 = "C:/Verilog/project/uart_new/reciever.v";
static unsigned int ng1[] = {3U, 3U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {7U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {3U, 0U};



static void Always_90_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 4032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4848);
    *((int *)t2) = 1;
    t3 = (t0 + 4064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(91, ng0);
    t4 = (t0 + 2952);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 2, 0LL);
    goto LAB2;

}

static void Always_93_1(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 4280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4864);
    *((int *)t2) = 1;
    t3 = (t0 + 4312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(93, ng0);

LAB5:    xsi_set_current_line(94, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2952);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(97, ng0);

LAB16:    xsi_set_current_line(98, ng0);
    t8 = (t0 + 1592U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t8 = (t9 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t8) == 0)
        goto LAB17;

LAB19:    t15 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t15) = 1;

LAB20:    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t7);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB23:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB15;

LAB9:    xsi_set_current_line(104, ng0);

LAB24:    xsi_set_current_line(105, ng0);
    t3 = (t0 + 3112);
    t5 = (t3 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng5)));
    memset(t7, 0, 8);
    t15 = (t8 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB26;

LAB25:    t16 = (t9 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t8) < *((unsigned int *)t9))
        goto LAB27;

LAB28:    t23 = (t7 + 4);
    t10 = *((unsigned int *)t23);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB32:    goto LAB15;

LAB11:    xsi_set_current_line(112, ng0);

LAB34:    xsi_set_current_line(113, ng0);
    t3 = (t0 + 1752U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB37:    goto LAB15;

LAB13:    xsi_set_current_line(118, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2952);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 2);
    goto LAB15;

LAB17:    *((unsigned int *)t7) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(99, ng0);
    t22 = ((char*)((ng2)));
    t23 = (t0 + 2952);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 2);
    goto LAB23;

LAB26:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t7) = 1;
    goto LAB28;

LAB30:    xsi_set_current_line(105, ng0);

LAB33:    xsi_set_current_line(106, ng0);
    t24 = ((char*)((ng3)));
    t25 = (t0 + 2952);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 2);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = ((char*)((ng6)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t5, 4, t8, 32);
    t9 = (t0 + 3112);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 4);
    goto LAB32;

LAB35:    xsi_set_current_line(114, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t0 + 2952);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 2);
    goto LAB37;

}

static void Always_122_2(char *t0)
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

LAB0:    t1 = (t0 + 4528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 4880);
    *((int *)t2) = 1;
    t3 = (t0 + 4560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(122, ng0);

LAB5:    xsi_set_current_line(123, ng0);
    t4 = (t0 + 2952);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
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

LAB11:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 2952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
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
        goto LAB16;

LAB13:    if (t20 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t8) = 1;

LAB16:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 2952);
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
        goto LAB23;

LAB20:    if (t20 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t8) = 1;

LAB23:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(129, ng0);

LAB27:    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB26:
LAB19:
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(124, ng0);
    t30 = ((char*)((ng6)));
    t31 = (t0 + 2312);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB12;

LAB15:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(126, ng0);
    t23 = ((char*)((ng6)));
    t24 = (t0 + 2472);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 1);
    goto LAB19;

LAB22:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(128, ng0);
    t23 = ((char*)((ng6)));
    t24 = (t0 + 2632);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 1);
    goto LAB26;

}


extern void work_m_00000000001221856008_4226527418_init()
{
	static char *pe[] = {(void *)Always_90_0,(void *)Always_93_1,(void *)Always_122_2};
	xsi_register_didat("work_m_00000000001221856008_4226527418", "isim/fsm_reciever_isim_beh.exe.sim/work/m_00000000001221856008_4226527418.didat");
	xsi_register_executes(pe);
}
