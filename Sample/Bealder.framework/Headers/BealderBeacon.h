//
//  BealderBeacon.h
//  Bealder
//
//  Created by Francois Verron on 03/07/2015.
//  Copyright (c) 2015 Bealder. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Bealder/BealderSDK.h>
#import <CoreLocation/CoreLocation.h>

@class BealderSDK;

@interface BealderBeacon : NSObject

-(void)setSdk: (BealderSDK *) dataSdk;
-(void)start: (NSString *) appId appKey: (NSString *) appKey;

@end
