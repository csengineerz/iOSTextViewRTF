//
//  VoiceSynViewController.h
//  VoiceSyn
//
//  Created by admin on 8/16/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VSSpeechSynthesizer.h"

@interface VoiceSynViewController : UIViewController {
	IBOutlet UITextField *text;
	IBOutlet UITextField *rate;
	IBOutlet UITextField *pitch;
	IBOutlet UITextField *volume;
	IBOutlet UILabel *defaultRate;
	IBOutlet UILabel *defaultPitch;
	IBOutlet UILabel *defaultVolume;
	// NSObject *speech;
	VSSpeechSynthesizer *speech;
}

@property (retain) UITextField *text;
@property (retain) UITextField *rate;
@property (retain) UITextField *pitch;
@property (retain) UITextField *volume;
@property (retain) UILabel *defaultRate;
@property (retain) UILabel *defaultPitch;
@property (retain) UILabel *defaultVolume;

- (IBAction) speak: (id) sender;

@end

