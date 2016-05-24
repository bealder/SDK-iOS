//
//  AppDelegate.m
//  Bealder demo
//
//  Created by Francois Verron on 03/07/2015.
//  Copyright (c) 2015 Bealder. All rights reserved.
//

#import "AppDelegate.h"

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    BealderSDK * sdk = [BealderSDK sharedManager];
    [sdk setAppId: @"{BEALDER_APP_ID}"];
    [sdk setAppKey: @"{BEALDER_APP_KEY}"];
    [sdk setAppRegion: @"{BEACON_REGION}"];
    [sdk setOptions:launchOptions];
    [sdk start];
    
    return YES;
}

- (void)application:(UIApplication *)application didReceiveLocalNotification:(UILocalNotification *)notification {
    
    [UIApplication sharedApplication].applicationIconBadgeNumber--;
    
    BealderSDK * sdk = [BealderSDK sharedManager];
    [sdk openPopup:[notification.userInfo objectForKey:@"url"]];
}

@end
