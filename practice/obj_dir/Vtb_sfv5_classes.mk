# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb_sfv5.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtb_sfv5 \
	Vtb_sfv5___024root__DepSet_h4ff5dab1__0 \
	Vtb_sfv5___024root__DepSet_h6450ab36__0 \
	Vtb_sfv5___024unit__03a__03aPrintUtilities__Vclpkg__DepSet_hebfd4a2c__0 \
	Vtb_sfv5___024unit__03a__03aPrintUtilities__Vclpkg__DepSet_h08483aa9__0 \
	Vtb_sfv5___024unit__03a__03aMemTrans__Vclpkg__DepSet_h7afaf4ef__0 \
	Vtb_sfv5___024unit__03a__03aMemTrans__Vclpkg__DepSet_h9f3ec74b__0 \
	Vtb_sfv5___024unit__03a__03aMemTrans__Vclpkg__DepSet_h974bd568__0 \
	Vtb_sfv5___024unit__03a__03aMemTrans__Vclpkg__DepSet_h965b5f6b__0 \
	Vtb_sfv5__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtb_sfv5___024root__Slow \
	Vtb_sfv5___024root__DepSet_he74a22e5__0__Slow \
	Vtb_sfv5___024root__DepSet_h6450ab36__0__Slow \
	Vtb_sfv5___024unit__Slow \
	Vtb_sfv5___024unit__DepSet_hb93a8fb8__0__Slow \
	Vtb_sfv5___024unit__03a__03aPrintUtilities__Vclpkg__Slow \
	Vtb_sfv5___024unit__03a__03aPrintUtilities__Vclpkg__DepSet_h08483aa9__0__Slow \
	Vtb_sfv5___024unit__03a__03aMemTrans__Vclpkg__Slow \
	Vtb_sfv5___024unit__03a__03aMemTrans__Vclpkg__DepSet_h974bd568__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtb_sfv5__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
