/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSUColor;

@interface TSTTableBadge : NSObject {

	int _badgeType;
	TSUColor* _color;
	double _viewScale;
	CGRect _frame;

}

@property (assign,nonatomic) int badgeType;                 //@synthesize badgeType=_badgeType - In the implementation block
@property (nonatomic,retain) TSUColor * color;              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double viewScale;              //@synthesize viewScale=_viewScale - In the implementation block
@property (assign,nonatomic) CGRect frame;                  //@synthesize frame=_frame - In the implementation block
+(id)badgeWithType:(int)arg1 color:(id)arg2 viewScale:(double)arg3 frame:(CGRect)arg4 ;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(TSUColor *)color;
-(void)setColor:(TSUColor *)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setBadgeType:(int)arg1 ;
-(int)badgeType;
-(double)viewScale;
-(void)setViewScale:(double)arg1 ;
@end

