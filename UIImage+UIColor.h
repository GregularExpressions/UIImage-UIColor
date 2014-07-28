//
//  UIImage+UIColor.h
//
//  Created by Greg Gunner on 28/07/2014.
//

#import <UIKit/UIKit.h>

@interface UIImage (UIColor)
/**
 *  Create a 1px by 1px UIImage from a given UIColor
 *
 *  @param color The UIColor you want used
 *
 *  @return 1px by 1px UIImage of the given color.
 */
+ (UIImage *) imageWithColor:(UIColor *)color;
@end
