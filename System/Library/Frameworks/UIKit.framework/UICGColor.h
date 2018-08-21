/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIColor.h>

@interface UICGColor : UIColor {

	CGColorRef _cachedColor;

}
-(CGColorRef)CGColor;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(BOOL)getWhite:(double*)arg1 alpha:(double*)arg2 ;
-(void)set;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(double)alphaComponent;
-(BOOL)isPatternColor;
-(void)setStroke;
-(void)setFill;
-(BOOL)_isDeepColor;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)colorSpaceName;
@end
