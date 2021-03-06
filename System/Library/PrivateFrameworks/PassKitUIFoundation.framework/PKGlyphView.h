/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PKFingerprintGlyphViewDelegate.h>
#import <libobjc.A.dylib/LAUIPearlGlyphViewDelegate.h>

@protocol PKGlyphViewDelegate;
@class NSMutableArray, NSString, PKFingerprintGlyphView, LAUIPearlGlyphView, PKPhoneGlyphLayer, PKCheckGlyphLayer, PKMicaLayer, CALayer, UIColor;

@interface PKGlyphView : UIView <PKFingerprintGlyphViewDelegate, LAUIPearlGlyphViewDelegate> {

	long long _style;
	unsigned long long _transitionIndex;
	BOOL _transitioning;
	long long _priorState;
	NSMutableArray* _transitionCompletionHandlers;
	double _lastAnimationWillFinish;
	BOOL _phoneWiggling;
	NSString* _phoneWiggleAnimationKey;
	struct {
		unsigned showingPhone : 1;
		unsigned phoneRotated : 1;
		unsigned showingUserIntentPhone : 1;
		unsigned showingUserIntentArrow : 1;
	}  _layoutFlags;
	PKFingerprintGlyphView* _fingerprintView;
	LAUIPearlGlyphView* _pearlView;
	PKPhoneGlyphLayer* _phoneLayer;
	PKCheckGlyphLayer* _checkLayer;
	PKMicaLayer* _userIntentArrowLayer;
	PKMicaLayer* _userIntentPhoneLayer;
	double _phoneAspectRatio;
	CALayer* _customImageLayer;
	UIColor* _secondaryColor;
	long long _colorMode;
	UIColor* _primaryColor;
	CGImageRef _customImage;
	long long _state;
	id<PKGlyphViewDelegate> _delegate;
	UIEdgeInsets _customImageAlignmentEdgeInsets;

}

@property (nonatomic,readonly) long long colorMode;                                      //@synthesize colorMode=_colorMode - In the implementation block
@property (nonatomic,copy,readonly) UIColor * primaryColor;                              //@synthesize primaryColor=_primaryColor - In the implementation block
@property (assign,nonatomic) BOOL fadeOnRecognized; 
@property (nonatomic,readonly) UIEdgeInsets customImageAlignmentEdgeInsets;              //@synthesize customImageAlignmentEdgeInsets=_customImageAlignmentEdgeInsets - In the implementation block
@property (nonatomic,readonly) CGImageRef customImage;                                   //@synthesize customImage=_customImage - In the implementation block
@property (nonatomic,readonly) long long state;                                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<PKGlyphViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversOfState;
-(long long)colorMode;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<PKGlyphViewDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<PKGlyphViewDelegate>)arg1 ;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(UIColor *)primaryColor;
-(void)fingerprintGlyphView:(id)arg1 didLayoutContentLayer:(id)arg2 ;
-(void)_performTransitionWithTransitionIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(double)_minimumAnimationDurationForStateTransition;
-(void)_updateLastAnimationTimeWithAnimationOfDuration:(double)arg1 ;
-(void)_executeAfterMinimumAnimationDurationForStateTransition:(/*^block*/id)arg1 ;
-(void)_finishTransitionForIndex:(unsigned long long)arg1 ;
-(void)_startPhoneWiggle;
-(void)_endPhoneWiggle;
-(id)createCustomImageLayer;
-(void)_applyColorMode:(BOOL)arg1 ;
-(void)_updatePhoneLayoutWithTransitionIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateUserIntentLayoutAnimated:(BOOL)arg1 ;
-(void)_updatePhoneWiggleIfNecessary;
-(void)_updateCustomImageLayerOpacityAnimated:(BOOL)arg1 ;
-(void)_updateCheckViewStateAnimated:(BOOL)arg1 ;
-(void)_setRecognizedIfNecessaryWithTransitionIndex:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(CGPoint)_phonePositionWhileShownWithRotationPercentage:(double)arg1 ;
-(CATransform3D)_phoneTransformDeltaWhileShownFromRotationPercentage:(double)arg1 toPercentage:(double)arg2 ;
-(CGPoint)_phonePositionDeltaWhileShownFromRotationPercentage:(double)arg1 toPercentage:(double)arg2 ;
-(UIColor*)_primaryColorForStyle:(long long)arg1 mode:(long long)arg2 ;
-(void)_setPrimaryColor:(UIColor*)arg1 animated:(BOOL)arg2 ;
-(UIColor*)_secondaryColorForStyle:(long long)arg1 mode:(long long)arg2 ;
-(void)_setSecondaryColor:(UIColor*)arg1 animated:(BOOL)arg2 ;
-(void)_layoutContentLayer:(id)arg1 ;
-(void)pearlGlyphView:(id)arg1 didLayoutContentLayer:(id)arg2 ;
-(UIEdgeInsets)customImageAlignmentEdgeInsets;
-(CGImageRef)customImage;
-(void)updateRasterizationScale:(double)arg1 ;
-(void)setState:(long long)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setColorMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setCustomImage:(CGImageRef)arg1 withAlignmentEdgeInsets:(UIEdgeInsets)arg2 ;
-(void)setFadeOnRecognized:(BOOL)arg1 ;
-(BOOL)fadeOnRecognized;
-(void)_executeTransitionCompletionHandlers:(BOOL)arg1 ;
@end

