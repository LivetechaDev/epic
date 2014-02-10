//
//  ViewController.h


#import <UIKit/UIKit.h>
#import "AppDelegate.h"
@interface ViewController : UIViewController<UIImagePickerControllerDelegate,UINavigationControllerDelegate>
{
    UIImagePickerController * galleryPicker;
    UIImagePickerController * cameraPicker;
    
    AppDelegate * theDelegate;
    
    int imageToDisplay;
    
    IBOutlet UIImageView * tutorialImageview;
    IBOutlet UIImageView * firstImageview;
    
    IBOutlet UIView * bottomview;
    IBOutlet UIView * iphone5bottomview;
    IBOutlet UIView * firstView;
    IBOutlet UIView * tutorialView;
    
    IBOutlet UIButton * cancelBtn;
    IBOutlet UIButton * cancelBtnIphone5;
    IBOutlet UIButton * cameraBtn;
    IBOutlet UIButton * cameraBtnIphone5;
    IBOutlet UIButton * libraryBtn;
    IBOutlet UIButton * libraryBtnIphone5;
    IBOutlet UIButton * CameraSwitch;
    IBOutlet UIButton * CameraSwitchIphone5;
    IBOutlet UIButton * whiteBgBtn;
    IBOutlet UIButton * whiteBgBtnIphone5;

    
    UITapGestureRecognizer * tapGesture;
    UISwipeGestureRecognizer * leftswipeGesture;
    UISwipeGestureRecognizer * rightswipeGesture;
    
}

-(IBAction)bottomOptions:(id)sender;
-(IBAction)openLibrary:(id)sender;
-(IBAction)createWhiteBackground:(id)sender;
-(IBAction)selectTutorial:(id)sender;
-(IBAction)firstimageClicked:(UIButton *)sender;

-(void)openCamera;
-(void)showleft:(id)sender;
-(void)showRight:(id)sender;
-(void)singleTappedToDismiss:(id)sender;

@end
