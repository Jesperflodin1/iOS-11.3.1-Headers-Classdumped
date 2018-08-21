/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView, UIVisualEffect, UIVisualEffectView;

@interface _UITableViewCellSeparatorView : UIView {

	BOOL _drawsWithVibrantLightMode;
	UIView* _backgroundView;
	UIView* _overlayView;
	UIVisualEffect* _separatorEffect;
	UIVisualEffectView* _effectView;

}

@property (assign,nonatomic) BOOL drawsWithVibrantLightMode;                //@synthesize drawsWithVibrantLightMode=_drawsWithVibrantLightMode - In the implementation block
@property (nonatomic,retain) UIVisualEffect * separatorEffect;              //@synthesize separatorEffect=_separatorEffect - In the implementation block
-(void)layoutSubviews;
-(void)setDrawsWithVibrantLightMode:(BOOL)arg1 ;
-(void)setSeparatorEffect:(UIVisualEffect *)arg1 ;
-(UIVisualEffect *)separatorEffect;
-(BOOL)drawsWithVibrantLightMode;
@end
