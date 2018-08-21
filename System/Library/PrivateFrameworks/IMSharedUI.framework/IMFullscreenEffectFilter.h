/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, CAFilter, UIColor;

@interface IMFullscreenEffectFilter : NSObject {

	long long _type;
	unsigned long long _direction;
	NSArray* _balloonFilters;
	NSArray* _balloonBackdropFilters;
	CAFilter* _balloonCompositingFilter;
	double _balloonAlpha;
	double _contentAlpha;
	CAFilter* _textCompositingFilter;
	UIColor* _textColor;

}

@property (assign,nonatomic) long long type;                                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long direction;                   //@synthesize direction=_direction - In the implementation block
@property (nonatomic,copy) NSArray * balloonFilters;                         //@synthesize balloonFilters=_balloonFilters - In the implementation block
@property (nonatomic,copy) NSArray * balloonBackdropFilters;                 //@synthesize balloonBackdropFilters=_balloonBackdropFilters - In the implementation block
@property (nonatomic,copy) CAFilter * balloonCompositingFilter;              //@synthesize balloonCompositingFilter=_balloonCompositingFilter - In the implementation block
@property (assign,nonatomic) double balloonAlpha;                            //@synthesize balloonAlpha=_balloonAlpha - In the implementation block
@property (assign,nonatomic) double contentAlpha;                            //@synthesize contentAlpha=_contentAlpha - In the implementation block
@property (nonatomic,copy) CAFilter * textCompositingFilter;                 //@synthesize textCompositingFilter=_textCompositingFilter - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                              //@synthesize textColor=_textColor - In the implementation block
-(id)init;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setDirection:(unsigned long long)arg1 ;
-(unsigned long long)direction;
-(UIColor *)textColor;
-(void)setContentAlpha:(double)arg1 ;
-(double)contentAlpha;
-(NSArray *)balloonFilters;
-(CAFilter *)textCompositingFilter;
-(double)balloonAlpha;
-(NSArray *)balloonBackdropFilters;
-(CAFilter *)balloonCompositingFilter;
-(void)setBalloonFilters:(NSArray *)arg1 ;
-(void)setBalloonBackdropFilters:(NSArray *)arg1 ;
-(void)setBalloonCompositingFilter:(CAFilter *)arg1 ;
-(void)setBalloonAlpha:(double)arg1 ;
-(void)setTextCompositingFilter:(CAFilter *)arg1 ;
@end

