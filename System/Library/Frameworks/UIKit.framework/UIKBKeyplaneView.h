/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBSplitImageView.h>
#import <UIKit/UIKBCacheableView.h>

@class UIKBTree, UIKBCacheToken, UIKBKeyViewAnimator, UIKeyboardEmojiKeyDisplayController, UIKBKeyView, NSMutableDictionary, NSTimer, UIKBRenderConfig, UIKBRenderingContext, UIKBRenderFactory, UIKBSplitImageView, NSString;

@interface UIKBKeyplaneView : UIKBSplitImageView <UIKBCacheableView> {

	UIKBTree* _keyplane;
	UIKBTree* _defaultKeyplane;
	UIKBCacheToken* _cacheToken;
	UIKBCacheToken* _defaultKeyplaneCacheToken;
	UIKBKeyViewAnimator* _keyViewAnimator;
	UIKeyboardEmojiKeyDisplayController* _emojiKeyManager;
	UIKBKeyView* _candidateGapView;
	NSMutableDictionary* _subviewIndex;
	NSMutableDictionary* _activeViewIndex;
	NSMutableDictionary* _renderedKeyViews;
	NSMutableDictionary* _delayedDeactivationKeys;
	NSTimer* _activatedTimer;
	BOOL _performingDeactivation;
	BOOL _shouldDrawRect;
	UIKBRenderConfig* _renderConfig;
	UIKBRenderingContext* _renderingContext;
	UIKBRenderFactory* _factory;
	UIKBSplitImageView* _keyBorders;
	UIKBSplitImageView* _keyBackgrounds;
	UIKBSplitImageView* _keyCaps;

}

@property (nonatomic,retain) UIKBTree * keyplane;                                                //@synthesize keyplane=_keyplane - In the implementation block
@property (nonatomic,retain) UIKBTree * defaultKeyplane;                                         //@synthesize defaultKeyplane=_defaultKeyplane - In the implementation block
@property (nonatomic,retain) UIKBCacheToken * cacheToken;                                        //@synthesize cacheToken=_cacheToken - In the implementation block
@property (nonatomic,retain) UIKBCacheToken * defaultKeyplaneCacheToken;                         //@synthesize defaultKeyplaneCacheToken=_defaultKeyplaneCacheToken - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * renderConfig;                                    //@synthesize renderConfig=_renderConfig - In the implementation block
@property (nonatomic,retain) UIKBRenderingContext * renderingContext;                            //@synthesize renderingContext=_renderingContext - In the implementation block
@property (nonatomic,retain) UIKBRenderFactory * factory;                                        //@synthesize factory=_factory - In the implementation block
@property (nonatomic,retain) UIKBKeyViewAnimator * keyViewAnimator;                              //@synthesize keyViewAnimator=_keyViewAnimator - In the implementation block
@property (nonatomic,retain) UIKeyboardEmojiKeyDisplayController * emojiKeyManager;              //@synthesize emojiKeyManager=_emojiKeyManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) BOOL cacheDeferable; 
@property (nonatomic,readonly) double cachedWidth; 
@property (nonatomic,readonly) BOOL keepNonPersistent; 
-(void)setState:(int)arg1 forKey:(id)arg2 ;
-(UIKBRenderFactory *)factory;
-(id)viewForKey:(id)arg1 ;
-(void)removeFromSuperview;
-(UIKBRenderConfig *)renderConfig;
-(UIKBKeyViewAnimator *)keyViewAnimator;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)dimKeys:(id)arg1 ;
-(UIKeyboardEmojiKeyDisplayController *)emojiKeyManager;
-(BOOL)_canDrawContent;
-(void)displayLayer:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(void)setKeyViewAnimator:(UIKBKeyViewAnimator *)arg1 ;
-(void)setEmojiKeyManager:(UIKeyboardEmojiKeyDisplayController *)arg1 ;
-(UIKBRenderingContext *)renderingContext;
-(void)prepareForDisplay;
-(UIKBTree *)keyplane;
-(void)setKeyplane:(UIKBTree *)arg1 ;
-(NSString *)cacheKey;
-(double)cachedWidth;
-(id)cacheKeysForRenderFlags:(id)arg1 ;
-(BOOL)cacheDeferable;
-(BOOL)keepNonPersistent;
-(void)drawContentsOfRenderers:(id)arg1 ;
-(void)purgeSubviews;
-(void)purgeKeyViews;
-(void)purgeLayerContents;
-(void)purgeFactory;
-(int)stateForKey:(id)arg1 ;
-(BOOL)validForKeyplane:(id)arg1 withVisualStyle:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 ;
-(void)setCacheToken:(UIKBCacheToken *)arg1 ;
-(void)setDefaultKeyplane:(UIKBTree *)arg1 ;
-(void)setDefaultKeyplaneCacheToken:(UIKBCacheToken *)arg1 ;
-(void)setRenderingContext:(UIKBRenderingContext *)arg1 ;
-(void)deactivateKeys;
-(id)activeKeyViews;
-(void)deactivateAdaptiveKey:(id)arg1 ;
-(void)addKeyToDelayedDeactivationSet:(id)arg1 ;
-(void)setFactory:(UIKBRenderFactory *)arg1 ;
-(BOOL)isPasscodeStyle;
-(void)_generateFactoryIfNeeded;
-(void)_generateRenderingContextIfNeeded;
-(UIKBCacheToken *)cacheToken;
-(UIKBCacheToken *)defaultKeyplaneCacheToken;
-(BOOL)useDefaultKeyplaneCacheTokenForRenderFlags:(long long)arg1 ;
-(UIKBTree *)defaultKeyplane;
-(int)cornerMaskForKey:(id)arg1 recursive:(BOOL)arg2 ;
-(void)cancelDelayedDeactivation;
-(void)performDelayedDeactivation:(id)arg1 ;
-(void)scheduleDelayedDeactivation;
-(BOOL)_shouldAllowKey:(id)arg1 ;
-(void)removeKeyFromDelayedDeactivationSet:(id)arg1 ;
-(void)deactivateKey:(id)arg1 previousState:(int)arg2 ;
-(id)containingViewForKey:(id)arg1 withState:(int)arg2 ;
-(id)cacheIdentifierForKey:(id)arg1 withState:(int)arg2 ;
-(BOOL)shouldAnimateInKeyView:(id)arg1 ;
-(BOOL)shouldAnimateOutKeyView:(id)arg1 ;
-(id)cacheIdentifierForKey:(id)arg1 ;
-(id)viewForKey:(id)arg1 state:(int)arg2 ;
-(void)activateKeys;
@end

