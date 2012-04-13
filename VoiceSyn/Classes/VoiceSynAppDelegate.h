//
//  VoiceSynAppDelegate.h
//  VoiceSyn
//
//  Created by admin on 8/16/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class VoiceSynViewController;

@interface VoiceSynAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    VoiceSynViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet VoiceSynViewController *viewController;

@end

