/*******************************************************************************
 * Copyright (c) 2019, 2020 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at http://eclipse.org/legal/epl-2.0
 * or the Apache License, Version 2.0 which accompanies this distribution
 * and is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following Secondary
 * Licenses when the conditions for such availability set forth in the
 * Eclipse Public License, v. 2.0 are satisfied: GNU General Public License,
 * version 2 with the GNU Classpath Exception [1] and GNU General Public
 * License, version 2 with the OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0 OR GPL-2.0 WITH Classpath-exception-2.0 OR LicenseRef-GPL-2.0 WITH Assembly-exception
 *******************************************************************************/

/*
 * This file will be included within an enum. Only comments and enumerator
 * definitions are permitted.
 */


   bad,              // Illegal Opcode
// brd,              // Byte-Reverse Doubleword
// brh,              // Byte-Reverse Halfword
// brw,              // Byte-Reverse Word
   add,              // Add
   add_r,            // Add Rc=1
   addc,             // Add carrying
   addc_r,           // Add carrying Rc=1
   addco,            // Add carrying setting overflow
   addco_r,          // Add carrying setting overflow Rc=1
   adde,             // Add extended
   adde_r,           // Add extended Rc=1
   addeo,            // Add extended setting overflow
   addeo_r,          // Add extended setting overflow Rc=1
   addi,             // Add immediate
   addic,            // Add immediate carrying
   addic_r,          // Add immediate carrying Rc=1
   addi2,            // Add imm (carry bit set only if record form)
   addi2_r,          // Add imm (carry bit set only if record form) Rc=1
   addis,            // Add immediate shifted
   addme,            // Add to minus one extended
   addme_r,          // Add to minus one extended Rc=1
   addmeo,           // Add to minus one extended setting overflow
   addmeo_r,         // Add to minus one extended setting overflow Rc=1
   addo,             // Add setting overflow
   addo_r,           // Add setting overflow Rc=1
   addpcis,          // Add PC Immediate Shifted
   addze,            // Add to zero extended
   addze_r,          // Add to zero extended Rc=1
   addzeo,           // Add to zero extended setting overflow
   addzeo_r,         // Add to zero extended setting overflow Rc=1
   AND,              // AND
   and_r,            // AND Rc=1
   andc,             // AND with complement
   andc_r,           // AND with complement Rc=1
// andcxor,          // AND with Complement & XOR
   addex,            // Add Extended using alternate carry bits
   addex_r,          // Add Extended using alternate carry bits Rc=1
   andi_r,           // AND immediate
   andis_r,          // AND immediate shifted
   b,                // Unconditional branch
   bctr,             // Branch to count register
   bctrl,            // Branch to count register and link
   bdnz,             // Branch if CTR!=0 after decrementing it
   bdz,              // Branch if CTR==0 after decrementing it
   beq,              // Branch if equal
   beql,             // Branch and link if equal
   bfctr,            // Branch false to count register
   bge,              // Branch if greater than or equal
   bgel,             // Branch and link if greater than or equal
   bgt,              // Branch if greater than
   bgtl,             // Branch and link if greater than
   bl,               // Branch and link
   ble,              // Branch if less than or equal
   blel,             // Branch and link if less than or equal
   blt,              // Branch if less than
   bltl,             // Branch and link if less than
   blr,              // Branch to link register
   blrl,             // Branch to link register and link
   bne,              // Branch if not equal
   bnel,             // Branch and link if not equal
   bnun,             // Branch if not unordered
   btctr,            // Branch true to count register
   bun,              // Branch if unordered
   beqlr,            // Branch to link register if equal
   bgelr,            // Branch to link register if greater than or equal
   bgtlr,            // Branch to link register if greater than
   blelr,            // Branch to link register if less than or equal
   bltlr,            // Branch to link register if less than
   bnelr,            // Branch to link register if not equal
   cmp4,             // Compare word algebraic
   cmp8,             // Compare dword algebraic
   cmpi4,            // Compare word immediate algebraic
   cmpi8,            // Compare dword immediate algebraic
   cmpl4,            // Compare word logical
   cmpl8,            // Compare dword logical
   cmpli4,           // Compare word immediate logical
   cmpli8,           // Compare dword immediate logical
   cmprb,            // Compare Ranged Byte
   cmpeqb,           // Compare Equal Byte
   cntlzd,           // Count leading zeros dword
   cntlzd_r,         // Count leading zeros dword Rc=1
   cntlzw,           // Count leading zeros word
   cntlzw_r,         // Count leading zeros word Rc=1
// cnttzw,           // Count Trailing Zeros Word
// cnttzw_r,         // Count Trailing Zeros Word Rc=1
// cnttzd,           // Count Trailing Zeros Dword
// cnttzd_r,         // Count Trailing Zeros Dword Rc=1
   crand,            // Condition register AND
   crandc,           // Condition register AND with complement
   creqv,            // Condition register equivalent
   crnand,           // Condition register NAND
   crnor,            // Condition register NOR
   cror,             // Condition register OR
   crorc,            // Condition register OR with complement
   crxor,            // Condition register XOR
   dadd,             // Add (DFP64)
   dadd_r,           // Add (DFP64) Rc=1
   darn,             // Deliver a random number
   dcbt,             // Data cache block touch
   dcbtst,           // Data cache block touch for store
   dcbtstt,          // Data cache block touch for store - transient
   dcbtt,            // Data cache block touch - transient
   dcbz,             // Data cache block zero
   dcffix,           // Convert From Fixed (DFP64)
   dcffix_r,         // Convert From Fixed (DFP64) Rc=1
   dcffixq,          // Convert From Fixed (DFP128)
   dcffixq_r,        // Convert From Fixed (DFP128) Rc=1
   dcmpu,            // Unordered Compare (DFP64)
   dctfix,           // Convert to Fixed (DFP64)
   dctfix_r,         // Convert to Fixed (DFP64) Rc=1
   ddedpd,           // Decode DPD to BCD (DFP64)
   ddedpd_r,         // Decode DPD to BCD (DFP64) Rc=1
   ddiv,             // Divide (DFP64)
   ddiv_r,           // Divide (DFP64) Rc=1
   denbcdu,          // Encode Unsigned BCD to DFP (DFP64)
   denbcdu_r,        // Encode Unsigned BCD to DFP (DFP64) Rc=1
   divd,             // Divide dword
   divd_r,           // Divide dword Rc=1
   diex,             // Insert Biased Exponent (DFP64)
   diex_r,           // Insert Biased Exponent (DFP64) Rc=1
   divdo,            // Divide dword setting overflow
   divdo_r,          // Divide dword setting overflow Rc=1
   divdu,            // Divide dword unsigned
   divdu_r,          // Divide dword unsigned Rc=1
   divduo,           // Divide dword unsigned setting overflow
   divduo_r,         // Divide dword unsigned setting overflow Rc=1
   divw,             // Divide word
   divw_r,           // Divide word Rc=1
   divwo,            // Divide word setting overflow
   divwo_r,          // Divide word setting overflow Rc=1
   divwu,            // Divide word unsigned
   divwu_r,          // Divide word unsigned Rc=1
   divwuo,           // Divide word unsigned setting overflow
   divwuo_r,         // Divide word unsigned setting overflow Rc=1
   dmul,             // Multiply (DFP64)
   dmul_r,           // Multiply (DFP64) Rc=1
   dqua,             // Quantize (DFP64)
   dqua_r,           // Quantize (DFP64) Rc=1
   drrnd,            // Reround (DFP64)
   drrnd_r,          // Reround (DFP64) Rc=1
   drdpq,            // Round To DFP64 (DFP128)
   drdpq_r,          // Round To DFP64 (DFP128) Rc=1
   dsub,             // Subtract (DFP64)
   dsub_r,           // Subtract (DFP64) Rc=1
   dtstdc,           // Test Data Class (DFP64)
   dtstdg,           // Test Data Group (DFP64)
// dtstsfi,          // DFP Test Significance Immediate
// dtstsfiq,         // DFP Test Significance Immediate Quad
   dxex,             // Extract Biased Exponent (DFP64)
   dxex_r,           // Extract Biased Exponent (DFP64) Rc=1
   eieio,            // Enforce in order execution of I/O
   eqv,              // Equivalent
   eqv_r,            // Equivalent Rc=1
   extsb,            // Extend sign byte
   extsb_r,          // Extend sign byte Rc=1
   extsh,            // Extend sign half word
   extsh_r,          // Extend sign half word Rc=1
   extsw,            // Extend sign word
   extsw_r,          // Extend sign word Rc=1
   extswsli,         // Extend Sign Word & Shift Left Immediate
   extswsli_r,       // Extend Sign Word & Shift Left Immediate Rc=1
   fabs,             // Floating absolute value
   fadd,             // Floating add
   fadds,            // Floating add single
   fcfid,            // Floating convert from integer dword
   fcfidu,           // Floating convert from integer dword unsigned
   fcfids,           // Floating convert from integer dword single
   fcfidus,          // Floating convert from integer dword unsigned single
   fcmpo,            // Floating compare ordered
   fcmpu,            // Floating compare unordered
   fcpsgn,           // Floating copy sign
   fctid,            // Floating convert to integer dword
   fctidz,           // Floating convert to integer dword round toward zero
   fctiw,            // Floating convert to integer word
   fctiwz,           // Floating convert to integer word round toward zero
   fdiv,             // Floating divide double
   fdivs,            // Floating divide single
   fmadd,            // Floating multiply add double
   fmadds,           // Floating multiply add single
   fmr,              // Floating move register
   fmsub,            // Floating multiply subtract double
   fmsubs,           // Floating multiply subtract single
   fmul,             // Floating multiply double
   fmuls,            // Floating multiply single
   fnabs,            // Floating negative absolute value
   fneg,             // Floating negate
   fnmadd,           // Floating negative multiply add double
   fnmadds,          // Floating negative multiply add single
   fnmsub,           // Floating negative multiply subtract double
   fnmsubs,          // Floating negative multiply subtract single
   fres,             // Floating reciprocal estimate single
   frim,             // Floating round to minus (floor) double
   frin,             // Floating round to nearest double
   frip,             // Floating round to plus (ceil) double
   frsp,             // Floating round to single
   frsqrte,          // Floating reciprocal square root estimate
   fsel,             // Floating select
   fsqrt,            // Floating square root double
   fsqrts,           // Floating square root single
   fsub,             // Floating subtract double
   fsubs,            // Floating subtract single
   isync,            // Instruction synchronize
   lbz,              // Load byte and zero extend
   lbzu,             // Load byte and zero extend with update
   lbzux,            // Load byte and zero extend with update indexed
   lbzx,             // Load byte and zero extend indexed
   ld,               // Load dword
   ldarx,            // Load dword and reserve indexed
   ldmx,             // Load dword monitored indexed
   lwzmx,            // Load word and zero monitored indexed
   ldu,              // Load dword with update
   ldux,             // Load dword with update indexed
   ldx,              // Load dword indexed
   lfd,              // Load floating point double
   lfdp,             // Load floating point double pair
   lfdu,             // Load floating point double with update
   lfdux,            // Load floating point double with update indexed
   lfdx,             // Load floating point double indexed
   lfdpx,            // Load floating point double pair indexed
   lfiwax,           // Load floating point as integer word algebraic
   lfiwzx,           // Load floating point as integer word and zero indexed
   lfs,              // Load floating short
   lfsu,             // Load floating short with update
   lfsux,            // Load floating short with update indexed
   lfsx,             // Load floating short indexed
   lha,              // Load half word algebraic
   lhau,             // Load half word algebraic
   lhaux,            // Load half word algebraic
   lhax,             // Load half word algebraic
   lhbrx,            // Load half word byte reversed indexed
   lhz,              // Load half word and zero extend
   lhzu,             // Load half word and zero extend with update
   lhzux,            // Load half word and zero extend with update indexed
   lhzx,             // Load half word and zero extend indexed
   li,               // Load immediate
   lis,              // Load immediate shifted
   lmw,              // Load multiple word
   lswi,             // Load string word immediate
   lswx,             // Load string word indexed
   lwa,              // Load word algebraic
   lwarx,            // Load word and reserve indexed
   lwaux,            // Load word algebraic with update indexed
   lwax,             // Load word algebraic indexed
   lwbrx,            // Load word byte reverse indexed
   ldbrx,            // Load doubleword byte reverse indexed
   lwsync,           // Lightweight Synchronize
   lwz,              // Load word and zero extend
   lwzu,             // Load word and zero extend with update
   lwzux,            // Load word and zero with update indexed
   lwzx,             // Load word and zero extend indexed
// maddhd,           // Multiply-Add High Dword
// maddhdu,          // Multiply-Add High Dword Unsigned
   maddld,           // Multiply-Add Low Dword
   mcrf,             // Move condition register field
   mcrfs,            // Move to condition register field from FPSCR
   mcrxr,            // Move to condition register field from XER
// mcrxrx,           // Move XER to CR Extended
   mfcr,             // Move from condition register to gpr
   mfocrf,           // Move from one condition register field to gpr (XFX-form)
   mfctr,            // Move from count register to gpr
   mffgpr,           // Move Floating-Point From GPR
   mffs,             // Move from FPSCR to gpr
   mflr,             // Move from link register to gpr
   mfmsr,            // Move from machine state register
   mfspr,            // Move from special purpose register to gpr
   mftexasr,         // Move from transaction exception and summary register to gpr
   mftexasru,        // Move from upper 32 bits of transaction exception and summary register to gpr
   mftgpr,           // Move Floating-Point To GPR
// mfvsrld,          // Move from VSR lower Dword
   modud,            // Modulo unsigned DWord
   modsd,            // Modulo signed DWord
   moduw,            // Modulo unsigned word
   modsw,            // Modulo signed word
   mr,               // Register copy
// msgsync,          // Message synchronize
   mtcrf,            // Move to condition register fields from gpr
   mtctr,            // Move to count register from gpr
   mtfsb0,           // Move to FPSCR bit 0
   mtfsb1,           // Move to FPSCR bit 1
   mtfsfl,           // Move to FPSCR fields L=1
   mtfsfl_r,         // Move to FPSCR fields L=1 Rc=1
   mtfsf,            // Move to FPSCR fields L=0/W=0
   mtfsf_r,          // Move to FPSCR fields L=0/W=0 Rc=1
   mtfsfw,           // Move to FPSCR fields L=0/W=1
   mtfsfw_r,         // Move to FPSCR fields L=0/W=1 Rc=1
   mtfsfi,           // Move to FPSCR field immediate
   mtfsfi_r,         // Move to FPSCR field immediate Rc=1
   mtlr,             // Move to link register from gpr
   mtmsr,            // Move to machine state register
   mtspr,            // Move to special purpose register
   mfvsrd,           // Move From VSR Doubleword
   mfvsrwz,          // Move From VSR Word and Zero
   mtvsrd,           // Move To VSR Doubleword
   mtvsrwz,          // Move To VSR Word and Zero
   mtvsrwa,          // Move To VSR Word and Zero Sign-Extend
// mtvsrdd,          // Move to VSR double Dword
// mtvsrws,          // Move to VSR word & wplat
   mulhd,            // Multiply high dword
   mulhd_r,          // Multiply high dword Rc=1
   mulhdu,           // Multiply high dword unsigned
   mulhdu_r,         // Multiply high dword unsigned Rc=1
   mulhw,            // Multiply high word
   mulhw_r,          // Multiply high word Rc=1
   mulhwu,           // Multiply high word unsigned
   mulhwu_r,         // Multiply high word unsigned Rc=1
   mulld,            // Multiply low dword
   mulld_r,          // Multiply low dword Rc=1
   mulldo,           // Multiply low dword setting overflow
   mulldo_r,         // Multiply low dword setting overflow Rc=1
   mulli,            // Multiply low immediate
   mullw,            // Multiply low word
   mullw_r,          // Multiply low word Rc=1
   mullwo,           // Multiply low word setting overflow
   mullwo_r,         // Multiply low word setting overflow Rc=1
   nand,             // NAND
   nand_r,           // NAND Rc=1
   neg,              // Negate
   neg_r,            // Negate Rc=1
   nego,             // Negate setting overflow
   nego_r,           // Negate setting overflow Rc=1
   nor,              // NOR
   nor_r,            // NOR Rc=1
   OR,               // OR
   or_r,             // OR Rc=1
   orc,              // OR with complement
   orc_r,            // OR with complement Rc=1
   ori,              // OR immediate
   oris,             // OR immediate shifted
   popcntd,          // Population count dword
   popcntw,          // Population count word
   rfi,              // Return from interrupt
   rldcl,            // Rotate left dword then clear left
   rldcl_r,          // Rotate left dword then clear left Rc=1
   rldcr,            // Rotate left dword then clear right
   rldcr_r,          // Rotate left dword then clear right Rc=1
   rldic,            // Rotate left dword immediate then clear
   rldic_r,          // Rotate left dword immediate then clear Rc=1
   rldicl,           // Rotate left dword immediate then clear left
   rldicl_r,         // Rotate left dword immediate then clear left Rc=1
   rldicr,           // Rotate left dword immediate then clear right
   rldicr_r,         // Rotate left dword immediate then clear right Rc=1
   rldimi,           // Rotate left dword immediate then mask insert
   rldimi_r,         // Rotate left dword immediate then mask insert Rc=1
   rlwimi,           // Rotate left word immediate then mask insert
   rlwimi_r,         // Rotate left word immediate then mask insert Rc=1
   rlwinm,           // Rotate left word immediate then AND with mask
   rlwinm_r,         // Rotate left word immediate then AND with mask Rc=1
   rlwnm,            // Rotate left word then AND with mask
   rlwnm_r,          // Rotate left word then AND with mask Rc=1
   setb,             // Set Boolean
// slbsync,          // SLB Synchronize
   sld,              // Shift left dword
   sld_r,            // Shift left dword Rc=1
   slw,              // Shift left word
   slw_r,            // Shift left word Rc=1
   srad,             // Shift right algebraic dword
   srad_r,           // Shift right algebraic dword Rc=1
   sradi,            // Shift right algebraic dword immediate
   sradi_r,          // Shift right algebraic dword immediate Rc=1
   sraw,             // Shift right algebraic word
   sraw_r,           // Shift right algebraic word Rc=1
   srawi,            // Shift right algebraic word immediate
   srawi_r,          // Shift right algebraic word immediate Rc=1
   srd,              // Shift right dword
   srd_r,            // Shift right dword Rc=1
   srw,              // Shift right word
   srw_r,            // Shift right word Rc=1
   stb,              // Store byte
   stbu,             // Store byte with update
   stbux,            // Store byte with update indexed
   stbx,             // Store byte indexed
   std,              // Store dword
   stdcx_r,          // Store word conditional indexed
   stdu,             // Store dword with update
   stdux,            // Store dword with update indexed
   stdx,             // Store dword indexed
   stfd,             // Store float double
   stfdp,            // Store float double pair
   stfdu,            // Store float double with update
   stfdux,           // Store float double with update indexed
   stfdx,            // Store float double indexed
   stfdpx,           // Store float double pair indexed
   stfiwx,           // Store float as integer word indexed
   stfs,             // Store float single
   stfsu,            // Store float single with update
   stfsux,           // Store float single with update indexed
   stfsx,            // Store float single indexed
   sth,              // Store half word
   sthbrx,           // Store half word byte reversed indexed
   sthu,             // Store half word with update
   sthux,            // Store half word with update indexed
   sthx,             // Store half word indexed
   stmw,             // Store multiple word
// stop,             // The thread is placed into power-saving mode and execution is stopped
   stswi,            // Store string word immediate
   stswx,            // Store string word indexed
   stw,              // Store word
   stwbrx,           // Store word byte reverse indexed
   stdbrx,           // Store doubleword byte reverse indexed
   stwcx_r,          // Store word conditional indexed
   stwu,             // Store word with update
   stwux,            // Store word with update indexed
   stwx,             // Store word indexed
   subf,             // Subtract from
   subf_r,           // Subtract from Rc=1
   subfc,            // Subtract from carrying
   subfc_r,          // Subtract from carrying Rc=1
   subfco,           // Subtract from carrying setting overflow
   subfco_r,         // Subtract from carrying setting overflow Rc=1
   subfe,            // Subtract from extended
   subfe_r,          // Subtract from extended Rc=1
   subfeo,           // Subtract from extended setting overflow
   subfeo_r,         // Subtract from extended setting overflow Rc=1
   subfic,           // Subtract from immediate carrying
   subfme,           // Subtract from minus one extended
   subfme_r,         // Subtract from minus one extended Rc=1
   subfmeo,          // Subtract from minus one extended setting overflow
   subfmeo_r,        // Subtract from minus one extended setting overflow Rc=1
   subfze,           // Subtract from zero extended
   subfze_r,         // Subtract from zero extended Rc=1
   subfzeo,          // Subtract from zero extended setting overflow
   subfzeo_r,        // Subtract from zero extended setting overflow Rc=1
   sync,             // Synchronize
   tabort_r,         // Transactional Memory abort
   tabortdeq_r,      // Transactional Memory abort dword if equal
   tabortdeqi_r,     // Transactional Memory abort dword if equal to immediate value
   tabortdge_r,      // Transactional Memory abort dword if greater than or equal to
   tabortdgei_r,     // Transactional Memory abort dword if greater than or equal to immediate
   tabortdgt_r,      // Transactional Memory abort dword if greater than
   tabortdgti_r,     // Transactional Memory abort dword if greater than immediate
   tabortdle_r,      // Transactional Memory abort dword if less than or equal to
   tabortdlei_r,     // Transactional Memory abort dword if less than or equal to immediate
   tabortdlge_r,     // Transactional Memory abort dword if logically greater than or equal to
   tabortdlgei_r,    // Transactional Memory abort dword if logically greater than or equal to immediate
   tabortdlgt_r,     // Transactional Memory abort dword if logically greater than
   tabortdlgti_r,    // Transactional Memory abort dword if logically greater than immediate
   tabortdlle_r,     // Transactional Memory abort dword if logically less than or equal to
   tabortdllei_r,    // Transactional Memory abort dword if logically less than or equal to immediate
   tabortdllt_r,     // Transactional Memory abort dword if logically less than
   tabortdllti_r,    // Transactional Memory abort dword if logically less than immediate
   tabortdlt_r,      // Transactional Memory abort dword if less than
   tabortdlti_r,     // Transactional Memory abort dword if less than immediate
   tabortdneq_r,     // Transactional Memory abort dword if not equal to
   tabortdneqi_r,    // Transactional Memory abort dword if not equal to immediate
   tabortweq_r,      // Transactional Memory abort if equal
   tabortweqi_r,     // Transactional Memory abort if equal to immediate value
   tabortwge_r,      // Transactional Memory abort if greater than or equal to
   tabortwgei_r,     // Transactional Memory abort if greater than or equal to immediate
   tabortwgt_r,      // Transactional Memory abort if greater than
   tabortwgti_r,     // Transactional Memory abort if greater than immediate
   tabortwle_r,      // Transactional Memory abort if less than or equal to
   tabortwlei_r,     // Transactional Memory abort if less than or equal to immediate
   tabortwlge_r,     // Transactional Memory abort if logically greater than or equal to
   tabortwlgei_r,    // Transactional Memory abort if logically greater than or equal to immediate
   tabortwlgt_r,     // Transactional Memory abort if logically greater than
   tabortwlgti_r,    // Transactional Memory abort if logically greater than immediate
   tabortwlle_r,     // Transactional Memory abort if logically less than or equal to
   tabortwllei_r,    // Transactional Memory abort if logically less than or equal to immediate
   tabortwllt_r,     // Transactional Memory abort if logically less than
   tabortwllti_r,    // Transactional Memory abort if logically less than immediate
   tabortwlt_r,      // Transactional Memory abort if less than
   tabortwlti_r,     // Transactional Memory abort if less than immediate
   tabortwneq_r,     // Transactional Memory abort if not equal to
   tabortwneqi_r,    // Transactional Memory abort if not equal to immediate
   tbegin_r,         // Begin transaction
   tbeginro_r,       // Begin roll-back only transaction
   tend_r,           // End transaction (supports nesting)
   tendall_r,        // End transaction
   tdeq,             // Trap dword if equal
   tdeqi,            // Trap dword if equal to immediate value
   tdge,             // Trap dword if greater than or equal to
   tdgei,            // Trap dword if greater than or equal to immediate value
   tdgt,             // Trap dword if greater than
   tdgti,            // Trap dword if greater than immediate value
   tdle,             // Trap dword if less than or equal to
   tdlei,            // Trap dword if less than or equal to immediate value
   tdlge,            // Trap dword if logically greater than or equal to
   tdlgei,           // Trap dword if logically greater than or equal to immediate value
   tdlgt,            // Trap dword if logically greater than
   tdlgti,           // Trap dword if logically greater than immediate value
   tdlle,            // Trap dword if logically less than or equal to
   tdllei,           // Trap dword if logically less than or equal to immediate value
   tdllt,            // Trap dword if logically less than
   tdllti,           // Trap dword if logically less than immediate value
   tdlt,             // Trap dword if less than
   tdlti,            // Trap dword if less than immediate value
   tdneq,            // Trap dword if not equal
   tdneqi,           // Trap dword if not equal to immediate value
   trap,             // Unconditional trap
   tweq,             // Trap word if equal
   tweqi,            // Trap word if equal to immediate value
   twge,             // Trap word if greater than or equal to
   twgei,            // Trap word if greater than or equal to immediate value
   twgt,             // Trap word if greater than
   twgti,            // Trap word if greater than immediate value
   twle,             // Trap word if less than or equal to
   twlei,            // Trap word if less than or equal to immediate value
   twlge,            // Trap word if logically greater than or equal to
   twlgei,           // Trap word if logically greater than or equal to immediate value
   twlgt,            // Trap word if logically greater than
   twlgti,           // Trap word if logically greater than immediate value
   twlle,            // Trap word if logically less than or equal to
   twllei,           // Trap word if logically less than or equal to immediate value
   twllt,            // Trap word if logically less than
   twllti,           // Trap word if logically less than immediate value
   twlt,             // Trap word if less than
   twlti,            // Trap word if less than immediate value
   twneq,            // Trap word if not equal
   twneqi,           // Trap word if not equal to immediate value
   XOR,              // XOR
   xor_r,            // XOR Rc=1
// xor3,             // XOR 3-way
   xori,             // XOR immediate
   xoris,            // XOR immediate shifted
   nop,              // NoOp (ori)
   genop,            // Group Ending NoOp (ori)
   fence,            // Fence
   shdfence,         // Scheduling Fence
   ret,              // Return
// rxor,             // Rotate & XOR
   wrtbar,           // Write barrier directive
   proc,             // Entry to the method
   dd,               // define word
   assocreg,         // Associate real registers with Virtual registers.
   vgdnop,           // Virtual Guard NOP instruction
   probenop,         // Probe NOP (for RI)
   iflong,           // compare and branch long
   setblong,         // compare long and set boolean
   setbool,          // compare and set boolean (int or simple float)
   setbflt,          // compare float and set boolean (complex float)
   lcmp,             // compare long and set result -1,0,1
   flcmpl,           // compare float and set result -1(less,unordered),0(equal),1(greater)
   flcmpg,           // compare float and set result -1(less),0(equal),1(greater,unordered)
   idiv,             // integer divide
   ldiv,             // long divide for 64 bit target
   irem,             // integer remainder
   lrem,             // long remainder for 64 bit target
   d2i,              // converts from double to integer
   d2l,              // converts from double to long
   iternary,         // ternary evaluator
// bcdcpsgn_r,       // Decimal copySign & record
// bcdcfn_r,         // Decimal convert from national & record
// bcdcfsq_r,        // Decimal convert from signed qword & record
// bcdcfz_r,         // Decimal convert from zoned & record
// bcdctn_r,         // Decimal convert to national & record
// bcdctsq_r,        // Decimal convert to signed qword & record
// bcdctz_r,         // Decimal convert to zoned & record
// bcds_r,           // Decimal shift & record
// bcdsetsgn_r,      // Decimal set Sign & record
// bcdsr_r,          // Decimal shift & round & record
// bcdtrunc_r,       // Decimal truncate & record
// bcdus_r,          // Decimal unsigned shift & record
// bcdutrunc_r,      // Decimal unsigned truncate & record
   lvsl,             // Load vector for shift left
   lvsr,             // Load vector for shift right
   lvx,              // Load vector indexed
   lvebx,            // Load vector element byte indexed
   lvehx,            // Load vector element halfword indexed
   lvewx,            // Load vector element word indexed
// mtvscr,           // Move To VSCR
// mfvscr,           // Move From VSCR
   stvx,             // store vector indexed
   stvebx,           // store vector element byte indexed
   stvehx,           // store vector element halfword indexed
   stvewx,           // store vector element word indexed
// vabsdub,          // vector absolute difference unsigned byte
// vabsduh,          // vector absolute difference unsigned hword
// vabsduw,          // vector absolute difference unsigned word
   vand,             // vector logical and
   vandc,            // vector logical and with complement
// vclzlsbb,         // vector count leading zero least-significant bits byte
// vctzlsbb,         // vector count trailing zero least-significant bits byte
// vctzb,            // vector count trailing zeros Byte
// vctzh,            // vector count trailing zeros Hword
// vctzw,            // vector count trailing zeros Word
// vctzd,            // vector count trailing zeros Dword
// vextractub,       // vector extract unsigned Byte
// vextractuh,       // vector extract unsigned Hword
// vextractuw,       // vector extract unsigned Word
// vextractd,        // vector extract Dword
// vextsb2w,         // vector extend sign byte to Word
// vextsh2w,         // vector extend sign hword to Word
// vextsb2d,         // vector extend sign byte to Dword
// vextsh2d,         // vector extend sign hword to Dword
// vextsw2d,         // vector extend sign word to Dword
// vextublx,         // vector extract unsigned byte left-indexed
// vextuhlx,         // vector extract unsigned hword left-indexed
// vextuwlx,         // vector extract unsigned word left-indexed
// vextubrx,         // vector extract unsigned byte right-indexed
// vextuhrx,         // vector extract unsigned hword right-indexed
// vextuwrx,         // vector extract unsigned word right-indexed
// vgbbd,            // Vector Gather Bits by Byte by Dword
// vinsertb,         // vector insert Byte
// vinserth,         // vector insert Hword
// vinsertw,         // vector insert Word
// vinsertd,         // vector insert Dword
// vmaxud,           // Vector Maximum Unsigned Dword
// vminsd,           // Vector Minimum Signed Dword
// vmul10cuq,        // vector multiply-by-10 & write carry unsigned qword
// vmul10ecuq,       // vector multiply-by-10 extended & write carry unsigned qword
// vmul10uq,         // vector multiply-by-10 unsigned qword
// vmul10euq,        // vector multiply-by-10 extended unsigned qword
// vmulesw,          // Vector Multiply Even Signed Word
// vmuleuw,          // Vector Multiply Even Unsigned Word
// vmulosw,          // Vector Multiply Odd Signed Word
// vmulouw,          // Vector Multiply Odd Unsigned Word
// vnegw,            // vector negate word
// vnegd,            // vector negate DWord
// vprtybw,          // vector parity byte word
// vprtybd,          // vector parity byte DWord
// vprtybq,          // vector parity byte qword
// vmr,              // vector move register
   vor,              // vector or
// vorc,             // Vector Logical OR with Complement
   vxor,             // vector xor
// vnand,            // Vector Logical NAND
// vncipher,         // Vector AES Inverse Cipher
// vncipherlast,     // Vector AES Inverse Cipher Last
   vnor,             // vector nor
   vperm,            // vector permute
// vpermr,           // vector permute right-indexed
// vbpermd,          // vector bit permute DWord
   vbpermq,          // Vector Bit Permute Qword
// vrld,             // Vector Rotate Left Dword
// vsbox,            // Vector AES SubBytes
   vsel,             // vector conditional select
// vsld,             // Vector Shift Left Dword
// vsrad,            // Vector Shift Right Algebraic Dword
// vsrd,             // Vector Shift Right Dword
// vsubcuq,          // Vector Subtract & write Carry Unsigned Qword
// vsubecuq,         // Vector Subtract Extended & write Carry Unsigned Qword
// vsubeuqm,         // Vector Subtract Extended Unsigned Qword Modulo
// vsubuqm,          // Vector Subtract Unsigned Qword Modulo
   vsumsws,          // vector sum across signed word saturate
   vsum2sws,         // vector sum across partial signed word saturate
   vsum4sbs,         // vector sum across partial signed byte saturate
   vsum4shs,         // vector sum across partial signed halfword saturate
   vsum4ubs,         // vector sum across partial unsigned byte saturate
   vspltb,           // vector splat byte
   vsplth,           // vector splat halfword
   vspltw,           // vector splat word
   vspltisb,         // vector splat immediate signed byte
   vspltish,         // vector splat immediate signed halfword
   vspltisw,         // vector splat immediate signed word
   vsl,              // vector shift left
   vslb,             // vector shift left byte
   vsldoi,           // vector shift left double by octet immediate
   vslh,             // vector shift left halfword
   vslo,             // vector shift left by octet
   vslw,             // vector shift left word
   vsr,              // vector shift right
   vsrab,            // vector shift right algebraic byte
   vsrah,            // vector shift right algebraic halfword
   vsraw,            // vector shift right algebraic word
   vsrb,             // vector shift right byte
   vsrh,             // vector shift right halfword
   vsro,             // vector shift right by octet
   vsrw,             // vector shift right word
// vsrv,             // vector shift right variable
// vslv,             // vector shift left variable
   vrlb,             // vector rotate left byte
   vrlh,             // vector rotate left halfword
   vrlw,             // vector rotate left word
// vrlwmi,           // vector rotate left word then mask insert
// vrldmi,           // vector rotate left DWord then mask insert
// vrlwnm,           // vector rotate left word then and with mask
// vrldnm,           // vector rotate left DWord then and with mask
// vaddcuw,          // Vector Add & Write Carry-Out Unsigned Word
// vaddcuq,          // Vector Add & write Carry Unsigned Qword
// vaddecuq,         // Vector Add Extended & write Carry Unsigned Qword
// vaddeuqm,         // Vector Add Extended Unsigned Qword Modulo
   vaddsbs,          // vector add signed byte saturate
   vaddshs,          // vector add signed halfword saturate
   vaddsws,          // vector add signed word saturate
   vaddubm,          // vector add unsigned byte modulo
   vaddubs,          // vector add unsigned byte saturate
   vaddudm,          // Vector Add Unsigned Dword Modulo
   vadduhm,          // vector add unsigned halfword modulo
   vadduhs,          // vector add unsigned halfword saturate
   vadduwm,          // vector add unsigned word modulo
   vadduws,          // vector add unsigned word saturate
// vadduqm,          // Vector Add Unsigned Qword Modulo
// vavgsb,           // Vector Average Signed Byte
// vavgsh,           // Vector Average Signed Hword
// vavgsw,           // Vector Average Signed Word
// vavgub,           // Vector Average Unsigned Byte
// vavguh,           // Vector Average Unsigned Hword
// vavguw,           // Vector Average Unsigned Word
// vsubcuw,          // Vector Subtract & Write Carry-Out Unsigned Word
   vsubsbs,          // vector subtract signed byte saturate
   vsubshs,          // vector subtract signed halfword saturate
   vsubsws,          // vector subtract signed word saturate
   vsububm,          // vector subtract unsigned byte modulo
   vsububs,          // vector subtract unsigned byte saturate
   vsubudm,          // vector subtract unsigned Dword modulo
   vsubuhm,          // vector subtract unsigned halfword modulo
   vsubuhs,          // vector subtract unsigned halfword saturate
   vsubuwm,          // vector subtract unsigned word modulo
   vsubuws,          // vector subtract unsigned word saturate
// vmhaddshs,        // Vector Multiply-High-Add Signed Hword Saturate
// vmhraddshs,       // Vector Multiply-High-Round-Add Signed Hword Saturate
// vmladduhm,        // Vector Multiply-Low-Add Unsigned Hword Modulo
// vmsummbm,         // Vector Multiply-Sum Mixed Byte Modulo
// vmsumshm,         // Vector Multiply-Sum Signed Hword Modulo
// vmsumshs,         // Vector Multiply-Sum Signed Hword Saturate
// vmsumubm,         // Vector Multiply-Sum Unsigned Byte Modulo
// vmsumuhs,         // Vector Multiply-Sum Unsigned Hword Saturate
// vmulesb,          // Vector Multiply Even Signed Byte
// vmuleub,          // Vector Multiply Even Unsigned Byte
// vmuleuh,          // Vector Multiply Even Unsigned Hword
// vmulosb,          // Vector Multiply Odd Signed Byte
// vmuloub,          // Vector Multiply Odd Unsigned Byte
   vmulesh,          // vector multiply even signed halfword
   vmulosh,          // vector multiply odd signed halfword
   vmulouh,          // vector multiply odd unsigned halfword
   vmuluwm,          // vector multiply unsigned word modulo
   vminsb,           // vector minimum signed byte
   vminsh,           // vector minimum signed halfword
   vminsw,           // vector minimum signed word
   vminub,           // vector minimum unsigned byte
   vminuh,           // vector minimum unsigned halfword
   vminuw,           // vector minimum unsigned word
   vmaxsb,           // vector maximum signed byte
   vmaxsh,           // vector maximum signed halfword
   vmaxsw,           // vector maximum signed word
   vmaxub,           // vector maximum unsigned byte
   vmaxuh,           // vector maximum unsigned halfword
   vmaxuw,           // vector maximum unsigned word
// vmsumudm,         // Vector Multiply-Sum Unsigned Dword
   vmsumuhm,         // vector multiply-sum unsigned halfword word modulo
// vcipher,          // Vector AES Cipher
// vcipherlast,      // Vector AES Cipher Last
// vclzb,            // Vector Count Leading Zeros Byte
// vclzd,            // Vector Count Leading Zeros Dword
// vclzh,            // Vector Count Leading Zeros Hword
// vclzw,            // Vector Count Leading Zeros Word
// vcmpbfp,          // Vector Compare Bounds Floating-Point
// vcmpbfp_r,        // Vector Compare Bounds Floating-Point Rc=1
// vcmpeqfp,         // Vector Compare Equal To Floating-Point
// vcmpeqfp_r,       // Vector Compare Equal To Floating-Point Rc=1
   vcmpequb,         // vector compare equal unsigned byte
   vcmpequb_r,       // vector compare equal unsigned byte with record
// vcmpequd,         // Vector Compare Equal Unsigned Dword
// vcmpequd_r,       // Vector Compare Equal Unsigned Dword Rc=1
   vcmpequh,         // vector compare equal unsigned halfword
   vcmpequh_r,       // vector compare equal unsigned halfword with record
   vcmpequw,         // vector compare equal unsigned word
   vcmpequw_r,       // vector compare equal unsigned word with record
   vcmpgtsb,         // vector compare greater than signed byte
   vcmpgtsb_r,       // vector compare greater than signed byte with record
// vcmpgtsd,         // Vector Compare Greater Than Signed Dword
// vcmpgtsd_r,       // Vector Compare Greater Than Signed Dword Rc=1
   vcmpgtsh,         // vector compare greater than signed halfword
   vcmpgtsh_r,       // vector compare greater than signed halfword with record
   vcmpgtsw,         // vector compare greater than signed word
   vcmpgtsw_r,       // vector compare greater than signed word with record
   vcmpgtub,         // vector compare greater than unsigned byte
   vcmpgtub_r,       // vector compare greater than unsigned byte with record
   vcmpgtuh,         // vector compare greater than unsigned halfword
   vcmpgtuh_r,       // vector compare greater than unsigned halfword with record
   vcmpgtuw,         // vector compare greater than unsigned word
   vcmpgtuw_r,       // vector compare greater than unsigned word with record
// vcmpneb,          // vector compare not equal Byte
// vcmpneb_r,        // vector compare not equal Byte Rc=1
// vcmpneh,          // vector compare not equal Hword
// vcmpneh_r,        // vector compare not equal Hword Rc=1
// vcmpnew,          // vector compare not equal Word
// vcmpnew_r,        // vector compare not equal Word Rc=1
// vcmpnezb,         // vector compare not equal or zero Byte
// vcmpnezb_r,       // vector compare not equal or zero Byte Rc=1
// vcmpnezh,         // vector compare not equal or zero Hword
// vcmpnezh_r,       // vector compare not equal or zero Hword Rc=1
// vcmpnezw,         // vector compare not equal or zero Word
// vcmpnezw_r,       // vector compare not equal or zero Word Rc=1
// vctsxs,           // Vector Convert To Signed Word Saturate
// veqv,             // Vector Logical Equivalence
   vupkhsb,          // vector unpack high signed byte
   vupkhsh,          // vector unpack high signed halfword
   vupklsb,          // vector unpack low signed byte
   vupklsh,          // vector unpack low signed halfword
// vupklsw,          // Vector Unpack Low Signed Word
// vupklpx,          // Vector Unpack Low Pixel
// vupkhsw,          // Vector Unpack High Signed Word
// vpksdss,          // Vector Pack Signed Dword Signed Saturate
// vpksdus,          // Vector Pack Signed Dword Unsigned Saturate
   vpkuhum,          // vector pack unsigned half word unsigned modulo
   vpkuwum,          // vector pack unsigned word unsigned modulo
// vpkuwus,          // Vector Pack Unsigned Word Unsigned Saturate
// vpmsumb,          // Vector Polynomial Multiply-Sum Byte
// vpmsumh,          // Vector Polynomial Multiply-Sum Hword
// vpmsumw,          // Vector Polynomial Multiply-Sum Word
// vpopcntb,         // Vector Population Count Byte
// vpopcntd,         // Vector Population Count Dword
// vpopcnth,         // Vector Population Count Hword
// vpopcntw,         // Vector Population Count Word
   vmrghb,           // vector merge high byte
   vmrghh,           // vector merge high half word
   vmrghw,           // vector merge high word
   vmrglb,           // vector merge low byte
   vmrglh,           // vector merge low half word
   vmrglw,           // vector merge low word
// lxsd,             // Load VSX scalar Dword
   lxsdx,            // Load VSX Scalar Doubleword Indexed
   lxsdux,           // Load VSX Scalar Doubleword with Update Indexed
// lxssp,            // Load VSX scalar single
// lxsibzx,          // Load VSX scalar as integer byte & zero indexed
// lxsihzx,          // Load VSX scalar as integer Hword & zero indexed
// lxv,              // Load VSX vector
// lxvb16x,          // Load VSX vector byte*16 indexed
// lxvh8x,           // Load VSX vector Hword*8 indexed
// lxvl,             // Load VSX vector with length
// lxvll,            // Load VSX vector left-justified with length
// lxvwsx,           // Load VSX vector word & splat indexed
// lxvx,             // Load VSX vector indexed
// stxsd,            // Store VSX Scalar Dword
   stxsdx,           // Store VSX Scalar Doubleword Indexed
   stxsdux,          // Store VSX Scalar Doubleword with Update Indexed
   lxvd2x,           // Load VSX Vector Doubleword*2 Indexed
   lxvd2ux,          // Load VSX Vector Doubleword*2 with Update Indexed
   lxvdsx,           // Load VSX Vector Doubleword & Splat Indexed
   lxvw4x,           // Load VSX Vector Word*4 Indexed
   lxvw4ux,          // Load VSX Vector Word*4 with Update Indexed
   stxvd2x,          // store VSX Vector Doubleword*2 Indexed
   stxvd2ux,         // store VSX Vector Doubleword*2 with Update Indexed
   stxvw4x,          // store VSX Vector Word*4 Indexed
   stxvw4ux,         // store VSX Vector Word*4 with Update Indexed
// stxssp,           // Store VSX Scalar SP
   xsabsdp,          // VSX Scalar Absolute Value Double-Precision
   xsadddp,          // VSX Scalar Add Double-Precision
   xscmpodp,         // VSX Scalar Compare Ordered Double-Precision
   xscmpudp,         // VSX Scalar Compare Unordered Double-Precision
// stxsibx,          // Store VSX scalar as integer byte indexed
// stxsihx,          // Store VSX scalar as integer Hword indexed
// stxv,             // Store VSX vector
// stxvb16x,         // Store VSX vector byte*16 indexed
// stxvh8x,          // Store VSX vector Hword*8 indexed
// stxvl,            // Store VSX vector with length
// stxvll,           // Store VSX vector left-justified with length
// stxvx,            // Store VSX vector indexed
// xsabsqp,          // VSX scalar absolute QP
// xsaddqp,          // VSX scalar add QP
// xscmpexpqp,       // VSX scalar compare exponents QP
// xscmpoqp,         // VSX scalar compare ordered QP
// xscmpuqp,         // VSX Scalar Compare Unordered QP
   xscpsgndp,        // VSX Scalar Copy Sign Double-Precision , For VSR Copy register
// xscpsgnqp,        // VSX Scalar Copy Sign QP
// xscvqpdp,         // VSX Scalar Convert QP to DP
   xscvdpsxds,       // VSX Scalar Convert Double-Precision to Signed Integer Doubleword Saturate
   xscvdpsxws,       // VSX Scalar Convert Double-Precision to Signed Integer Word Saturate
// xscvdpqp,         // VSX Scalar Convert DP to QP
// xscvqpsdz,        // VSX Scalar Convert QP to Signed Dword truncate
// xscvqpswz,        // VSX Scalar Convert QP to Signed Word truncate
// xscvqpudz,        // VSX Scalar Convert QP to Unsigned Dword truncate
// xscvqpuwz,        // VSX Scalar Convert QP to Unsigned Word truncate
// xscvsdqp,         // VSX Scalar Convert Signed Dword to QP
// xscvudqp,         // VSX Scalar Convert Unsigned Dword to QP
// xsdivqp,          // VSX Scalar Divide QP
   xsdivdp,          // VSX Scalar Divide Double-Precision
// xsiexpqp,         // VSX Scalar Insert Exponent QP
// xsmaddqp,         // VSX Scalar Multiply-Add QP
// xsmsubqp,         // VSX Scalar Multiply-Subtract QP
// xsmulqp,          // VSX Scalar Multiply QP
// xsmaxcdp,         // VSX Scalar Maximum Type-C Double-Precision
// xsmaxjdp,         // VSX Scalar Maximum Type-J Double-Precision
   xsmaddadp,        // VSX Scalar Multiply-Add Type A Double-Precision
   xsmaddmdp,        // VSX Scalar Multiply-Add Type M Double-Precision
// xsmincdp,         // VSX Scalar Minimum Type-C Double-Precision
// xsminjdp,         // VSX Scalar Minimum Type-J Double-Precision
   xsmsubadp,        // VSX Scalar Multiply-Subtract Type A Double-Precision
   xsmsubmdp,        // VSX Scalar Multiply-Subtract Type M Double-Precision
   xsmuldp,          // VSX Scalar Multiply Double-Precision
   xsnabsdp,         // VSX Scalar Negative Absolute Value Double-Precision
// xsnmaddqp,        // VSX Scalar Negative Multiply-Add QP
// xsnmsubqp,        // VSX Scalar Negative Multiply-Subtract QP
   xsnegdp,          // VSX Scalar Negate Double-Precision
   xsnmaddadp,       // VSX Scalar Negative Multiply-Add Type A Double-Precision
   xsnmaddmdp,       // VSX Scalar Negative Multiply-Add Type M Double-Precision
   xsnmsubadp,       // VSX Scalar Negative Multiply-Subtract Type A Double-Precision
   xsnmsubmdp,       // VSX Scalar Negative Multiply-Subtract Type M Double-Precision
// xsnabsqp,         // VSX Scalar Negative Absolute QP
// xsnegqp,          // VSX Scalar Negate QP
   xsrdpic,          // VSX Scalar Round to Double-Precision exact using Current rounding mode
   xsredp,           // VSX Scalar Reciprocal Estimate Double-Precision
   xsrsqrtedp,       // VSX Scalar Reciprocal Square Root Estimate Double-Precision
// xssqrtqp,         // VSX Scalar Square Root QP
// xssubqp,          // VSX Scalar Subtract QP
// xststdcqp,        // VSX Scalar Test Data Class QP
// xsxsigqp,         // VSX Scalar Extract Significand QP
// xsxexpqp,         // VSX Scalar Extract Exponent QP
// xxextractuw,      // VSX Vector Extract Unsigned Word
// xxinsertw,        // VSX Vector Insert Word
   xxlor,            // VSX Logical OR
   xxlnor,           // VSX Logical NOR
   xxsel,            // VSX Select (Operands usage are diffent than fsel)
   xxsldwi,          // VSX Shift Left Double by Word Immediate
   xxspltw,          // VSX Splat Word
// xxspltib,         // VSX Vector Splat Immediate Byte
// xxperm,           // VSX Vector Permute
   xxpermdi,         // VSX Permute Doubleword Immediate
// xxpermr,          // VSX Vector Permute Right-indexed
   xssqrtdp,         // VSX Scalar Square Root Double-Precision
   xssubdp,          // VSX Scalar Subtract Double-Precision
// xscmpeqdp,        // VSX Scalar Compare Equal Double-Precision
// xscmpgtdp,        // VSX Scalar Compare Greater Than Double-Precision
// xscmpgedp,        // VSX Scalar Compare Greater Than or Equal Double-Precision
// xscmpnedp,        // VSX Scalar Compare Not Equal Double-Precision
// xscmpexpdp,       // VSX Scalar Compare Exponents DP
   xscvsxddp,        // VSX Scalar Convert Signed Integer Doubleword to Double-Precision
// xscvdphp,         // VSX Scalar Convert DP to HP
   xscvdpsp,         // VSX Scalar Convert From Double-Precision to Single-Precision
// xscvhpdp,         // VSX Scalar Convert HP to DP
// xsiexpdp,         // VSX Scalar Insert Exponent DP
// xststdcdp,        // VSX Scalar Test Data Class DP
// xststdcsp,        // VSX Scalar Test Data Class SP
// xsxexpdp,         // VSX Scalar Extract Exponent DP
// xsxsigdp,         // VSX Scalar Extract Significand DP
   xvadddp,          // VSX Vector Add Double-Precision
// xvcmpnesp,        // VSX Vector Compare Not Equal Single-Precision
// xvcmpnesp_r,      // VSX Vector Compare Not Equal Single-Precision Rc=1
// xvcmpnedp,        // VSX Vector Compare Not Equal Double-Precision
// xvcmpnedp_r,      // VSX Vector Compare Not Equal Double-Precision Rc=1
   xvmindp,          // VSX Vector Min Double-Precision
   xvmaxdp,          // VSX Vector Max Double-Precision
   xvcmpeqdp,        // VSX Vector Compare Equal To Double-Precision
   xvcmpeqdp_r,      // VSX Vector Compare Equal To Double-Precision
   xvcmpgedp,        // VSX Vector Compare Greater Than Or Equal To Double-Precision
   xvcmpgedp_r,      // VSX Vector Compare Greater Than Or Equal To Double-Precision
   xvcmpgtdp,        // VSX Vector Compare Greater Than Double-Precision
   xvcmpgtdp_r,      // VSX Vector Compare Greater Than Double-Precision
// xvcvhpsp,         // VSX Vector Convert HP to SP
// xvcvsphp,         // VSX Vector Convert SP to HP
   xvdivdp,          // VSX Vector Divide Double-Precision
// xviexpsp,         // VSX Vector Insert Exponent SP
// xviexpdp,         // VSX Vector Insert Exponent DP
   xvmuldp,          // VSX Vector Multiply Double-Precision
   xvnegdp,          // VSX Vector Negate Double-Precision
   xvnmsubadp,       // VSX Vector Negative Multiply-Subtract Type-A Double-Precision
   xvnmsubmdp,       // VSX Vector Negative Multiply-Subtract Type-M Double-Precision
   xvsubdp,          // VSX Vector Subtract Double-Precision
   xvmaddadp,        // VSX Vector Multiply-Add Type-A Double-Precision
   xvmaddmdp,        // VSX Vector Multiply-Add Type-M Double-Precision
   xvmsubadp,        // VSX Vector Multiply-Sub Type-A Double-Precision
   xvmsubmdp,        // VSX Vector Multiply-Sub Type-M Double-Precision
   xvsqrtdp,         // VSX Vector Square Root Double-Precision
// xvtstdcsp,        // VSX Vector Test Data Class SP
// xvtstdcdp,        // VSX Vector Test Data Class DP
// xvxexpdp,         // VSX Vector Extract Exponent DP
// xvxexpsp,         // VSX Vector Extract Exponent SP
// xvxsigdp,         // VSX Vector Extract Significand DP
// xvxsigsp,         // VSX Vector Extract Significand SP
// xxbrd,            // VSX Vector Byte-Reverse Dword
// xxbrh,            // VSX Vector Byte-Reverse Hword
// xxbrw,            // VSX Vector Byte-Reverse Word
// xxbrq,            // VSX Vector Byte-Reverse Qword
   fmrgew,           // Merge Even Word
   fmrgow,           // Merge Odd Word
   lxsiwax,          // VSX Scalar as Integer Word Algebraic Indexed
   lxsiwzx,          // VSX Scalar as Integer Word and Zero Indexed
   lxsspx,           // VSX Scalar Single-Precision Indexed
   stxsiwx,          // VSX Scalar as Integer Word Indexed
   stxsspx,          // VSR Scalar Word Indexed
   xsaddsp,          // Scalar Add Single-Precision
   xscvdpspn,        // Scalar Convert Double-Precision to Single-Precision format Non-signalling
   xscvdpuxds,       // Scalar Convert Double-Precision to Unsigned Fixed-Point Doubleword Saturate
   xscvdpuxws,       // Scalar Convert Double-Precision to Unsigned Fixed-Point Word Saturate
   xscvspdp,         // Scalar Convert Single-Precision to Double-Precision (p=1)
   xscvspdpn,        // Convert Single-Precision to Double-Precision format Non-signalling
   xscvsxdsp,        // Scalar Convert Signed Fixed-Point Doubleword to Single-Precision
   xscvuxddp,        // Scalar Convert Unsigned Fixed-Point Doubleword to Double-Precision
   xscvuxdsp,        // Scalar Convert Unsigned Fixed-Point Doubleword to Single-Precision
   xsdivsp,          // Scalar Divide Single-Precision
   xsmaddasp,        // Scalar Multiply-Add Type-A Single-Precision
   xsmaddmsp,        // Scalar Multiply-Add Type-M Single-Precision
   xsmaxdp,          // Scalar Maximum Double-Precision
   xsmindp,          // Scalar Minimum Double-Precision
   xsmsubasp,        // Scalar Multiply-Subtract Type-A Single-Precision
   xsmsubmsp,        // Scalar Multiply-Subtract Type-M Single-Precision
   xsmulsp,          // Scalar Multiply Single-Precision
   xsnmaddasp,       // Scalar Negative Multiply-Add Type-A Single-Precision
   xsnmaddmsp,       // Scalar Negative Multiply-Add Type-M Single-Precision
   xsnmsubasp,       // Scalar Negative Multiply-Subtract Type-A Single-Precision
   xsnmsubmsp,       // Scalar Negative Multiply-Subtract Type-M Single-Precision
   xsrdpi,           // Scalar Round to Double-Precision Integer
   xsrdpim,          // Scalar Round to Double-Precision Integer toward -Infinity
   xsrdpip,          // Scalar Round to Double-Precision Integer toward +Infinity
   xsrdpiz,          // Scalar Round to Double-Precision Integer toward Zero
   xsresp,           // Scalar Reciprocal Estimate Single-Precision
   xsrsp,            // Scalar Round to Single-Precision
   xsrsqrtesp,       // Scalar Reciprocal Square Root Estimate Single-Precision
   xssqrtsp,         // Scalar Square Root Single-Precision
   xssubsp,          // Scalar Subtract Single-Precision
   xxland,           // Logical AND
   xxlandc,          // Logical AND with Complement
   xxleqv,           // Logical Equivalence
   xxlnand,          // Logical NAND
   xxlorc,           // Logical OR with Complement
   xxlxor,           // Logical XOR
   xxmrghw,          // Merge High Word
   xxmrglw,          // Merge Low Word
   vmrgew,           // Merge Even Word
   vmrgow,           // Merge Odd Word
   xvabsdp,          // Vector Absolute Value Double-Precision
   xvabssp,          // Vector Absolute Value Single-Precision
   xvaddsp,          // Vector Add Single-Precision
   xvcmpeqsp,        // Vector Compare Equal To Single-Precision
   xvcmpeqsp_r,      // Vector Compare Equal To Single-Precision & record CR6
   xvcmpgesp,        // Vector Compare Greater Than or Equal To Single-Precision
   xvcmpgesp_r,      // Vector Compare Greater Than or Equal To Single-Precision & record CR6
   xvcmpgtsp,        // Vector Compare Greater Than Single-Precision
   xvcmpgtsp_r,      // Vector Compare Greater Than Single-Precision & record CR6
   xvcpsgndp,        // Vector Copy Sign Double-Precision
   xvcpsgnsp,        // Vector Copy Sign Single-Precision
   xvcvdpsp,         // Vector Convert Double-Precision to Single-Precision
   xvcvdpsxds,       // Vector Convert Double-Precision to Signed Fixed-Point Doubleword Saturate
   xvcvdpsxws,       // Vector Convert Double-Precision to Signed Fixed-Point Word Saturate
   xvcvdpuxds,       // Vector Convert Double-Precision to Unsigned Fixed-Point Doubleword Saturate
   xvcvdpuxws,       // Vector Convert Double-Precision to Unsigned Fixed-Point Word Saturate
   xvcvspdp,         // Vector Convert Single-Precision to Double-Precision
   xvcvspsxds,       // Vector Convert Single-Precision to Signed Fixed-Point Doubleword Saturate
   xvcvspsxws,       // Vector Convert Single-Precision to Signed Fixed-Point Word Saturate
   xvcvspuxds,       // Vector Convert Single-Precision to Unsigned Fixed-Point Doubleword Saturate
   xvcvspuxws,       // Vector Convert Single-Precision to Unsigned Fixed-Point Word Saturate
   xvcvsxddp,        // Vector Convert Signed Fixed-Point Doubleword to Double-Precision
   xvcvsxdsp,        // Vector Convert Signed Fixed-Point Doubleword to Single-Precision
   xvcvsxwdp,        // Vector Convert Signed Fixed-Point Word to Double-Precision
   xvcvsxwsp,        // Vector Convert Signed Fixed-Point Word to Single-Precision
   xvcvuxddp,        // Vector Convert Unsigned Fixed-Point Doubleword to Double-Precision
   xvcvuxdsp,        // Vector Convert Unsigned Fixed-Point Doubleword to Single-Precision
   xvcvuxwdp,        // Vector Convert Unsigned Fixed-Point Word to Double-Precision
   xvcvuxwsp,        // Vector Convert Unsigned Fixed-Point Word to Single-Precision
   xvdivsp,          // Vector Divide Single-Precision
   xvmaddasp,        // Vector Multiply-Add Type-A Single-Precision
   xvmaddmsp,        // Vector Multiply-Add Type-M Single-Precision
   xvmaxsp,          // Vector Maximum Single-Precision
   xvminsp,          // Vector Minimum Single-Precision
   xvmsubasp,        // Vector Multiply-Subtract Type-A Single-Precision
   xvmsubmsp,        // Vector Multiply-Subtract Type-M Single-Precision
   xvmulsp,          // Vector Multiply Single-Precision
   xvnabsdp,         // Vector Negative Absolute Value Double-Precision
   xvnabssp,         // Vector Negative Absolute Value Single-Precision
   xvnegsp,          // Vector Negate Single-Precision
   xvnmaddadp,       // Vector Negative Multiply-Add Type-A Double-Precision
   xvnmaddasp,       // Vector Negative Multiply-Add Type-A Single-Precision
   xvnmaddmdp,       // Vector Negative Multiply-Add Type-M Double-Precision
   xvnmaddmsp,       // Vector Negative Multiply-Add Type-M Single-Precision
   xvnmsubasp,       // Vector Negative Multiply-Subtract Type-A Single-Precision
   xvnmsubmsp,       // Vector Negative Multiply-Subtract Type-M Single-Precision
   xvrdpi,           // Vector Round to Double-Precision Integer
   xvrdpic,          // Vector Round to Double-Precision Integer using Current rounding mode
   xvrdpim,          // Vector Round to Double-Precision Integer toward -Infinity
   xvrdpip,          // Vector Round to Double-Precision Integer toward +Infinity
   xvrdpiz,          // Vector Round to Double-Precision Integer toward Zero
   xvredp,           // Vector Reciprocal Estimate Double-Precision
   xvresp,           // Vector Reciprocal Estimate Single-Precision
   xvrspi,           // Vector Round to Single-Precision Integer
   xvrspic,          // Vector Round to Single-Precision Integer using Current rounding mode
   xvrspim,          // Vector Round to Single-Precision Integer toward -Infinity
   xvrspip,          // Vector Round to Single-Precision Integer toward +Infinity
   xvrspiz,          // Vector Round to Single-Precision Integer toward Zero
   xvrsqrtedp,       // Vector Reciprocal Square Root Estimate Double-Precision
   xvrsqrtesp,       // Vector Reciprocal Square Root Estimate Single-Precision
   xvsqrtsp,         // Vector Square Root Single-Precision
   xvsubsp,          // Vector Subtract Single-Precision
   label,            // Destination of a jump
