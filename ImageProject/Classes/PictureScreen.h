//
//  PictureScreen.h


#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import <QuartzCore/QuartzCore.h>
#import "TextEdit.h"
#import <iAd/iAd.h>
@class TextEdit;
@interface PictureScreen : UIViewController<UIGestureRecognizerDelegate,UITextViewDelegate, ADBannerViewDelegate>
{
    AppDelegate * theDelegate;
    
    IBOutlet UIImageView * clickedImageView;
    IBOutlet UIImageView * effectsBG;
    IBOutlet UIImageView *previewImgView;
    IBOutlet UIImageView * scrollBG;
    
    UIImage * effectImage;
    UIImageView * textBoxImage;
    
    IBOutlet UIButton * cameraBtn;
    IBOutlet UIButton * undoButton;
    IBOutlet UIButton * redoButton;
    
    UIButton * checkBtn ;
    UIButton * closeBtn ;
    
    UIImageView * xAxisImage;
    UIImageView * yAxisImage;
    
    
    UITapGestureRecognizer *tapGesture;
    UISwipeGestureRecognizer * swipeleft;
    UISwipeGestureRecognizer * swiperight;
    UISwipeGestureRecognizer * swipeUp;
    UISwipeGestureRecognizer * swipeDown;
    UIPanGestureRecognizer *panRecognizer;
    UIPanGestureRecognizer *panRecognizer1;
    UIPanGestureRecognizer *panRecognizer2;
    UIPinchGestureRecognizer *pinchRecognizer;
    
    IBOutlet UIView * effectsView;
    IBOutlet UIView * bottomView;
    IBOutlet UIView * effectsBottomView;
    IBOutlet UIView * mainFrameImage;
    IBOutlet UIView * previewView;
    IBOutlet UIView * IWAView;
    IBOutlet UIView * topiAdSpaceView;
    
    ADBannerView * adBannerView;
    
    UIView * textCoverView;
    
    UITextView * textView;
    UIViewController * effectsViewController;
    
    CGFloat _firstX;
	CGFloat _firstY;
    CGFloat _lastScale;
    
    CAShapeLayer *_marque;
    NSString * selectedBtnString;
    NSRange saveRange;
    BOOL test;
    
    NSMutableArray * imageArray;
    
    
    IBOutlet UIScrollView * scrollColorBtn;
    
    
    IBOutlet UILabel * effectNameLBL;
    TextEdit * editScreen;
    
    IBOutlet UISlider * sliderEffect;
    
    CGPoint startPoint;
}
@property (nonatomic,retain) NSString * selectedBtnString;
@property (nonatomic,retain) UISwipeGestureRecognizer * swipeleft;
@property (nonatomic,retain) UISwipeGestureRecognizer * swiperight;
@property (nonatomic,retain) UISwipeGestureRecognizer * swipeUp;
@property (nonatomic,retain) UISwipeGestureRecognizer * swipeDown;
@property (nonatomic,retain) IBOutlet UIImageView * clickedImageView;
@property (nonatomic,retain) IBOutlet UIView * bottomView;
@property (nonatomic,retain) ADBannerView * adBannerView;

-(IBAction)cameraAction:(id)sender;
-(IBAction)saveToGallery:(id)sender;
-(IBAction)chooseImageEffect:(id)sender;
-(IBAction)undoredo:(id)sender;
-(IBAction)removeEffectsScreen:(id)sender;
-(IBAction)borderEffects:(id)sender;
-(IBAction)previewClicked:(id)sender;
-(IBAction)slidervalueChanged:(UISlider *)sender;
-(IBAction)IWA:(id)sender;
-(IBAction)createWhiteBackground:(id)sender;

-(void)btnColorSelection:(id)sender;
-(void)bringShareScreen;
-(void)tapDetected:(UITapGestureRecognizer *)recognizer;
-(void)move:(UIPanGestureRecognizer *)recognizer;
-(void)moveX:(UIPanGestureRecognizer *)recognizer;
-(void)moveY:(UIPanGestureRecognizer *)recognizer;
-(void)removeTextView;
-(void)editText:(id)sender;
-(void)choosecolor:(id)sender;
-(void)doodleScreen:(id)sender;
-(void)showEffects:(id)sender;
-(void)backToMainScreen:(id)sender;
-(void)backToMainScreen1:(id)sender;
-(void)textViewDone;
-(void)adjustScroll;
-(void)okBtn;
-(void)scale:(UIPinchGestureRecognizer *)recognizer;
-(void)checkScroll;
-(UIImage *)getCombineImage;

@end
