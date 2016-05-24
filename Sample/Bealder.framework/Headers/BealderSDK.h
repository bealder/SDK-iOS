//
//  BealderSDK.h
//  Bealder
//
//  Created by Francois Verron on 03/07/2015.
//  Copyright (c) 2015 Bealder. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <Bealder/BealderRequest.h>
#import <Bealder/BealderBeacon.h>
#import <Bealder/BealderLocation.h>
#import <Bealder/BealderWifi.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreBluetooth/CoreBluetooth.h>

@interface BealderSDK : NSObject <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

+ (id)sharedManager;
-(void)setOptions: (NSDictionary *) dataOptions;
-(NSString *)getApiRoot;

-(void)setAppId: (NSString *) dataId;
-(NSString *)getAppId;

-(void)setAppKey: (NSString *) dataKey;
-(NSString *)getAppKey;

-(void)setAppToken: (NSString *) dataToken;
-(NSString *)getAppToken;

-(void)setAppRegion: (NSString *) dataToken;
-(NSString *)getAppRegion;

-(void)setAppDebug: (BOOL) dataDebug;
-(void)setAppDebugApi: (NSString*) dataUrl;
-(void)setAppDebugText: (UITextView *) dataText;

-(NSString *)getPhoneUdid;
-(NSString *)getPhoneVersion;
-(NSString *)getPhoneModel;

-(void)openPopup:(NSString *)url;
-(void)closePopup;

-(void)beaconDetected:(CLBeacon*) detectedBeacon;
-(void)geofencingDetected:(NSString*) detectedGeofencing;

-(void)start;
-(void)restartLocation;

-(void)toggleBLE:(NSString *)enable;
-(void)sendDebug:(NSString *)debugString;
-(void)sendDebugApi:(NSString *)debugString;


@end
