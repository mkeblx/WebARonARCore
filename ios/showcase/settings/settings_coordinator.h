// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef IOS_SHOWCASE_SETTINGS_SETTINGS_COORDINATOR_H_
#define IOS_SHOWCASE_SETTINGS_SETTINGS_COORDINATOR_H_

#import <UIKit/UIKit.h>

#import "ios/showcase/common/coordinator.h"

@interface SettingsCoordinator : NSObject<Coordinator>

// Redefined to be a UINavigationController.
@property(nonatomic, weak) UINavigationController* baseViewController;

@end

#endif  // IOS_SHOWCASE_SETTINGS_SETTINGS_COORDINATOR_H_
