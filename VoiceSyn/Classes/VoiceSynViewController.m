//
//  VoiceSynViewController.m
//  VoiceSyn
//
//  Created by admin on 8/16/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import "VoiceSynViewController.h"

@implementation VoiceSynViewController


- (IBAction) speak: (id) sender  {
	[speech setRate:(float)[rate.text floatValue]];
	[speech setVolume:(float)[volume.text floatValue]];
	[speech setPitch:(float)[pitch.text floatValue]];
	[speech startSpeakingString:text.text];
}

/*
// The designated initializer. Override to perform setup that is required before the view is loaded.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
        // Custom initialization
    }
    return self;
}
*/

/*
// Implement loadView to create a view hierarchy programmatically, without using a nib.
- (void)loadView {
}
*/



// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
    [super viewDidLoad];
	// speech = [[NSClassFromString(@"VSSpeechSynthesizer") alloc] init]; 
	speech = [[VSSpeechSynthesizer alloc] init];
	defaultRate.text = [NSString stringWithFormat:@"Default: %.2f",[speech rate]];
	defaultVolume.text = [NSString stringWithFormat:@"Default: %.2f",[speech volume]];
	defaultPitch.text = [NSString stringWithFormat:@"Default: %.2F",[speech pitch]];
	
	rate.text = [NSString stringWithFormat:@"%.2f",[speech rate]];
	volume.text = [NSString stringWithFormat:@"%.2f",[speech volume]];
	pitch.text = [NSString stringWithFormat:@"%.2f",[speech pitch]];
}

/*
// Override to allow orientations other than the default portrait orientation.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}
*/

- (void)didReceiveMemoryWarning {
	// Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
	
	// Release any cached data, images, etc that aren't in use.
}

- (void)viewDidUnload {
	// Release any retained subviews of the main view.
	// e.g. self.myOutlet = nil;
	[speech release];
}


- (void)dealloc {
    [super dealloc];
}

@end
