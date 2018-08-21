/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIImage;

@interface VSIdentityProviderLogoView : UIView {

	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImage * logo; 
@property (nonatomic,readonly) double marginLength; 
@property (nonatomic,readonly) CGSize preferredImageSize; 
-(UIImage *)logo;
-(void)setLogo:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(double)_height;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(CGSize)preferredImageSize;
-(double)marginLength;
-(CGRect)_imageViewFrame;
@end

