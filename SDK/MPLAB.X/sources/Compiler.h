/*********************************************************************
 *
 *                  Compiler and hardware specific definitions
 *
 *********************************************************************
 * FileName:        Compiler.h
 * Dependencies:    None
 * Processor:       PIC18
 * Compiler:        Microchip C18 v3.40 or higher
 */


#ifndef __COMPILER_H
#define __COMPILER_H

// Include proper device header file
#if defined(__18CXX) && !defined(HI_TECH_C)	
	// PIC18 processor with Microchip C18 compiler
    #define COMPILER_MPLAB_C18
    #include <p18cxxx.h>
#else
	#error Unknown processor or compiler.  See Compiler.h
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Base RAM and ROM pointer types for given architecture
#if defined(COMPILER_MPLAB_C18)
	#define PTR_BASE		unsigned short
	#define ROM_PTR_BASE	unsigned short long
#endif

// Definitions that apply to all 8-bit products
// (PIC10, PIC12, PIC16, PIC18)
#if defined(__18CXX) || defined(COMPILER_HITECH_PICC)
	#define	__attribute__(a)

    #define FAR                         far

	// Microchip C18 specific defines
	#if defined(COMPILER_MPLAB_C18)
	    #define ROM                 	rom
	#endif
#endif



#endif
