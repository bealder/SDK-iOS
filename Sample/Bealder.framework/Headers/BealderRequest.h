//
//  BealderRequest.h
//  Bealder
//
//  Created by Francois Verron on 03/07/2015.
//  Copyright (c) 2015 Bealder. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Bealder/BealderSDK.h>
#import <CoreLocation/CoreLocation.h>
#import <Bealder/Reachability.h>

@class BealderSDK;

@interface BealderRequest : NSObject

-(void)setSdk: (BealderSDK *) dataSdk;
-(NSDictionary *)apiOpen;
-(NSDictionary *)apiActivate: (NSString *) state;
-(NSDictionary *)apiDetection: (CLBeacon *) beacon;
-(NSDictionary *)apiOpenPush: (CLBeacon *) beacon;
-(NSDictionary *)apiCampaign;

-(NSDictionary *)apiGeofencingDetail: (NSString *) dataID;
-(NSDictionary *)apiWifiDetail: (NSString *) dataID : (NSString*) distance;

-(void)initRequest;
-(void) checkNetworkStatus:(NSNotification *)notice;
-(NSString *)proximityText: (CLProximity) proximity;
@end
