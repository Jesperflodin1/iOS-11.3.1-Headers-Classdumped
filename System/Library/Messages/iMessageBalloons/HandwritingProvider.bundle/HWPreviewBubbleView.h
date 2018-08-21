/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/HandwritingProvider.bundle/HandwritingProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HandwritingProvider/HandwritingProvider-Structs.h>
#import <UIKit/UIView.h>
#import <HandwritingProvider/DKInkViewRenderDelegate.h>

@class DKInkView, UIImageView, NSString;

@interface HWPreviewBubbleView : UIView <DKInkViewRenderDelegate> {

	DKInkView* _inkView;
	UIImageView* _imageView;
	long long _lastPointCount;

}

@property (nonatomic,retain) UIImageView * imageView;                 //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) long long lastPointCount;                //@synthesize lastPointCount=_lastPointCount - In the implementation block
@property (assign,nonatomic,__weak) DKInkView * inkView;              //@synthesize inkView=_inkView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)lastPointCount;
-(void)setLastPointCount:(long long)arg1 ;
-(void)setInkView:(DKInkView *)arg1 ;
-(DKInkView *)inkView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)_commonInit;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)updateImage;
-(void)updatePreview;
-(void)updateVisibility;
-(void)inkViewDidRender:(id)arg1 ;
@end

