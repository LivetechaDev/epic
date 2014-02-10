//
//  AppDelegate.m
//  ImageProject
//
//  Created by  on 17/11/12.
//  Copyright (c) 2012 . All rights reserved.
//

#import "AppDelegate.h"

#import "ViewController.h"
#import "PictureScreen.h"
#import "Reachability.h"
@implementation AppDelegate
@synthesize navigationController,capturedImage,selectedColor,fontName,fontSize,isUnderlineSelected,rangeValue,selectetdColorString,isSingleCharacter,isSpaceCharacter,storeSelectedColors;
@synthesize featureSelected,isDoodleCreated,isGestureEnable,PicScreenbottomView,storeTextColors;
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    [NSThread sleepForTimeInterval:2];
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    // Override point for customization after application launch.
    navigationController=[[UINavigationController alloc]init];
    self.viewController = [[ViewController alloc] initWithNibName:@"ViewController" bundle:nil];
    self.window.rootViewController = self.navigationController;
    [application setApplicationSupportsShakeToEdit:YES];
    [self.navigationController setNavigationBarHidden:YES];
    storeSelectedColors =[[NSMutableArray alloc]init];
    storeTextColors =[[NSMutableArray alloc]init];
    isUnderlineSelected=NO;
    isSpaceCharacter=YES;
    rangeValue=-1;
    isSingleCharacter=NO;
    isDoodleCreated=NO;
    isGestureEnable=YES;
    featureSelected=0;
    PictureScreen * screen = [[PictureScreen alloc]initWithNibName:@"PictureScreen" bundle:nil];
    [self.navigationController pushViewController:self.viewController animated:YES];
    [self.window makeKeyAndVisible];
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application
{
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later. 
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}
- (BOOL)isNetworkAvailable {
    Reachability * reachability = [Reachability reachabilityForInternetConnection];
    if ([reachability currentReachabilityStatus] == NotReachable) {
        UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:@"E-Pic"
                                                            message:@"No Network is accessible. Please connect and try again."
                                                           delegate:nil
                                                  cancelButtonTitle:@"OK"
                                                  otherButtonTitles:nil];
        
        
        [alertView setBackgroundColor:[UIColor clearColor]];
        
        UIImageView *backgroundImageView = [[UIImageView alloc]initWithImage:[UIImage imageNamed:@"share-bg.png"]];
        backgroundImageView.frame = CGRectMake(0, 0, 282, 175);
        backgroundImageView.contentMode = UIViewContentModeScaleToFill;
        [alertView addSubview:backgroundImageView];
        [[[alertView subviews]objectAtIndex:3]setBackgroundColor:[UIColor colorWithRed:.93 green:.79 blue:0 alpha:1]];
        [alertView sendSubviewToBack:backgroundImageView];
        [alertView show];

        
        return NO;
    }
    return YES;
}


@end
