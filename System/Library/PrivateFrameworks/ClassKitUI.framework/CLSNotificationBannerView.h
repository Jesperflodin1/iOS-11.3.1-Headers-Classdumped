/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClassKitUI.framework/ClassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface CLSNotificationBannerView : UIView {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	double _preferredWidthPad;
	double _duration;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) UIImageView * imageView;                 //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                  //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,readonly) double preferredWidthPad;              //@synthesize preferredWidthPad=_preferredWidthPad - In the implementation block
@property (assign,nonatomic) double duration;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) id completionHandler;                      //@synthesize completionHandler=_completionHandler - In the implementation block
+(BOOL)_preventsAppearanceProxyCustomization;
+(id)bundle;
+(id)bannerTitleAttributes;
+(id)bannerMessageAttributes;
-(void)layoutSubviews;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(UILabel *)titleLabel;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)hideBanner;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(id)initWithTitle:(id)arg1 imageView:(id)arg2 message:(id)arg3 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 ;
-(void)callCompletionHandler;
-(double)preferredWidthPad;
-(id)initWithTitle:(id)arg1 message:(id)arg2 ;
-(void)showWithCompletionHandler:(/*^block*/id)arg1 ;
@end
