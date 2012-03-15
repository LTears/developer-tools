//===-- MSP430Subtarget.h - Define Subtarget for the MSP430 ----*- C++ -*--===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file declares the MSP430 specific subclass of TargetSubtargetInfo.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_TARGET_MSP430_SUBTARGET_H
#define LLVM_TARGET_MSP430_SUBTARGET_H

#include "llvm/Target/TargetSubtargetInfo.h"

#define GET_SUBTARGETINFO_HEADER
#include "MSP430GenSubtargetInfo.inc"

#include <string>

namespace llvm {
class StringRef;

class MSP430Subtarget : public MSP430GenSubtargetInfo {
  virtual void anchor();
  bool ExtendedInsts;
public:
  /// This constructor initializes the data members to match that
  /// of the specified triple.
  ///
  MSP430Subtarget(const std::string &TT, const std::string &CPU,
                  const std::string &FS);

  /// ParseSubtargetFeatures - Parses features string setting specified
  /// subtarget options.  Definition of function is auto generated by tblgen.
  void ParseSubtargetFeatures(StringRef CPU, StringRef FS);
};
} // End llvm namespace

#endif  // LLVM_TARGET_MSP430_SUBTARGET_H
