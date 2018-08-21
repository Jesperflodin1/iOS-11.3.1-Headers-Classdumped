/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDRep.h>
#import <iWorkImport/TSDContainerRep.h>
#import <iWorkImport/TSDImageDrawingDataSource.h>

@class NSArray, TSDImageDrawingHelper, TSWPRep, TSAGalleryLayout, NSString;

@interface TSAGalleryRep : TSDRep <TSDContainerRep, TSDImageDrawingDataSource> {

	TSDImageDrawingHelper* _drawingHelper;
	TSWPRep* _captionRep;

}

@property (nonatomic,readonly) TSAGalleryLayout * galleryLayout; 
@property (nonatomic,readonly) TSWPRep * captionRep;                                   //@synthesize captionRep=_captionRep - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<TSDContainerInfo> containerInfo; 
@property (nonatomic,readonly) NSArray * childReps; 
+(double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3 ;
-(void)invalidateCurrentItem;
-(TSAGalleryLayout *)galleryLayout;
-(id)galleryInfo;
-(BOOL)p_isEmpty;
-(id)p_newTextureForStage:(unsigned long long)arg1 isIncoming:(BOOL)arg2 includeImage:(BOOL)arg3 includeCaption:(BOOL)arg4 size:(CGSize)arg5 offset:(CGPoint)arg6 renderTransform:(CGAffineTransform)arg7 ;
-(void)didDisplayTextureWithDescription:(id)arg1 isAtEndOfBuild:(BOOL)arg2 ;
-(id)imageDrawingHelperImageData:(id)arg1 ;
-(id)imageDrawingHelperThumbnailImageData:(id)arg1 ;
-(CGRect)imageDrawingHelperImageRect:(id)arg1 ;
-(CGAffineTransform)imageDrawingHelperImageTransformInRootForAntialiasingDefeat:(id)arg1 ;
-(BOOL)imageDrawingHelperImageHasAlpha:(id)arg1 ;
-(id)imageDrawingHelperAdjustedImageData:(id)arg1 ;
-(id)imageDrawingHelperThumbnailAdjustedImageData:(id)arg1 ;
-(id)textureForDescription:(id)arg1 ;
-(void)p_announceNewItemForAccessibilityIfNeeded;
-(TSWPRep *)captionRep;
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)willBeRemoved;
-(void)recursivelyPerformSelector:(SEL)arg1 ;
-(NSArray *)childReps;
-(NSObject*<TSDContainerInfo>)containerInfo;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 ;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 ;
-(void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)updateChildrenFromLayout;
@end
