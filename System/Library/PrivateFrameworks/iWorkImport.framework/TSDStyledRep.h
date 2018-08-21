/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDRep.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class TSDReflection, TSDShadow, TSDStyledInfo, TSDStyledLayout, NSString;

@interface TSDStyledRep : TSDRep <CALayerDelegate> {

	struct {
		unsigned shadowInvalid : 1;
	}  mFlags;

}

@property (nonatomic,readonly) TSDReflection * reflection; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) TSDShadow * shadow; 
@property (nonatomic,readonly) TSDStyledInfo * styledInfo; 
@property (nonatomic,readonly) TSDStyledLayout * styledLayout; 
@property (nonatomic,readonly) BOOL shouldShowShadow; 
@property (nonatomic,readonly) BOOL shouldShowReflection; 
@property (nonatomic,readonly) BOOL isInvisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTextureAttributes:(id)arg1 textureBounds:(CGRect)arg2 ;
-(id)textureForDescription:(id)arg1 ;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 withContent:(BOOL)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6 ;
-(CGRect)strokeBoundsWithOptions:(unsigned long long)arg1 fallbackBounds:(CGRect)arg2 ;
-(CGRect)p_rectWithEffectsAppliedToRect:(CGRect)arg1 additionalTransform:(CGAffineTransform)arg2 includeShadow:(BOOL)arg3 includeReflection:(BOOL)arg4 ;
-(CGRect)p_clipRectInRootForTransform:(CGAffineTransform)arg1 includeShadow:(BOOL)arg2 includeReflection:(BOOL)arg3 ;
-(void)calculateTextureClipBounds:(CGRect*)arg1 andOffset:(CGPoint*)arg2 withTransform:(CGAffineTransform*)arg3 andRectOnCanvas:(CGRect*)arg4 textureDescription:(id)arg5 isUsingImageTexture:(BOOL)arg6 ;
-(CGImageRef)newFrameMaskForViewScale:(double)arg1 frameRect:(CGRect*)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(double)opacity;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(TSDShadow *)shadow;
-(BOOL)shouldShowShadow;
-(CGRect)clipRect;
-(BOOL)isInvisible;
-(BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg1 ;
-(TSDStyledLayout *)styledLayout;
-(TSDReflection *)reflection;
-(BOOL)shouldShowReflection;
-(void)drawGradientWithAlphaOverReflection:(CGContextRef)arg1 applyingOpacity:(BOOL)arg2 reflectionSize:(CGSize)arg3 ;
-(TSDStyledInfo *)styledInfo;
-(CGRect)clipRectWithoutEffects;
-(CGRect)rectWithEffectsAppliedToRect:(CGRect)arg1 ;
-(CGRect)reflectionLayerFrameInRoot;
-(void)drawReflectionIntoReflectionFrameInContext:(CGContextRef)arg1 withTransparencyLayer:(BOOL)arg2 applyingOpacity:(BOOL)arg3 drawChildren:(BOOL)arg4 ;
-(void)p_drawReflectionInContext:(CGContextRef)arg1 ;
-(CGImageRef)newShadowImageWithSize:(CGSize)arg1 unflipped:(BOOL)arg2 withChildren:(BOOL)arg3 ;
-(void)drawInContextWithoutEffectsForAlphaOnly:(CGContextRef)arg1 ;
-(void)drawInContextWithoutEffectsOrChildrenForAlphaOnly:(CGContextRef)arg1 ;
-(CGImageRef)newShadowImageWithSize:(CGSize)arg1 shadow:(id)arg2 drawSelector:(SEL)arg3 unflipped:(BOOL)arg4 ;
-(void)p_drawReflectionIntoReflectionFrameInContext:(CGContextRef)arg1 withTransparencyLayer:(BOOL)arg2 applyingOpacity:(BOOL)arg3 shouldClipGradient:(BOOL)arg4 withBlock:(/*^block*/id)arg5 ;
-(CGImageRef)p_newReflectionImageWithSize:(CGSize)arg1 applyOpacity:(BOOL)arg2 viewScale:(double)arg3 withBlock:(/*^block*/id)arg4 ;
-(void)drawReflectionInContext:(CGContextRef)arg1 withTransparencyLayer:(BOOL)arg2 applyingOpacity:(BOOL)arg3 shouldClipGradient:(BOOL)arg4 withBlock:(/*^block*/id)arg5 ;
-(void)drawShadowInContext:(CGContextRef)arg1 withChildren:(BOOL)arg2 withDrawableOpacity:(BOOL)arg3 ;
-(void)drawReflectionInContext:(CGContextRef)arg1 drawChildren:(BOOL)arg2 ;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 ;
-(void)drawInContextWithoutEffectsOrChildren:(CGContextRef)arg1 ;
@end

