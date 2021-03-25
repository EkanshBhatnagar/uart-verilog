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
    work_m_00000000001221856008_4226527418_init();
    work_m_00000000001876050038_2554031534_init();
    work_m_00000000002141664438_4201001826_init();
    work_m_00000000003751692209_2161611290_init();
    work_m_00000000002725266380_0072948467_init();
    work_m_00000000003045304800_3265265049_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003045304800_3265265049");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
