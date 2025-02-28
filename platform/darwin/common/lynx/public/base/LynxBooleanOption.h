// Copyright 2025 The Lynx Authors. All rights reserved.
// Licensed under the Apache License Version 2.0 that can be found in the
// LICENSE file in the root directory of this source tree.

#ifndef DARWIN_COMMON_LYNX_BASE_LYNXBOOLEANOPTION_H_
#define DARWIN_COMMON_LYNX_BASE_LYNXBOOLEANOPTION_H_

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, LynxBooleanOption) {
  LynxBooleanOptionUnset = 0,
  LynxBooleanOptionTrue = 1,
  LynxBooleanOptionFalse = 2,
};

#endif  // DARWIN_COMMON_LYNX_BASE_LYNXBOOLEANOPTION_H_
