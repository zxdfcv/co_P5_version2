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
    work_m_00000000002155191593_3527808377_init();
    work_m_00000000004156649186_0992325708_init();
    work_m_00000000000589965032_3935768532_init();
    work_m_00000000002857546734_3383896982_init();
    work_m_00000000000874832579_0833183191_init();
    work_m_00000000001378847507_3037376393_init();
    work_m_00000000003405669969_0805627395_init();
    work_m_00000000003784510532_4127636709_init();
    work_m_00000000001666020337_3092946469_init();
    work_m_00000000001865495833_0981899902_init();
    work_m_00000000003478682563_2319802268_init();
    work_m_00000000002451667142_1739518194_init();
    work_m_00000000002273863142_4190013900_init();
    work_m_00000000001592792273_3761551235_init();
    work_m_00000000001126651393_2725559894_init();
    work_m_00000000002865743226_0972529920_init();
    work_m_00000000002903844489_4195689644_init();
    work_m_00000000000826703038_3915667111_init();
    work_m_00000000002698775005_2510865608_init();
    work_m_00000000001290389714_2748599814_init();
    work_m_00000000003351399263_0413476095_init();
    work_m_00000000003146329779_1998111899_init();
    work_m_00000000000646853861_2795948001_init();
    work_m_00000000000810839967_0010801604_init();
    work_m_00000000000367326478_1979470459_init();
    work_m_00000000004214699233_3771887874_init();
    work_m_00000000002869398318_3027548060_init();
    work_m_00000000001481321991_3877310806_init();
    work_m_00000000002047498008_1985558087_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_1985558087");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
