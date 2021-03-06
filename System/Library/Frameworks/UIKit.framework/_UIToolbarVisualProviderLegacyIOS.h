/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIToolbarVisualProvider.h>

@class UIView, NSString, _UIBarBackground;

@interface _UIToolbarVisualProviderLegacyIOS : _UIToolbarVisualProvider {

	UIView* _barBackgroundView;
	UIView* _customBackgroundView;
	NSString* _backdropViewLayerGroupName;

}

@property (nonatomic,retain) _UIBarBackground * _barBackground; 
@property (setter=_setBackdropViewLayerGroupName:,getter=_backdropViewLayerGroupName,nonatomic,retain) NSString * backdropViewLayerGroupName;              //@synthesize backdropViewLayerGroupName=_backdropViewLayerGroupName - In the implementation block
-(CGSize)defaultSizeForOrientation:(long long)arg1 ;
-(id)_backdropViewLayerGroupName;
-(void)_setBackdropViewLayerGroupName:(id)arg1 ;
-(CGRect)backgroundFrame;
-(id)currentBackgroundView;
-(void)updateBarForStyle:(long long)arg1 ;
-(void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(BOOL)arg3 ;
-(void)updateItemsForNewFrame:(id)arg1 ;
-(void)customViewChangedForButtonItem:(id)arg1 ;
-(void)positionToolbarButtonsAndResetFontScaleAdjustment:(BOOL)arg1 ;
-(BOOL)toolbarIsSmall;
-(void)updateBarBackgroundSize;
-(void)setCustomBackgroundView:(id)arg1 ;
-(void)updateBarBackground;
-(void)drawBackgroundViewInRect:(CGRect)arg1 ;
-(id)_currentCustomBackground;
-(double)_edgeMarginForBorderedItem:(BOOL)arg1 isText:(BOOL)arg2 ;
-(id)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(BOOL)arg3 actuallyRepositionButtons:(BOOL)arg4 ;
-(id)_repositionedItemsFromItems:(id)arg1 withBarButtonFrames:(id*)arg2 withHitRects:(id*)arg3 buttonIndexes:(id*)arg4 textButtonIndexes:(id*)arg5 ;
-(void)_createViewsForItems:(id)arg1 ;
-(_UIBarBackground *)_barBackground;
-(void)_createBarBackground;
-(id)_currentCustomBackgroundRespectOversize_legacy:(BOOL*)arg1 ;
-(void)set_barBackground:(_UIBarBackground *)arg1 ;
@end

