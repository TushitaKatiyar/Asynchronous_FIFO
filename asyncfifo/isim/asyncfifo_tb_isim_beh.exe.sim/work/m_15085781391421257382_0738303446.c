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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/asyncfifo/asyncfifo_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {2, 0};



static void Always_56_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3560);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 2040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2040);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_57_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3808);
    xsi_process_wait(t2, 7000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 2200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2200);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_59_2(char *t0)
{
    char t10[8];
    char t27[8];
    char t29[8];
    char t33[8];
    char t42[8];
    char t50[8];
    char t88[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    int t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t28;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t89;
    char *t90;

LAB0:    t1 = (t0 + 4248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);

LAB4:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 4056);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2360);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4568);
    *((int *)t2) = 1;
    t3 = (t0 + 4280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t4 = (t0 + 6432);
    *((int *)t4) = t8;

LAB7:    t9 = (t0 + 6432);
    if (*((int *)t9) > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4056);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB8:    xsi_set_current_line(72, ng0);

LAB10:    xsi_set_current_line(73, ng0);
    t11 = (t0 + 1640U);
    t12 = *((char **)t11);
    memset(t10, 0, 8);
    t11 = (t12 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t11) == 0)
        goto LAB11;

LAB13:    t18 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t18) = 1;

LAB14:    t19 = (t10 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t10);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB15;

LAB16:
LAB17:    t2 = (t0 + 6432);
    t8 = *((int *)t2);
    *((int *)t2) = (t8 - 1);
    goto LAB7;

LAB11:    *((unsigned int *)t10) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(73, ng0);

LAB18:    xsi_set_current_line(74, ng0);
    t25 = ((char*)((ng2)));
    t26 = (t0 + 2520);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    *((int *)t10) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t2 = (t10 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 8);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4584);
    *((int *)t2) = 1;
    t3 = (t0 + 4280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4600);
    *((int *)t2) = 1;
    t3 = (t0 + 4280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t4 = (t0 + 6436);
    *((int *)t4) = t8;

LAB22:    t9 = (t0 + 6436);
    if (*((int *)t9) > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4056);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB23:    xsi_set_current_line(84, ng0);

LAB25:    xsi_set_current_line(85, ng0);
    t11 = (t0 + 1480U);
    t12 = *((char **)t11);
    memset(t10, 0, 8);
    t11 = (t12 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t11) == 0)
        goto LAB26;

LAB28:    t18 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t18) = 1;

LAB29:    t19 = (t10 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t10);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB30;

LAB31:
LAB32:    t2 = (t0 + 6436);
    t8 = *((int *)t2);
    *((int *)t2) = (t8 - 1);
    goto LAB22;

LAB26:    *((unsigned int *)t10) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(85, ng0);

LAB33:    xsi_set_current_line(86, ng0);
    t25 = ((char*)((ng2)));
    t26 = (t0 + 2680);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4616);
    *((int *)t2) = 1;
    t3 = (t0 + 4280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    goto LAB32;

LAB35:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4632);
    *((int *)t2) = 1;
    t3 = (t0 + 4280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB36:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_signed_divide(t10, 32, t3, 32, t2, 32);
    t4 = (t10 + 4);
    t5 = *((unsigned int *)t4);
    t6 = (~(t5));
    t7 = *((unsigned int *)t10);
    t8 = (t7 & t6);
    t9 = (t0 + 6440);
    *((int *)t9) = t8;

LAB37:    t11 = (t0 + 6440);
    if (*((int *)t11) > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 4056);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB38:    xsi_set_current_line(96, ng0);

LAB40:    xsi_set_current_line(97, ng0);
    t12 = (t0 + 1640U);
    t18 = *((char **)t12);
    memset(t27, 0, 8);
    t12 = (t18 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t18);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB44;

LAB42:    if (*((unsigned int *)t12) == 0)
        goto LAB41;

LAB43:    t19 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t19) = 1;

LAB44:    t25 = (t27 + 4);
    t20 = *((unsigned int *)t25);
    t21 = (~(t20));
    t22 = *((unsigned int *)t27);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB45;

LAB46:
LAB47:    t2 = (t0 + 6440);
    t8 = *((int *)t2);
    *((int *)t2) = (t8 - 1);
    goto LAB37;

LAB41:    *((unsigned int *)t27) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(97, ng0);

LAB48:    xsi_set_current_line(98, ng0);
    t26 = ((char*)((ng2)));
    t28 = (t0 + 2520);
    xsi_vlogvar_assign_value(t28, t26, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    *((int *)t10) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t2 = (t10 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 8);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 4648);
    *((int *)t2) = 1;
    t3 = (t0 + 4280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB49:    goto LAB47;

LAB50:    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_signed_divide(t10, 32, t3, 32, t2, 32);
    t4 = (t10 + 4);
    t5 = *((unsigned int *)t4);
    t6 = (~(t5));
    t7 = *((unsigned int *)t10);
    t8 = (t7 & t6);
    t9 = (t0 + 6444);
    *((int *)t9) = t8;

LAB51:    t11 = (t0 + 6444);
    if (*((int *)t11) > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 4056);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB82;
    goto LAB1;

LAB52:    xsi_set_current_line(109, ng0);

LAB54:    xsi_set_current_line(110, ng0);
    t12 = (t0 + 1640U);
    t18 = *((char **)t12);
    memset(t27, 0, 8);
    t12 = (t18 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t18);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB58;

LAB56:    if (*((unsigned int *)t12) == 0)
        goto LAB55;

LAB57:    t19 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t19) = 1;

LAB58:    memset(t29, 0, 8);
    t25 = (t27 + 4);
    t20 = *((unsigned int *)t25);
    t21 = (~(t20));
    t22 = *((unsigned int *)t27);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t25) != 0)
        goto LAB61;

LAB62:    t28 = (t29 + 4);
    t30 = *((unsigned int *)t29);
    t31 = *((unsigned int *)t28);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB63;

LAB64:    memcpy(t50, t29, 8);

LAB65:    t82 = (t50 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t50);
    t86 = (t85 & t84);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB77;

LAB78:
LAB79:    t2 = (t0 + 6444);
    t8 = *((int *)t2);
    *((int *)t2) = (t8 - 1);
    goto LAB51;

LAB55:    *((unsigned int *)t27) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t29) = 1;
    goto LAB62;

LAB61:    t26 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB62;

LAB63:    t34 = (t0 + 1480U);
    t35 = *((char **)t34);
    memset(t33, 0, 8);
    t34 = (t35 + 4);
    t36 = *((unsigned int *)t34);
    t37 = (~(t36));
    t38 = *((unsigned int *)t35);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB69;

LAB67:    if (*((unsigned int *)t34) == 0)
        goto LAB66;

LAB68:    t41 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t41) = 1;

LAB69:    memset(t42, 0, 8);
    t43 = (t33 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t33);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t43) != 0)
        goto LAB72;

LAB73:    t51 = *((unsigned int *)t29);
    t52 = *((unsigned int *)t42);
    t53 = (t51 & t52);
    *((unsigned int *)t50) = t53;
    t54 = (t29 + 4);
    t55 = (t42 + 4);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t54);
    t58 = *((unsigned int *)t55);
    t59 = (t57 | t58);
    *((unsigned int *)t56) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB74;

LAB75:
LAB76:    goto LAB65;

LAB66:    *((unsigned int *)t33) = 1;
    goto LAB69;

LAB70:    *((unsigned int *)t42) = 1;
    goto LAB73;

LAB72:    t49 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB73;

LAB74:    t62 = *((unsigned int *)t50);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t50) = (t62 | t63);
    t64 = (t29 + 4);
    t65 = (t42 + 4);
    t66 = *((unsigned int *)t29);
    t67 = (~(t66));
    t68 = *((unsigned int *)t64);
    t69 = (~(t68));
    t70 = *((unsigned int *)t42);
    t71 = (~(t70));
    t72 = *((unsigned int *)t65);
    t73 = (~(t72));
    t74 = (t67 & t69);
    t75 = (t71 & t73);
    t76 = (~(t74));
    t77 = (~(t75));
    t78 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t78 & t76);
    t79 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t79 & t77);
    t80 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t80 & t76);
    t81 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t81 & t77);
    goto LAB76;

LAB77:    xsi_set_current_line(110, ng0);

LAB80:    xsi_set_current_line(111, ng0);
    *((int *)t88) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t89 = (t88 + 4);
    *((int *)t89) = 0;
    t90 = (t0 + 2840);
    xsi_vlogvar_assign_value(t90, t88, 0, 0, 8);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4664);
    *((int *)t2) = 1;
    t3 = (t0 + 4280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB81;
    goto LAB1;

LAB81:    goto LAB79;

LAB82:    xsi_set_current_line(118, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_15085781391421257382_0738303446_init()
{
	static char *pe[] = {(void *)Always_56_0,(void *)Always_57_1,(void *)Initial_59_2};
	xsi_register_didat("work_m_15085781391421257382_0738303446", "isim/asyncfifo_tb_isim_beh.exe.sim/work/m_15085781391421257382_0738303446.didat");
	xsi_register_executes(pe);
}
