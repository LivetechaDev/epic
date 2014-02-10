//
//  ColorPickerImageView.h

#import <Foundation/Foundation.h>

@protocol pickedColorDelegate <NSObject>

- (void) pickedColor:(UIColor*)color;

@end

@interface ColorPickerImageView : UIImageView {
	UIColor* lastColor;
	id <pickedColorDelegate> delegate;
}

@property (nonatomic, retain) UIColor* lastColor;
@property (nonatomic, retain) id <pickedColorDelegate> delegate;


- (UIColor*) getPixelColorAtLocation:(CGPoint)point;
- (CGContextRef) createARGBBitmapContextFromImage:(CGImageRef)inImage;


@end
