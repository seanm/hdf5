/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Copyright by The HDF Group.                                               *
 * All rights reserved.                                                      *
 *                                                                           *
 * This file is part of HDF5.  The full HDF5 copyright notice, including     *
 * terms governing use, modification, and redistribution, is contained in    *
 * the COPYING file, which can be found at the root of the source code       *
 * distribution tree, or in https://support.hdfgroup.org/ftp/HDF5/releases.  *
 * If you do not have access to either file, you may request a copy from     *
 * help@hdfgroup.org.                                                        *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*
 * Programmer:  Quincey Koziol
 *              Monday, April  6, 2020
 *
 * Purpose:     This file contains declarations which define macros for the
 *              H5ES package.  Including this header means that the source file
 *              is part of the H5ES package.
 */
#ifndef H5ESmodule_H
#define H5ESmodule_H

/* Define the proper control macros for the generic FUNC_ENTER/LEAVE and error
 *      reporting macros.
 */
#define H5ES_MODULE
#define H5_MY_PKG      H5ES
#define H5_MY_PKG_ERR  H5E_EVENTSET
#define H5_MY_PKG_INIT YES

#endif /* H5ESmodule_H */
