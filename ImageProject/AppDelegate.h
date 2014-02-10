//
//  AppDelegate.h
//  ImageProject
//
//  Created by  on 17/11/12.
//  Copyright (c) 2012 . All rights reserved.
//

#import <UIKit/UIKit.h>

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    UINavigationController * navigationController;
    UIColor * selectedColor;
    NSString * fontName;
    int fontSize;
    BOOL isUnderlineSelected;
    int rangeValue;
    NSString * selectetdColorString;
    BOOL isSingleCharacter;
    BOOL isSpaceCharacter;
    BOOL isDoodleCreated;
    int featureSelected;
 
    NSMutableArray * storeSelectedColors;
    BOOL isGestureEnable;
    UIView * PicScreenbottomView;
    NSMutableArray * storeTextColors;
}
@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) ViewController *viewController;
@property (nonatomic,retain) UINavigationController * navigationController;
@property (nonatomic,retain) UIImage * capturedImage;
@property (nonatomic,retain) UIColor * selectedColor;
@property (nonatomic,retain) NSString * fontName;
@property (nonatomic,retain) NSString * selectetdColorString;
@property (nonatomic,assign) int fontSize;
@property (nonatomic,assign) BOOL isUnderlineSelected;
@property (nonatomic,assign) int rangeValue;
@property (nonatomic,assign) BOOL isSingleCharacter;
@property (nonatomic,assign) BOOL isSpaceCharacter;
@property (nonatomic,assign) BOOL isDoodleCreated;
@property (nonatomic,assign) int featureSelected;
@property (nonatomic,retain)  NSMutableArray * storeSelectedColors;
@property (nonatomic,retain)  NSMutableArray * storeTextColors;
@property (nonatomic,assign) BOOL isGestureEnable;
@property (nonatomic,retain) UIView * PicScreenbottomView;
@end
