/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImageView, SiriUITextContainerView, SiriUISashItem;

@interface SiriUISashView : UIView {

	UIView* _contentView;
	UIView* _overlayView;
	UIImageView* _imageView;
	SiriUITextContainerView* _textContainerView;
	SiriUISashItem* _sashItem;

}

@property (nonatomic,readonly) SiriUISashItem * sashItem;              //@synthesize sashItem=_sashItem - In the implementation block
+(id)_font;
+(SCD_Struct_Si6)_textContainerStyleForSashItem:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(SiriUISashItem *)sashItem;
-(void)setSashItem:(id)arg1 locale:(id)arg2 ;
@end

