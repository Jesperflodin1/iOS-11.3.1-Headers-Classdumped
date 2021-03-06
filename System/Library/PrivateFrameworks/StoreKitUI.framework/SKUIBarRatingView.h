/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@interface SKUIBarRatingView : UIView {

	long long _barRatingStyle;
	long long _numberOfBars;
	float _ratingValue;

}

@property (assign,nonatomic) long long barRatingStyle;              //@synthesize barRatingStyle=_barRatingStyle - In the implementation block
@property (assign,nonatomic) long long numberOfBars;                //@synthesize numberOfBars=_numberOfBars - In the implementation block
@property (assign,nonatomic) float ratingValue;                     //@synthesize ratingValue=_ratingValue - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setNumberOfBars:(long long)arg1 ;
-(long long)numberOfBars;
-(float)ratingValue;
-(void)setBarRatingStyle:(long long)arg1 ;
-(void)setRatingValue:(float)arg1 ;
-(long long)barRatingStyle;
@end

