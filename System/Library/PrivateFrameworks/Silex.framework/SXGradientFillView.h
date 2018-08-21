/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXFillView.h>

@class SXLinearGradientFill, SXClippingView, SXGradientView;

@interface SXGradientFillView : SXFillView {

	SXLinearGradientFill* _gradientFill;
	SXClippingView* _clippingView;
	SXGradientView* _gradientView;

}

@property (nonatomic,readonly) SXLinearGradientFill * gradientFill;              //@synthesize gradientFill=_gradientFill - In the implementation block
@property (nonatomic,readonly) SXClippingView * clippingView;                    //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,readonly) SXGradientView * gradientView;                    //@synthesize gradientView=_gradientView - In the implementation block
-(void)layoutSubviews;
-(CGRect)contentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(SXClippingView *)clippingView;
-(SXGradientView *)gradientView;
-(CGRect)fillFrameWithBoundingSize:(CGSize)arg1 ;
-(id)initWithGradientFill:(id)arg1 gradientFactory:(id)arg2 ;
-(SXLinearGradientFill *)gradientFill;
@end

