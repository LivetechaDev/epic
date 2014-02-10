//
//  TextEdit.h

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "ColorPickerImageView.h"
#import "PictureScreen.h"
#import <iAd/iAd.h>
@class PictureScreen;

@protocol TextEditDeleagte ;
@interface TextEdit : UIViewController<pickedColorDelegate, ADBannerViewDelegate>
{
    id<TextEditDeleagte> delegate;
    
    IBOutlet UITableView * fontTableName;
    IBOutlet UITableView * fontSizeTable;
    
    IBOutlet UILabel * headingLbl;
    IBOutlet UILabel * fontSizeLbl;
    IBOutlet UILabel * sampleView;
    IBOutlet UILabel * previewLbl;
    
    
    IBOutlet UIView * textEditView;
    IBOutlet UIView * bottomView;
    IBOutlet UIView * colorWheelview;
    IBOutlet UIView * buttonsView;
    IBOutlet UIView * textbuttonsView;
    IBOutlet UIView * textBottomView;
    IBOutlet UIView * topiAdSpaceView;
    
    IBOutlet UIButton * boldBtn;
    IBOutlet UIButton * italicBtn;
    IBOutlet UIButton * backBtn;
    IBOutlet UIButton * doneBtn;
    
    UIButton * btn;
    
    IBOutlet UIScrollView * colorsBtnScroll;
    
    IBOutlet ColorPickerImageView * colorWheel;
    
    NSArray *familyNames;
    NSArray *fontNames;
    NSArray * fontSizeArray;
    
    AppDelegate * theDelegate;
    
    UISwipeGestureRecognizer * swipeLeft;

    UIColor *shade;
    PictureScreen * picScreen;
 
    NSString * selectedFontName;
    
    ADBannerView * adBannerView;

}

@property (nonatomic, retain) ColorPickerImageView* colorWheel;
@property (nonatomic, retain) UIColor *shade;
@property (nonatomic, retain) id<TextEditDeleagte> delegate;
@property (nonatomic, retain) ADBannerView * adBannerView;

-(IBAction)bottomOPtions:(id)sender;
-(IBAction)fontFamilyBtn:(id)sender;
-(IBAction)fontsizeActions:(id)sender;
-(IBAction)switchBtn:(id)sender;
-(IBAction)textSwitchBtn:(id)sender;
-(IBAction)backToMainScreen:(id)sender;

- (void) animateColorWheelToShow:(BOOL)show duration:(NSTimeInterval)duration;
- (void) pickedColor:(UIColor*)color;
- (void)showPreview;
- (void)adjustColor;

@end

@protocol TextEditDeleagte <NSObject>
@required
-(void)checkScroll;
@end
