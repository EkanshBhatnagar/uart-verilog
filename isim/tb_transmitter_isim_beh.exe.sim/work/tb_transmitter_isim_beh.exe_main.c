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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000641350337_2074104654_init();
    work_m_00000000004100273959_2422098934_init();
    work_m_00000000004147430016_1378862056_init();
    work_m_00000000000514095065_3149890987_init();
    work_m_00000000000408097642_1504477724_init();
    work_m_00000000003907948654_3335138231_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003907948654_3335138231");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
