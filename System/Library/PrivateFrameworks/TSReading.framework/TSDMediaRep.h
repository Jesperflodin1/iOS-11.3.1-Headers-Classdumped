/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDStyledRep.h>

@class CALayer, CAShapeLayer, TSDFrameRep, TSDMediaInfo, TSDMediaLayout;

@interface TSDMediaRep : TSDStyledRep {

	BOOL mIsZooming;
	CALayer* mTapToReplaceLayer;
	CAShapeLayer* mMaskLayer;
	CAShapeLayer* mStrokeLayer;
	CALayer* mFrameMaskLayer;
	TSDFrameRep* mFrameRep;
	CGRect mLastPictureFrameLayerRect;

}

@property (nonatomic,readonly) TSDMediaInfo * mediaInfo; 
@property (nonatomic,readonly) TSDMediaLayout * mediaLayout; 
@property (nonatomic,readonly) BOOL shouldShowMediaReplaceUI; 
-(void)dealloc;
-(BOOL)isPlaceholder;
-(void)willBeginZooming;
-(void)didEndZooming;
-(id)additionalLayersOverLayer;
-(id)overlayLayers;
-(void)processChangedProperty:(int)arg1 ;
-(BOOL)shouldCreateKnobs;
-(void)addKnobsToArray:(id)arg1 ;
-(void)updatePositionsOfKnobs:(id)arg1 ;
-(CGPoint)positionOfHyperlinkKnob;
-(BOOL)replaceButtonContainsPoint:(CGPoint)arg1 ;
-(void)i_updateFrameRep;
-(BOOL)shouldShowMediaReplaceUI;
-(BOOL)shouldAllowReplacementFromPaste;
-(id)visibleMediaReplaceButtonLayer;
-(BOOL)i_shouldRenderStroke:(id)arg1 ;
-(TSDMediaLayout *)mediaLayout;
-(BOOL)canResetMediaSize;
-(BOOL)shouldAllowReplacementFromDrop;
-(void)p_addLayerForReplaceButtonToArray:(id)arg1 ;
-(TSDMediaInfo *)mediaInfo;
-(CGSize)p_replaceButtonSize;
-(id)p_tapToReplaceLayer;
-(id)currentReplaceButtonImage;
-(void)p_updateTapToReplaceLayerPosition;
-(CGPoint)p_scaledPositionOfImageReplaceKnob;
-(id)currentReplaceButtonHighlightedImage;
@end

