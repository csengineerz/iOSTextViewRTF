

#import <UIKit/UIKit.h>
#import "RTEGestureRecognizer.h"
#import "SaveLogoImages.h"

@interface RichTextEditorViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate> {
    NSTimer *timer;
    BOOL currentBoldStatus;
    BOOL currentItalicStatus;
    BOOL currentUnderlineStatus;
    int currentFontSize;
    NSString *currentForeColor;    
    NSString *currentFontName;
    BOOL currentUndoStatus;
    BOOL currentRedoStatus;
    UIPopoverController *imagePickerPopover;
    CGPoint initialPointOfImage;
}
@property (retain, nonatomic) IBOutlet UIWebView *webView;
@property (nonatomic, retain) NSTimer *timer;
- (void)checkSelection:(id)sender;
- (IBAction)diamondBBtn:(id)sender;
- (IBAction)setBgColor:(id)sender;
- (IBAction)lockInteraction:(id)sender;
@property (retain, nonatomic) IBOutlet UIButton *interactionBtnOutlet;
- (IBAction)bullets1:(id)sender;
- (IBAction)bullets2:(id)sender;
- (IBAction)bullets3:(id)sender;
- (IBAction)alignRight:(id)sender;
- (IBAction)alignCentre:(id)sender;
- (IBAction)fontSizeDescrease:(id)sender;
- (IBAction)fontSizeIncrease:(id)sender;
@property (retain, nonatomic) IBOutlet UIButton *fontSizeUpOutlet;
@property (retain, nonatomic) IBOutlet UIButton *fontSizeDownOutlet;
- (IBAction)testingPurpose:(id)sender;

@property (retain, nonatomic) IBOutlet UIView *leftMenuView;
@property (retain, nonatomic) IBOutlet UIView *bottomMenuView;



- (IBAction)alignLeft:(id)sender;



@end
