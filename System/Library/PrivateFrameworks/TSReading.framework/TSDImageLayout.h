/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDMediaLayout.h>

@class TSDLayoutGeometry, TSDMaskLayout, TSDBezierPath, TSDInfoGeometry, TSDImageAdjustments;

@interface TSDImageLayout : TSDMediaLayout {

	TSDLayoutGeometry* mImageGeometry;
	TSDMaskLayout* mMaskLayout;
	CGPathRef mPathToStroke;
	CGAffineTransform mLayoutToImageTransform;
	CGAffineTransform mLayoutToMaskTransform;
	BOOL mMaskIntersectsImage;
	TSDBezierPath* mTracedPath;
	int mHasAlpha;
	TSDLayoutGeometry* mBaseImageLayoutGeometry;
	TSDInfoGeometry* mDynamicInfoGeometry;
	TSDInfoGeometry* mBaseInfoGeometry;
	int mMaskEditMode;
	BOOL mScalingInMaskMode;
	BOOL mInInstantAlphaMode;
	BOOL mIsUpdatingImageAdjustments;
	TSDImageAdjustments* mDynamicImageAdjustments;

}

@property (nonatomic,readonly) int maskEditMode; 
@property (getter=isInMaskEditMode,nonatomic,readonly) BOOL inMaskEditMode; 
@property (nonatomic,readonly) BOOL isDraggingInMaskEditMode; 
@property (nonatomic,readonly) BOOL isRotatingInMaskEditMode; 
@property (nonatomic,readonly) BOOL isResizingInMaskEditMode; 
@property (nonatomic,readonly) int maskEditModeForDragging; 
@property (nonatomic,readonly) int maskEditModeForRotating; 
@property (nonatomic,readonly) int maskEditModeForResizing; 
@property (nonatomic,readonly) int maskEditModeForLayoutState; 
@property (getter=isInInstantAlphaMode,nonatomic,readonly) BOOL inInstantAlphaMode; 
@property (getter=isInMaskScaleMode,nonatomic,readonly) BOOL inMaskScaleMode; 
-(void)dealloc;
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(id)initWithInfo:(id)arg1 ;
-(BOOL)supportsRotation;
-(void)processChangedProperty:(int)arg1 ;
-(CGPoint)centerForRotation;
-(BOOL)hasAlpha;
-(void)updateChildrenFromInfo;
-(id)computeLayoutGeometry;
-(id)layoutGeometryFromInfo;
-(BOOL)i_useBaseCapturedAlignmentFrameOriginForInline;
-(void)dragBy:(CGPoint)arg1 ;
-(void)beginDrag;
-(void)endDrag;
-(CGAffineTransform)layoutTransformInInfoSpace:(CGAffineTransform)arg1 ;
-(void)takeRotationFromTracker:(id)arg1 ;
-(BOOL)resizeMayChangeAspectRatio;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(void)beginResize;
-(void)resizeWithTransform:(CGAffineTransform)arg1 asChild:(BOOL)arg2 ;
-(id)inspectorGeometry;
-(CGPoint)centerForConnecting;
-(BOOL)shouldDisplayGuides;
-(void)offsetGeometryBy:(CGPoint)arg1 ;
-(id)geometryForTransforming;
-(id)visibleGeometries;
-(CGRect)alignmentFrameForProvidingGuidesInRoot;
-(BOOL)shouldSnapWhileResizing;
-(BOOL)isInvisible;
-(CGRect)pathBoundsWithoutStroke;
-(id)smartPathSource;
-(id)i_computeWrapPath;
-(id)imageInfo;
-(id)maskLayout;
-(BOOL)maskIntersectsImage;
-(BOOL)isInMaskEditMode;
-(CGAffineTransform)layoutToImageTransform;
-(id)imageGeometry;
-(BOOL)isInInstantAlphaMode;
-(CGAffineTransform)imageDataToVisualSizeTransform;
-(int)maskEditMode;
-(void)maskWasApplied;
-(BOOL)isDynamicallyChangingImageAdjustments;
-(id)imageGeometryInRoot;
-(BOOL)isInMaskScaleMode;
-(CGPoint)centerForRotationInMaskMode;
-(CGPathRef)pathToStroke;
-(BOOL)hasMaskingPath;
-(CGAffineTransform)layoutToMaskTransform;
-(BOOL)shouldRenderFrameStroke;
-(id)imageAdjustments;
-(int)maskEditModeForLayoutState;
-(id)currentInfoGeometry;
-(BOOL)isResizingInMaskEditMode;
-(int)maskEditModeForResizing;
-(BOOL)isDraggingInMaskEditMode;
-(int)maskEditModeForDragging;
-(void)p_createDynamicCopies;
-(void)p_destroyDynamicCopies;
-(void)p_setDynamicInfoGeometry:(id)arg1 ;
-(BOOL)isRotatingInMaskEditMode;
-(int)maskEditModeForRotating;
-(void)maskModeScaleDidBegin;
-(void)maskModeScaleDidEnd;
-(void)endMaskEditMode;
-(CGRect)computeAlignmentFrameInRoot:(BOOL)arg1 ;
-(void)maskWasReset;
-(void)beginEditingImageInMaskEditMode;
-(void)beginEditingMaskInMaskEditMode;
-(void)beginInstantAlphaMode;
-(void)endInstantAlphaMode;
-(id)originalImageGeometry;
-(CGSize)sizeOfFrameRectIncludingCoverage;
-(void)dynamicImageAdjustmentsChangeDidBegin;
-(void)dynamicImageAdjustmentsUpdateToValue:(id)arg1 ;
-(void)dynamicImageAdjustmentsChangeDidEnd;
-(CGRect)boundsInfluencingExteriorWrap;
@end

