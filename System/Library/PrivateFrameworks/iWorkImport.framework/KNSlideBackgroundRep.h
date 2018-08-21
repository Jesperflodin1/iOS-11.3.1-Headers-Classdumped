/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDRep.h>
#import <iWorkImport/TSDMagicMoveMatching.h>

@class CALayer, KNSlideBackgroundInfo;

@interface KNSlideBackgroundRep : TSDRep <TSDMagicMoveMatching> {

	CALayer* _blackBackgroundLayer;
	BOOL _layerNeedsUpdate;
	BOOL _fillCanApplyToCALayer;

}

@property (readonly) KNSlideBackgroundInfo * slideBackgroundInfo; 
+(id)magicMoveMatchesBetweenOutgoingObjects:(id)arg1 andIncomingObjects:(id)arg2 textureDescription:(id)arg3 ;
-(id)textureForDescription:(id)arg1 ;
-(KNSlideBackgroundInfo *)slideBackgroundInfo;
-(BOOL)isOpaque;
-(void)drawInContext:(CGContextRef)arg1 ;
-(BOOL)directlyManagesLayerContent;
-(id)additionalLayersUnderLayer;
-(void)didUpdateLayer:(id)arg1 ;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(BOOL)wantsToDistortWithImagerContext;
@end

