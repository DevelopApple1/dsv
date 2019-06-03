/*
	The heart of the tweak!
*/
@interface SBAlert : UIViewController
@end

@interface SBPowerDownController : SBAlert
-(void)cancel;
-(void)showView;
@end

@interface FBSystemService : NSObject
+(id)sharedInstance;
-(void)shutdownAndReboot:(BOOL)arg1;
@end

#define kImagesPath @"/Library/Application Support/SamsungPowerDown"

static int buttonSize = 0;

/*
    Add some variables
*/
UIView *mainView;
UIVisualEffectView *mainEffectView;
UIView *shutdownView;
UIView *respringView;
UIView *safemodeView;
UIView *rebootView;
UILabel *rebootLabel;
UILabel *respringLabel;
UILabel *shutdownLabel;
UILabel *safemodeLabel;