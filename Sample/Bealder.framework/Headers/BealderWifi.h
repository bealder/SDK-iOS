//
//  BealderWifi.h
//  Bealder
//
//  Created by Francois Verron on 23/05/2016.
//  Copyright © 2016 Bealder. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <Bealder/BealderSDK.h>
#import <Bealder/Reachability.h>

@interface BealderWifi : UIViewController

-(void)setSdk: (BealderSDK *) dataSdk;
-(void)setZones: (NSDictionary *) dataZone;
-(NSDictionary *)getZones;
-(void)start;

@end
