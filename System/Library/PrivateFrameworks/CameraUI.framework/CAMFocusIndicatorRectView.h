/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface CAMFocusIndicatorRectView : UIView {

	long long _style;
	UIImageView* __imageView;

}

@property (nonatomic,readonly) UIImageView * _imageView;                   //@synthesize _imageView=__imageView - In the implementation block
@property (nonatomic,readonly) long long style;                            //@synthesize style=_style - In the implementation block
@property (assign,getter=isInactive,nonatomic) BOOL inactive; 
@property (assign,getter=isPulsing,nonatomic) BOOL pulsing; 
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(UIImageView *)_imageView;
-(long long)style;
-(id)initWithStyle:(long long)arg1 ;
-(void)setInactive:(BOOL)arg1 ;
-(BOOL)isPulsing;
-(void)setPulsing:(BOOL)arg1 ;
-(BOOL)isInactive;
@end

