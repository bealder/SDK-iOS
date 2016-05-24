//
//  BealderView.h
//  Bealder demo
//
//  Created by Francois Verron on 03/07/2015.
//  Copyright (c) 2015 Bealder. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Bealder/BealderSDK.h>

@interface BealderView : UIViewController

-(void)setSdk: (BealderSDK *) dataSdk;
-(void)loadUrl:(NSString *) fullURL;

@end

