/************************************************************************************
**                                                                                 **
**                               mcHF QRP Transceiver                              **
**                             K Atanassov - M0NKA 2014                            **
**                                                                                 **
**---------------------------------------------------------------------------------**
**                                                                                 **
**  File name:                                                                     **
**  Description:                                                                   **
**  Last Modified:                                                                 **
**  Licence:		For radio amateurs experimentation, non-commercial use only!   **
************************************************************************************/

#ifndef __FIR_1_8K_H
#define __FIR_1_8K_H

/**************************************************************
WinFilter version 0.8
http://www.winfilter.20m.com
akundert@hotmail.com

Filter type: Low Pass
Filter model: Raised Cosine
Roll Off Factor: 0.500000
Sampling Frequency: 48 KHz
Cut Frequency: 1.800000 KHz
Coefficents Quantization: float
***************************************************************/
const float Fir1p8k[] =
{
		 -0.00426819364143772060,
		        -0.00597439843648166210,
		        -0.00763055542185103740,
		        -0.00908405765771721180,
		        -0.01016593456122973600,
		        -0.01070053841743971900,
		        -0.01051687408464730900,
		        -0.00946086177749527230,
		        -0.00740769165783349260,
		        -0.00427335758554678140,
		        -0.00002445525440020314,
		        0.00531459894523010620,
		        0.01165762971415022100,
		        0.01885654143712867100,
		        0.02670517545498869700,
		        0.03494714310266955300,
		        0.04328729807517890700,
		        0.05140623264250578100,
		        0.05897694040337997400,
		        0.06568260392707771200,
		        0.07123435483872585200,
		        0.07538782704221719300,
		        0.07795738458131895600,
		        0.07882705078156765400,
		        0.07795738458131895600,
		        0.07538782704221719300,
		        0.07123435483872585200,
		        0.06568260392707771200,
		        0.05897694040337997400,
		        0.05140623264250578100,
		        0.04328729807517890700,
		        0.03494714310266955300,
		        0.02670517545498869700,
		        0.01885654143712867100,
		        0.01165762971415022100,
		        0.00531459894523010620,
		        -0.00002445525440020314,
		        -0.00427335758554678140,
		        -0.00740769165783349260,
		        -0.00946086177749527230,
		        -0.01051687408464730900,
		        -0.01070053841743971900,
		        -0.01016593456122973600,
		        -0.00908405765771721180,
		        -0.00763055542185103740,
		        -0.00597439843648166210,
		        -0.00426819364143772060,
		        -0.00264067411855023690
};

#endif