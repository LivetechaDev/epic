//
//  doodledraw.h


#import <UIKit/UIKit.h>
#import "ViewController.h"
#import "ColorPickerImageView.h"



@interface doodledraw : UIViewController<UINavigationBarDelegate,UIImagePickerControllerDelegate,UINavigationControllerDelegate,pickedColorDelegate,UIGestureRecognizerDelegate>
{
  
    UIViewController *modal;
    
    BOOL mouseSwiped;
	BOOL openColorWheel;
	int mouseMoved;
    
    CGPoint lastPoint;
    
    UIColor *shade;
    
    IBOutlet UISlider *slider;
    
    IBOutlet ColorPickerImageView * colorWheel;
    
    IBOutlet UIView *colorpallete;
    IBOutlet UIView * bottomView;
    IBOutlet UIView * bottomOptionsView;
    IBOutlet UIView *mergeviewdoodle;

    IBOutlet UIButton *redo;
    IBOutlet UIButton *undo;
    IBOutlet UIButton * pencilBtn;
    IBOutlet UIButton * eraseBtn;
    IBOutlet UIButton * fillBucketBtn;
    
    IBOutlet UIImageView * thicknessImage;
    IBOutlet UIImageView * thicknessBgImage;
    IBOutlet UIImageView *background;
    UIImageView *drawImage;

    IBOutlet UIScrollView * colorsBtnScroll;
    
    AppDelegate *theDelegate;
    
    UIButton * btn;

    CGFloat _firstX;
	CGFloat _firstY;

}

@property (nonatomic, retain)   IBOutlet UISlider *slider;
@property (nonatomic, retain) ColorPickerImageView* colorWheel;
@property (nonatomic, retain) UIButton* tapMeButton;

- (IBAction)drawerase:(id)sender;
- (IBAction)widthslider:(id)sender;
- (IBAction)choosecolor:(UIButton *)sender;
- (IBAction)deldoodle:(id)sender;
- (IBAction)undodraw:(id)sender;
- (IBAction)redodraw:(id)sender;
- (IBAction)removeOptionScreen:(id)sender;
- (IBAction)back:(id)sender;
- (IBAction)load:(id)sender;
- (IBAction)changeBackground:(id)sender;
- (IBAction)fillBucketBtn:(id)sender;

- (void) pickedColor:(UIColor*)color;
- (void) animateColorWheelToShow:(BOOL)show duration:(NSTimeInterval)duration;
- (void)adjustColor;
- (void)adjustPositions;
- (void)btnColorSelected:(id)sender;

- (UIImage *)combineImagesdoodle;

@end
