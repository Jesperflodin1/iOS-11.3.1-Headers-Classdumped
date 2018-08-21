/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, UIVisualEffectView, _UIPortalView, NSHashTable;

@interface _UIInteractiveHighlightViewRecord : NSObject {

	UIView* _view;
	UIView* _superview;
	UIVisualEffectView* _effectView;
	_UIPortalView* _portalView;
	NSHashTable* _interactiveHighlightEffects;

}

@property (assign,nonatomic,__weak) UIView * view;                                   //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) UIView * superview;                              //@synthesize superview=_superview - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * effectView;                        //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) _UIPortalView * portalView;                             //@synthesize portalView=_portalView - In the implementation block
@property (nonatomic,retain) NSHashTable * interactiveHighlightEffects;              //@synthesize interactiveHighlightEffects=_interactiveHighlightEffects - In the implementation block
-(UIView *)superview;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(_UIPortalView *)portalView;
-(void)setPortalView:(_UIPortalView *)arg1 ;
-(UIVisualEffectView *)effectView;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(void)setSuperview:(UIView *)arg1 ;
-(NSHashTable *)interactiveHighlightEffects;
-(void)setInteractiveHighlightEffects:(NSHashTable *)arg1 ;
@end

