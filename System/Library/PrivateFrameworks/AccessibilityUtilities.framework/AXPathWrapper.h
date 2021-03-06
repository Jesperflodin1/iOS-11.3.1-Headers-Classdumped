/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AXPathWrapper : NSObject <NSSecureCoding> {

	CGPathRef _path;

}

@property (assign,nonatomic) CGPathRef path;              //@synthesize path=_path - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)currentSharedInstance;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGPathRef)path;
-(void)setPath:(CGPathRef)arg1 ;
@end

