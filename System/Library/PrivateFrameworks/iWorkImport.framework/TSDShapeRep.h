/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDStyledRep.h>
#import <iWorkImport/TSDMagicMoveMatching.h>

@class TSDShapeInfo, TSDShapeLayout;

@interface TSDShapeRep : TSDStyledRep <TSDMagicMoveMatching> {

	CGRect mFrameInUnscaledCanvasRelativeToSuper;
	BOOL mFrameInUnscaledCanvasIsValid;
	BOOL mDirectlyManagesLayerContent;
	CGRect mOriginalAliasedAlignmentFrameInLayerFrame;
	BOOL mShadowOnChildrenDisabled;
	CGContextRef mCommittedPathContext;
	CGImageRef mCommittedPathImage;
	NSRange mCommittedPointRange;
	NSRange mAvailableToCommitPointRange;
	CGRect mLastDynamicInvalidRect;
	BOOL mFillChanged;

}

@property (nonatomic,readonly) TSDShapeInfo * shapeInfo; 
@property (nonatomic,readonly) TSDShapeLayout * shapeLayout; 
+(double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3 ;
-(void)setTextureAttributes:(id)arg1 textureBounds:(CGRect)arg2 ;
-(void)p_drawInContext:(CGContextRef)arg1 withContent:(BOOL)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(BOOL)arg4 ;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 withContent:(BOOL)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6 ;
-(CGRect)strokeBoundsWithOptions:(unsigned long long)arg1 fallbackBounds:(CGRect)arg2 ;
-(void)dealloc;
-(CGRect)clipRect;
-(void)drawInLayerContext:(CGContextRef)arg1 ;
-(CGRect)frameInUnscaledCanvas;
-(void)recursivelyDrawChildrenInContext:(CGContextRef)arg1 ;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(id)colorBehindLayer:(id)arg1 ;
-(TSDShapeInfo *)shapeInfo;
-(TSDShapeLayout *)shapeLayout;
-(BOOL)isInvisible;
-(BOOL)p_beginApplyOpacity:(CGContextRef)arg1 forDrawingInOneStep:(BOOL)arg2 ;
-(void)p_endApplyOpacity:(CGContextRef)arg1 apply:(BOOL)arg2 ;
-(void)p_drawChildrenWithoutOpacityInContext:(CGContextRef)arg1 ;
-(BOOL)p_drawsSelfInOneStep;
-(void)p_drawLineEndForHead:(BOOL)arg1 withDelta:(CGPoint)arg2 andStroke:(id)arg3 inContext:(CGContextRef)arg4 useFastDrawing:(BOOL)arg5 ;
-(id)imageOfStroke:(CGRect*)arg1 ;
-(BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg1 ;
@end

