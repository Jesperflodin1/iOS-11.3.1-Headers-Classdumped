/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDContainerLayout.h>
#import <TSReading/TSDWrappableParent.h>

@class TSDLayoutGeometry, TSDBezierPath;

@interface TSDGroupLayout : TSDContainerLayout <TSDWrappableParent> {

	TSDLayoutGeometry* mDynamicLayoutGeometry;
	CGRect mBoundsForStandardKnobs;
	TSDBezierPath* mCachedWrapPath;
	TSDBezierPath* mCachedExternalWrapPath;

}

@property (nonatomic,readonly) int wrapContainerMode; 
-(void)invalidate;
-(void)dealloc;
-(CGSize)minimumSize;
-(void)setGeometry:(id)arg1 ;
-(BOOL)canFlip;
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(CGRect)boundsForStandardKnobs;
-(BOOL)supportsRotation;
-(void)processChangedProperty:(int)arg1 ;
-(id)i_wrapPath;
-(id)computeLayoutGeometry;
-(CGRect)alignmentFrame;
-(id)layoutGeometryFromInfo;
-(void)dragBy:(CGPoint)arg1 ;
-(void)setDynamicGeometry:(id)arg1 ;
-(id)additionalDependenciesForChildLayout:(id)arg1 ;
-(void)invalidateExteriorWrap;
-(void)takeRotationFromTracker:(id)arg1 ;
-(BOOL)resizeMayChangeAspectRatio;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(id)computeInfoGeometryDuringResize;
-(id)reliedOnLayouts;
-(id)i_externalWrapPath;
-(CGRect)rectForPresentingAnnotationPopoverForSelection:(id)arg1 ;
-(BOOL)allowsConnections;
-(BOOL)providesGuidesForChildLayouts;
-(id)visibleGeometries;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(BOOL)supportsParentRotation;
-(BOOL)supportsFlipping;
-(id)i_computeWrapPath;
-(void)p_createDynamicCopies;
-(void)p_destroyDynamicCopies;
-(void)p_invalidateParentForWrap;
-(void)p_invalidateDescendentWrapPaths;
-(id)descendentWrappables;
-(int)wrapContainerMode;
-(id)p_childWrapPathsFrom:(id)arg1 ;
-(void)wrappableChildInvalidated;
@end

