#pragma once
/******************************************************************************/
/* File   : ServiceIpduM_core.hpp                                                    */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_ServiceIpduM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICEIPDUM_CORE_FUNCTIONALITIES                                             \
              FUNC(void, SERVICEIPDUM_CODE) dummy                         (void);     \

#define SERVICEIPDUM_CORE_FUNCTIONALITIES_VIRTUAL                                     \
      virtual FUNC(void, SERVICEIPDUM_CODE) dummy                         (void) = 0; \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_ServiceIpduM_Functionality{
   public:
      SERVICEIPDUM_CORE_FUNCTIONALITIES_VIRTUAL
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

