/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class _UILabelContentLayer;

@interface _UILabelLayer : CALayer {

	_UILabelContentLayer* _contentLayer;
	BOOL _contentInsetsValid;
	UIEdgeInsets _contentInsets;

}
-(void)setFrame:(CGRect)arg1 ;
-(void)setNeedsDisplayOnBoundsChange:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setMasksToBounds:(BOOL)arg1 ;
-(void)setContentsFormat:(id)arg1 ;
-(void)setContentsGravity:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setContentsMultiplyColor:(CGColorRef)arg1 ;
-(id)_labelLayerToClipDuringBoundsSizeAnimation;
-(void)_setLabelMasksToBoundsForAnimation:(BOOL)arg1 ;
-(void)invalidateContentInsets;
-(void)_clearContents;
-(void)layoutSublayers;
-(void)_updateContentLayer;
-(void)updateContentInsets;
-(void)updateContentLayerSize;
-(void)_setFrameOrBounds:(CGRect)arg1 settingAction:(/*^block*/id)arg2 ;
@end

