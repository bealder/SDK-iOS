//
//  BealderLocation.h
//  Bealder
//
//  Created by Francois Verron on 25/07/2015.
//  Copyright (c) 2015 Bealder. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Bealder/BealderSDK.h>
#import <CoreLocation/CoreLocation.h>

@interface BealderLocation : NSObject

-(void)setSdk: (BealderSDK *) dataSdk;
-(void)setZones: (NSDictionary *) dataZone;
-(NSDictionary *)getZones;
-(void)start;
-(void)restartManager;

@end
