/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PKPaymentHeroImageControllerDelegate.h>

@protocol PKHeroImageView;
@class UIView, NSMutableArray, UIImageView, UILabel, PKPaymentHeroImageController, NSMutableDictionary, NSString;

@interface PKPaymentSetupHeroView : UIView <PKPaymentHeroImageControllerDelegate> {

	long long _context;
	CGSize _aspectSize;
	BOOL _isAnimating;
	UIView* _backgroundView;
	UIView*<PKHeroImageView> _heroImageView;
	NSMutableArray* _cardViews;
	UIImageView* _presentedCard;
	unsigned long long _animationContext;
	UILabel* _instructionLabel;
	PKPaymentHeroImageController* _heroImageController;
	NSMutableDictionary* _networkImageViewsMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assetBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)stopAnimation;
-(void)startAnimation;
-(void)_createSubviews;
-(id)pk_childrenForAppearance;
-(id)initWithContext:(long long)arg1 heroImageController:(id)arg2 ;
-(void)_promptTapToRadarWithTitle:(id)arg1 description:(id)arg2 ;
-(CGRect)_frameForCardView:(id)arg1 ;
-(CGRect)_frameForInstructionLabel;
-(unsigned long long)_indexOfNextObject:(id)arg1 withArray:(id)arg2 ;
-(void)_transitionFromCardToCard:(id)arg1 ;
-(id)_imageWithData:(id)arg1 ;
-(BOOL)_isSmallPhone;
-(void)_createCardViewsWithImages:(id)arg1 ;
-(double)_instructionFontSizeForContext:(long long)arg1 ;
-(void)_setCardViews:(id)arg1 networks:(id)arg2 ;
-(id)_resizeImage:(id)arg1 ;
-(void)_finishedTransitionToCard:(id)arg1 ;
-(void)heroImageController:(id)arg1 didFinishDownloadingImageData:(id)arg2 forNetwork:(id)arg3 error:(id)arg4 ;
@end

