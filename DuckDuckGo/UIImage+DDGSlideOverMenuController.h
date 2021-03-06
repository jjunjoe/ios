//
//  UIImage+DDGSlideOverMenuController.h
//  DuckDuckGo
//
//  Created by Mic Pringle on 27/03/2014.
//
//

#import <UIKit/UIKit.h>

@interface UIImage (DDGSlideOverMenuController)

- (UIImage *)imageWithBlurRadius:(CGFloat)blurRadius
                       tintColor:(UIColor *)tintColor
           saturationDeltaFactor:(CGFloat)saturationDeltaFactor
                       maskImage:(UIImage *)maskImage;

@end
