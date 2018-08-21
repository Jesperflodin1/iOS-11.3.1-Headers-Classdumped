/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIControl.h>

@class HUIconView;

@interface HUIconButton : UIControl {

	HUIconView* _iconView;

}

@property (nonatomic,retain) HUIconView * iconView;                              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,readonly) id<HFIconDescriptor> iconDescriptor; 
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)tintColorDidChange;
-(void)setSelected:(BOOL)arg1 ;
-(void)setIconView:(HUIconView *)arg1 ;
-(HUIconView *)iconView;
-(id<HFIconDescriptor>)iconDescriptor;
-(void)updateWithIconDescriptor:(id)arg1 animated:(BOOL)arg2 ;
@end

