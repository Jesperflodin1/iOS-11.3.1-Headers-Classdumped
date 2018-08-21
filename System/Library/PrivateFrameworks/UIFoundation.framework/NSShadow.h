/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSColor;

@interface NSShadow : NSObject <NSCopying, NSCoding> {

	unsigned long long _shadowFlags;
	CGSize _shadowOffset;
	double _shadowBlurRadius;
	NSColor* _shadowColor;

}

@property (assign,nonatomic) CGSize shadowOffset;                  //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) double shadowBlurRadius;              //@synthesize shadowBlurRadius=_shadowBlurRadius - In the implementation block
@property (nonatomic,retain) id shadowColor; 
+(void)initialize;
+(id)shadow;
+(id)defaultShadowColor;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CGSize)shadowOffset;
-(id)shadowColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShadowColor:(id)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setShadowBlurRadius:(double)arg1 ;
-(double)shadowBlurRadius;
-(id)initWithShadow:(id)arg1 ;
@end
