/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class _TtC18ASMessagesProvider11ArtworkView;

@interface ASMessagesProvider.TodayCardMarketingLockupOverlayView : UIControl <UIGestureRecognizerDelegate> {

	 materialBackground;
	 lockupView;
	 marketingLabel;
	 applyMarketing;
	 tapGestureRecognizer;
	 isExpanded;
	 clickActionHandler;

}

@property (assign,nonatomic) double _continuousCornerRadius; 
@property (readonly,nonatomic) CGSize preferredArtworkSize; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider11ArtworkView * artworkView; 
@property (assign,nonatomic) BOOL isExpanded; 
@property (assign,nonatomic) BOOL wantsCardConsistentMargins; 
@property (copy,nonatomic) id clickActionHandler; 
+(double)minimumHeight;
-(BOOL)wantsCardConsistentMargins;
-(void)setWantsCardConsistentMargins:(BOOL)arg1 ;
-(id)clickActionHandler;
-(void)setClickActionHandler:(id)arg1 ;
-(void)handleTapWithGestureRecognizer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(double)_continuousCornerRadius;
-(void)prepareForReuse;
-(BOOL)isExpanded;
-(void)setIsExpanded:(BOOL)arg1 ;
-(CGSize)preferredArtworkSize;
-(_TtC18ASMessagesProvider11ArtworkView *)artworkView;
@end
