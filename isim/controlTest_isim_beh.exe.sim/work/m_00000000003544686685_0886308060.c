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
static const char *ng0 = "C:/projects/CPU/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};



static void Always_29_0(char *t0)
{
    char t9[8];
    char t40[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t42;
    char *t43;
    char *t44;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB23;

LAB9:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB23;

LAB11:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB23;

LAB13:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 & t11);
    *((unsigned int *)t9) = t12;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB24;

LAB25:
LAB26:    t39 = (t0 + 1768);
    xsi_vlogvar_assign_value(t39, t9, 0, 0, 32);
    goto LAB23;

LAB15:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 | t11);
    *((unsigned int *)t9) = t12;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB27;

LAB28:
LAB29:    t39 = (t0 + 1768);
    xsi_vlogvar_assign_value(t39, t9, 0, 0, 32);
    goto LAB23;

LAB17:    xsi_set_current_line(37, ng0);

LAB30:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t8 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t9) = t12;
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t7) = t16;
    t13 = (t9 + 4);
    t17 = *((unsigned int *)t13);
    t18 = (~(t17));
    t19 = *((unsigned int *)t9);
    t20 = (t19 & t18);
    t23 = (t20 != 0);
    if (t23 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB33:    goto LAB23;

LAB19:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t41, 0, 8);
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 ^ t11);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = (t12 | t16);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t8);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB37;

LAB34:    if (t20 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t41) = 1;

LAB37:    memset(t40, 0, 8);
    t21 = (t41 + 4);
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t41);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t21) != 0)
        goto LAB40;

LAB41:    t39 = (t40 + 4);
    t30 = *((unsigned int *)t40);
    t33 = *((unsigned int *)t39);
    t34 = (t30 || t33);
    if (t34 > 0)
        goto LAB42;

LAB43:    t35 = *((unsigned int *)t40);
    t36 = (~(t35));
    t37 = *((unsigned int *)t39);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t39) > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t40) > 0)
        goto LAB48;

LAB49:    memcpy(t9, t43, 8);

LAB50:    t44 = (t0 + 1768);
    xsi_vlogvar_assign_value(t44, t9, 0, 0, 32);
    goto LAB23;

LAB21:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB23;

LAB24:    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t9) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t35 & t33);
    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & t34);
    t37 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t37 & t33);
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t34);
    goto LAB26;

LAB27:    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t9) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t33 & t29);
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t30);
    goto LAB29;

LAB31:    xsi_set_current_line(39, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 1768);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB33;

LAB36:    t13 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t40) = 1;
    goto LAB41;

LAB40:    t22 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB41;

LAB42:    t42 = ((char*)((ng2)));
    goto LAB43;

LAB44:    t43 = ((char*)((ng1)));
    goto LAB45;

LAB46:    xsi_vlog_unsigned_bit_combine(t9, 32, t42, 32, t43, 32);
    goto LAB50;

LAB48:    memcpy(t9, t42, 8);
    goto LAB50;

}


extern void work_m_00000000003544686685_0886308060_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000003544686685_0886308060", "isim/controlTest_isim_beh.exe.sim/work/m_00000000003544686685_0886308060.didat");
	xsi_register_executes(pe);
}