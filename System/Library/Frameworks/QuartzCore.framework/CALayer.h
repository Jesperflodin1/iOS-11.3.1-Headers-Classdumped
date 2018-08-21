/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/CAPropertyInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/CAMediaTiming.h>

@class NSArray, CAMeshTransform, NSString, NSDictionary;

@interface CALayer : NSObject <CAPropertyInfo, NSSecureCoding, CAMediaTiming> {

	CALayerIvars* _attr;

}

@property (copy) NSArray * states; 
@property (copy) NSArray * stateTransitions; 
@property (readonly) CGRect visibleRect; 
@property (copy) CAMeshTransform * meshTransform; 
@property (assign) BOOL needsLayoutOnGeometryChange; 
@property (assign) BOOL canDrawConcurrently; 
@property (assign) BOOL acceleratesDrawing; 
@property (getter=isFrozen) BOOL frozen; 
@property (assign) BOOL allowsHitTesting; 
@property (assign) BOOL hitTestsAsOpaque; 
@property (assign) BOOL clearsContext; 
@property (assign) BOOL contentsOpaque; 
@property (assign) BOOL contentsContainsSubtitles; 
@property (assign) BOOL allowsContentsRectCornerMasking; 
@property (assign) BOOL literalContentsCenter; 
@property (copy) NSString * contentsScaling; 
@property (assign) CGAffineTransform contentsTransform; 
@property (assign) BOOL contentsDither; 
@property (assign) CGColorRef contentsMultiplyColor; 
@property (copy) NSString * contentsSwizzle; 
@property (assign) BOOL invertsShadow; 
@property (assign) BOOL shadowPathIsBounds; 
@property (assign) BOOL continuousCorners; 
@property (retain) id cornerContents; 
@property (assign) CGRect cornerContentsCenter; 
@property (assign) BOOL cornerContentsMasksEdges; 
@property (assign) double motionBlurAmount; 
@property (assign) BOOL sortsSublayers; 
@property (assign) BOOL preloadsCache; 
@property (assign) BOOL flipsHorizontalAxis; 
@property (assign) BOOL rasterizationPrefersDisplayCompositing; 
@property (assign) unsigned disableUpdateMask; 
@property (assign) BOOL definesDisplayRegionOfInterest; 
@property (assign) BOOL allowsGroupBlending; 
@property (assign) BOOL allowsDisplayCompositing; 
@property (assign) CGSize sizeRequisition; 
@property (assign) CGSize backgroundColorPhase; 
@property (assign) BOOL inheritsTiming; 
@property (copy) NSArray * presentationModifiers; 
@property (copy) NSArray * behaviors; 
@property (assign) double velocityStretch; 
@property (assign) double mass; 
@property (assign) double momentOfInertia; 
@property (assign) double coefficientOfRestitution; 
@property (assign) CGRect bounds; 
@property (assign) CGPoint position; 
@property (assign) double zPosition; 
@property (assign) CGPoint anchorPoint; 
@property (assign) double anchorPointZ; 
@property (assign) CATransform3D transform; 
@property (assign) CGRect frame; 
@property (getter=isHidden) BOOL hidden; 
@property (getter=isDoubleSided) BOOL doubleSided; 
@property (getter=isGeometryFlipped) BOOL geometryFlipped; 
@property (readonly) CALayer * superlayer; 
@property (copy) NSArray * sublayers; 
@property (assign) CATransform3D sublayerTransform; 
@property (retain) CALayer * mask; 
@property (assign) BOOL masksToBounds; 
@property (retain) id contents; 
@property (assign) CGRect contentsRect; 
@property (copy) NSString * contentsGravity; 
@property (assign) double contentsScale; 
@property (assign) CGRect contentsCenter; 
@property (copy) NSString * contentsFormat; 
@property (copy) NSString * minificationFilter; 
@property (copy) NSString * magnificationFilter; 
@property (assign) float minificationFilterBias; 
@property (getter=isOpaque) BOOL opaque; 
@property (assign) BOOL needsDisplayOnBoundsChange; 
@property (assign) BOOL drawsAsynchronously; 
@property (assign) unsigned edgeAntialiasingMask; 
@property (assign) BOOL allowsEdgeAntialiasing; 
@property (assign) CGColorRef backgroundColor; 
@property (assign) double cornerRadius; 
@property (assign) unsigned long long maskedCorners; 
@property (assign) double borderWidth; 
@property (assign) CGColorRef borderColor; 
@property (assign) float opacity; 
@property (assign) BOOL allowsGroupOpacity; 
@property (retain) id compositingFilter; 
@property (copy) NSArray * filters; 
@property (copy) NSArray * backgroundFilters; 
@property (assign) BOOL shouldRasterize; 
@property (assign) double rasterizationScale; 
@property (assign) CGColorRef shadowColor; 
@property (assign) float shadowOpacity; 
@property (assign) CGSize shadowOffset; 
@property (assign) double shadowRadius; 
@property (assign) const CGPathRef shadowPath; 
@property (copy) NSDictionary * actions; 
@property (copy) NSString * name; 
@property (__weak) id<CALayerDelegate> delegate; 
@property (copy) NSDictionary * style; 
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) BOOL autoreverses; 
@property (copy) NSString * fillMode; 
+(void)CAMLParserEndElement:(id)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
+(/*function pointer*/void*)CA_setterForProperty:(const CAPropertyInfo*)arg1 ;
+(/*function pointer*/void*)CA_getterForProperty:(const CAPropertyInfo*)arg1 ;
+(BOOL)needsLayoutForKey:(id)arg1 ;
+(id)layer;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)needsDisplayForKey:(id)arg1 ;
+(id)properties;
+(id)defaultActionForKey:(id)arg1 ;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)_colorSpaceDidChange;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(id)_initWithReference:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(BOOL)_canDisplayConcurrently;
-(BOOL)acceleratesDrawing;
-(void)setContentsChanged;
-(void)setSizeRequisition:(CGSize)arg1 ;
-(void)insertState:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)dependentStatesOfState:(id)arg1 ;
-(id)stateTransitionFrom:(id)arg1 to:(id)arg2 ;
-(void)_scrollPoint:(CGPoint)arg1 fromLayer:(id)arg2 ;
-(void)_scrollRect:(CGRect)arg1 fromLayer:(id)arg2 ;
-(CGRect)_visibleRectOfLayer:(id)arg1 ;
-(void)_didCommitLayer:(Transaction*)arg1 ;
-(unsigned)disableUpdateMask;
-(void)setDisableUpdateMask:(unsigned)arg1 ;
-(BOOL)_scheduleAnimationTimer;
-(void)_cancelAnimationTimer;
-(void)_renderBackgroundInContext:(CGContextRef)arg1 ;
-(void)_renderForegroundInContext:(CGContextRef)arg1 ;
-(void)_renderSublayersInContext:(CGContextRef)arg1 ;
-(void)_renderBorderInContext:(CGContextRef)arg1 ;
-(CGColorSpaceRef)_retainColorSpace;
-(void)_contentsFormatDidChange:(id)arg1 ;
-(CGSize)_preferredSize;
-(CGRect)cornerContentsCenter;
-(BOOL)cornerContentsMasksEdges;
-(BOOL)contentsContainsSubtitles;
-(void)setContentsContainsSubtitles:(BOOL)arg1 ;
-(NSArray *)backgroundFilters;
-(void)setBackgroundFilters:(NSArray *)arg1 ;
-(NSString *)contentsSwizzle;
-(BOOL)rasterizationPrefersDisplayCompositing;
-(CGSize)sizeRequisition;
-(BOOL)drawsMipmapLevels;
-(void)_prepareContext:(CGContextRef)arg1 ;
-(BOOL)literalContentsCenter;
-(BOOL)_defersDidBecomeVisiblePostCommit;
-(BOOL)sortsSublayers;
-(BOOL)ignoresHitTesting;
-(void)setCoefficientOfRestitution:(double)arg1 ;
-(BOOL)getRendererInfo:(CARenderRendererInfo*)arg1 size:(unsigned long long)arg2 ;
-(unsigned)_renderImageCopyFlags;
-(double)motionBlurAmount;
-(CGSize)backgroundColorPhase;
-(double)velocityStretch;
-(double)coefficientOfRestitution;
-(BOOL)preloadsCache;
-(BOOL)allowsDisplayCompositing;
-(BOOL)wantsExtendedDynamicRangeContent;
-(BOOL)inheritsTiming;
-(BOOL)definesDisplayRegionOfInterest;
-(BOOL)invertsShadow;
-(BOOL)shadowPathIsBounds;
-(id)layerBeingDrawn;
-(id)layerAtTime:(double)arg1 ;
-(BOOL)allowsContentsRectCornerMasking;
-(void)setAllowsContentsRectCornerMasking:(BOOL)arg1 ;
-(void)setLiteralContentsCenter:(BOOL)arg1 ;
-(BOOL)contentsDither;
-(void)setContentsDither:(BOOL)arg1 ;
-(BOOL)contentsOpaque;
-(void)setMotionBlurAmount:(double)arg1 ;
-(void)setWantsExtendedDynamicRangeContent:(BOOL)arg1 ;
-(void)setBackgroundColorPhase:(CGSize)arg1 ;
-(void)setAcceleratesDrawing:(BOOL)arg1 ;
-(void)setDefinesDisplayRegionOfInterest:(BOOL)arg1 ;
-(id)lights;
-(void)setLights:(id)arg1 ;
-(void)setVelocityStretch:(double)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void*)regionBeingDrawn;
-(void)scrollPoint:(CGPoint)arg1 ;
-(void)scrollRectToVisible:(CGRect)arg1 ;
-(BOOL)isDescendantOf:(id)arg1 ;
-(void)setCanDrawConcurrently:(BOOL)arg1 ;
-(id)init;
-(oneway void)release;
-(void)setHidden:(BOOL)arg1 ;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(id)retain;
-(CGSize)size;
-(CGRect)bounds;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)setNeedsLayout;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)setTransform:(CATransform3D)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id<CALayerDelegate>)delegate;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setNeedsDisplayOnBoundsChange:(BOOL)arg1 ;
-(void)setNeedsDisplay;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setActions:(NSDictionary *)arg1 ;
-(void)setCompositingFilter:(id)arg1 ;
-(CGColorRef)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CALayerDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isHidden;
-(void)addSublayer:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(unsigned long long)retainCount;
-(id)debugDescription;
-(NSArray *)sublayers;
-(void)setSpeed:(float)arg1 ;
-(void)setMass:(double)arg1 ;
-(double)duration;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)layoutIfNeeded;
-(NSDictionary *)actions;
-(void)setHitTestsAsOpaque:(BOOL)arg1 ;
-(void)setDuration:(double)arg1 ;
-(CGSize)shadowOffset;
-(CGColorRef)shadowColor;
-(void)setAllowsGroupBlending:(BOOL)arg1 ;
-(void)setAllowsGroupOpacity:(BOOL)arg1 ;
-(void)layoutBelowIfNeeded;
-(NSDictionary *)style;
-(void)setStyle:(NSDictionary *)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(void)setMasksToBounds:(BOOL)arg1 ;
-(void)setContinuousCorners:(BOOL)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setMask:(CALayer *)arg1 ;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)removeFromSuperlayer;
-(CATransform3D)transform;
-(void)setSublayerTransform:(CATransform3D)arg1 ;
-(void)setShadowColor:(CGColorRef)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setRasterizationPrefersDisplayCompositing:(BOOL)arg1 ;
-(CGAffineTransform)affineTransform;
-(void)setAffineTransform:(CGAffineTransform)arg1 ;
-(void)setRasterizationScale:(double)arg1 ;
-(double)rasterizationScale;
-(id)animationKeys;
-(id)animationForKey:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toLayer:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromLayer:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toLayer:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromLayer:(id)arg2 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(id)contents;
-(CALayer *)superlayer;
-(id)context;
-(void)setBorderColor:(CGColorRef)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(double)convertTime:(double)arg1 fromLayer:(id)arg2 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(BOOL)hasBeenCommitted;
-(float)repeatCount;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(double)beginTime;
-(float)speed;
-(double)timeOffset;
-(void)setFilters:(NSArray *)arg1 ;
-(void)setFillMode:(NSString *)arg1 ;
-(void)setBeginTime:(double)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(void)setAutoreverses:(BOOL)arg1 ;
-(BOOL)isOpaque;
-(void)setMagnificationFilter:(NSString *)arg1 ;
-(void)setContentsFormat:(NSString *)arg1 ;
-(void)setContentsCenter:(CGRect)arg1 ;
-(CGRect)contentsCenter;
-(id)compositingFilter;
-(CALayer *)mask;
-(void)renderInContext:(CGContextRef)arg1 ;
-(CGPoint)position;
-(CGPoint)anchorPoint;
-(BOOL)needsLayout;
-(id)presentationLayer;
-(NSArray *)presentationModifiers;
-(void)setPresentationModifiers:(NSArray *)arg1 ;
-(void)addPresentationModifier:(id)arg1 ;
-(void)removePresentationModifier:(id)arg1 ;
-(void)setSublayers:(NSArray *)arg1 ;
-(void)setContentsGravity:(NSString *)arg1 ;
-(BOOL)needsDisplayOnBoundsChange;
-(NSString *)contentsGravity;
-(void)setContentsScaling:(NSString *)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(double)contentsScale;
-(void)setContentsScale:(double)arg1 ;
-(void)setShouldRasterize:(BOOL)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(BOOL)needsDisplay;
-(BOOL)masksToBounds;
-(void)setClearsContext:(BOOL)arg1 ;
-(BOOL)clearsContext;
-(void)clearHasBeenCommitted;
-(void)displayIfNeeded;
-(NSArray *)filters;
-(void)removeAllAnimations;
-(BOOL)shouldRasterize;
-(void)setTimeOffset:(double)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)invalidateContents;
-(void)setContentsTransform:(CGAffineTransform)arg1 ;
-(void)insertSublayer:(id)arg1 above:(id)arg2 ;
-(void)insertSublayer:(id)arg1 below:(id)arg2 ;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(BOOL)isFrozen;
-(id)ancestorSharedWithLayer:(id)arg1 ;
-(BOOL)allowsWeakReference;
-(BOOL)needsLayoutOnGeometryChange;
-(void)setNeedsLayoutOnGeometryChange:(BOOL)arg1 ;
-(BOOL)flipsHorizontalAxis;
-(BOOL)allowsGroupOpacity;
-(void)setPreloadsCache:(BOOL)arg1 ;
-(void)setFrozen:(BOOL)arg1 ;
-(CGRect)visibleRect;
-(void)setShadowRadius:(double)arg1 ;
-(void)setShadowOpacity:(float)arg1 ;
-(double)shadowRadius;
-(void)setZPosition:(double)arg1 ;
-(float)shadowOpacity;
-(void)setContentsMultiplyColor:(CGColorRef)arg1 ;
-(void)setContentsSwizzle:(NSString *)arg1 ;
-(NSString *)contentsScaling;
-(void)reloadValueForKeyPath:(id)arg1 ;
-(void)setEdgeAntialiasingMask:(unsigned)arg1 ;
-(void)setAllowsEdgeAntialiasing:(BOOL)arg1 ;
-(void)setFlipsHorizontalAxis:(BOOL)arg1 ;
-(BOOL)isFlipped;
-(void)setFlipped:(BOOL)arg1 ;
-(void)_dealloc;
-(id)cornerContents;
-(void)setCornerContents:(id)arg1 ;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(void)setCornerContentsMasksEdges:(BOOL)arg1 ;
-(BOOL)opaque;
-(CGColorRef)borderColor;
-(void)setAllowsHitTesting:(BOOL)arg1 ;
-(double)zPosition;
-(CGColorRef)contentsMultiplyColor;
-(void)setShadowPath:(const CGPathRef)arg1 ;
-(const CGPathRef)shadowPath;
-(id)valueForUndefinedKey:(id)arg1 ;
-(double)mass;
-(id)hitTest:(CGPoint)arg1 ;
-(void)_display;
-(double)borderWidth;
-(void)setMeshTransform:(CAMeshTransform *)arg1 ;
-(void)setInheritsTiming:(BOOL)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(BOOL)allowsEdgeAntialiasing;
-(void)drawInContext:(CGContextRef)arg1 ;
-(BOOL)drawsAsynchronously;
-(void)setDrawsAsynchronously:(BOOL)arg1 ;
-(NSString *)contentsFormat;
-(void)layoutSublayers;
-(void)display;
-(BOOL)retainWeakReference;
-(BOOL)hidden;
-(CGRect)contentsRect;
-(BOOL)autoreverses;
-(BOOL)layoutIsActive;
-(BOOL)isDoubleSided;
-(void)setDoubleSided:(BOOL)arg1 ;
-(CATransform3D)sublayerTransform;
-(unsigned)edgeAntialiasingMask;
-(NSArray *)behaviors;
-(BOOL)allowsGroupBlending;
-(void)setMinificationFilter:(NSString *)arg1 ;
-(BOOL)isGeometryFlipped;
-(void)setGeometryFlipped:(BOOL)arg1 ;
-(void)setBehaviors:(NSArray *)arg1 ;
-(unsigned long long)maskedCorners;
-(BOOL)continuousCorners;
-(double)anchorPointZ;
-(void)setAnchorPointZ:(double)arg1 ;
-(double)convertTime:(double)arg1 toLayer:(id)arg2 ;
-(NSString *)fillMode;
-(void)setAllowsDisplayCompositing:(BOOL)arg1 ;
-(double)momentOfInertia;
-(void)setMomentOfInertia:(double)arg1 ;
-(BOOL)doubleSided;
-(NSString *)minificationFilter;
-(NSString *)magnificationFilter;
-(BOOL)canDrawConcurrently;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setInvertsShadow:(BOOL)arg1 ;
-(BOOL)allowsHitTesting;
-(CGAffineTransform)contentsTransform;
-(void)setCornerContentsCenter:(CGRect)arg1 ;
-(void)setShadowPathIsBounds:(BOOL)arg1 ;
-(CAMeshTransform *)meshTransform;
-(CGSize)preferredFrameSize;
-(id)stateWithName:(id)arg1 ;
-(void)setSortsSublayers:(BOOL)arg1 ;
-(void)addState:(id)arg1 ;
-(float)minificationFilterBias;
-(void)setMinificationFilterBias:(float)arg1 ;
-(void)replaceSublayer:(id)arg1 with:(id)arg2 ;
-(BOOL)contentsAreFlipped;
-(void)setRepeatDuration:(double)arg1 ;
-(id)modelLayer;
-(void)removeState:(id)arg1 ;
-(void)setContentsOpaque:(BOOL)arg1 ;
-(double)repeatDuration;
-(BOOL)hitTestsAsOpaque;
@end

