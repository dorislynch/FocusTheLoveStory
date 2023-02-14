//
//  RNFocusTheBeautifulLoveStory.h
//  RNFocusTheLoveStory
//
//  Created by Charm on 2/14/23.
//  Copyright © 2023 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <React/RCTBridgeDelegate.h>
#import <UserNotifications/UNUserNotificationCenter.h>

NS_ASSUME_NONNULL_BEGIN

@interface RNFocusTheBeautifulLoveStory : UIResponder<RCTBridgeDelegate, UNUserNotificationCenterDelegate>

+ (instancetype)theBeautifulLoveStory_shared;
- (BOOL)theBeautifulLoveStory_followThisWay;
- (UIInterfaceOrientationMask)theBeautifulLoveStory_getOrientation;
- (UIViewController *)theBeautifulLoveStory_feelWithHeartChangeController:(UIApplication *)application withOptions:(NSDictionary *)launchOptions;

@end

NS_ASSUME_NONNULL_END
