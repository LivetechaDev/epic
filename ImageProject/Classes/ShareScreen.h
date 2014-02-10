//
//  ShareScreen.h


#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
#import "AppDelegate.h"
#import <Twitter/Twitter.h>
#import "FBConnect.h"
#import <iAd/iAd.h>

@protocol shareScreenDelegate;

@interface ShareScreen : UIViewController<MFMailComposeViewControllerDelegate,FBSessionDelegate,FBRequestDelegate,FBDialogDelegate, ADBannerViewDelegate>
{
    id<shareScreenDelegate> delegate;
    
    NSData * imageData;
    
    AppDelegate * theDelegate;
    Facebook * FB;
    
    IBOutlet UIView * shareView;
    IBOutlet UIView * BottomView;
    IBOutlet UIView * tutorialView;
    
    IBOutlet UIImageView * finalImage;
    IBOutlet UIImageView * shareImage;
    IBOutlet UIImageView * tutorialImageview;
    
    IBOutlet UIButton * shareBtn;
    
    UISwipeGestureRecognizer * leftswipeGesture;
    UISwipeGestureRecognizer * rightswipeGesture;
    UITapGestureRecognizer * tapGesture;
    
    int buttonSelection;
    int imageToDisplay;
    
    ADBannerView * adBannerView;
    
    IBOutlet UIView * topiAdSpaceView;
}
@property(nonatomic,retain) id<shareScreenDelegate> delegate;
@property(nonatomic, retain) ADBannerView * adBannerView;
-(IBAction)shareUpload:(id)sender;
-(IBAction)bottom:(id)sender;
-(IBAction)shareImage:(id)sender;
-(IBAction)showTutorial:(id)sender;
-(void)showleft:(id)sender;
-(void)showRight:(id)sender;
-(void)singleTappedToDismiss:(id)sender;
@end
@protocol shareScreenDelegate <NSObject>
@required
-(UIImage *)getCombineImage;
@end