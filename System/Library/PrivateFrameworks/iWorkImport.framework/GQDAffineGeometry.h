/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDNameMappable.h>

@class NSString;

@interface GQDAffineGeometry : NSObject <GQDNameMappable> {

	CGSize mNaturalSize;
	CGSize mSize;
	BOOL mSizesLocked;
	BOOL mAspectRatioLocked;
	CGPoint mPosition;
	float mAngle;
	BOOL mHorizontalFlip;
	BOOL mVerticalFlip;
	float mShearXAngle;
	float mShearYAngle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)transformRect:(CGRect)arg1 transform:(id)arg2 upperLeft:(CGPoint*)arg3 lowerLeft:(CGPoint*)arg4 lowerRight:(CGPoint*)arg5 upperRight:(CGPoint*)arg6 ;
+(CGRect)boundsOfTransformedRect:(CGRect)arg1 transform:(id)arg2 ;
+(const StateSpec*)stateForReading;
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 ;
-(CGSize)sizeOfBoundingBox;
-(CGAffineTransform)transformHasVFlip:(BOOL)arg1 vFlip:(BOOL)arg2 hasHFlip:(BOOL)arg3 hFlip:(BOOL)arg4 ;
-(BOOL)sizesLocked;
-(void)setSizesLocked:(BOOL)arg1 ;
-(float)shearXAngle;
-(void)setShearXAngle:(float)arg1 ;
-(float)shearYAngle;
-(void)setShearYAngle:(float)arg1 ;
-(CGPoint)nonrotatedPosition;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGAffineTransform)transform;
-(CGPoint)position;
-(void)setAngle:(float)arg1 ;
-(float)angle;
-(CGSize)naturalSize;
-(void)setAspectRatioLocked:(BOOL)arg1 ;
-(BOOL)aspectRatioLocked;
-(CGRect)naturalBounds;
-(BOOL)horizontalFlip;
-(BOOL)verticalFlip;
-(void)setHorizontalFlip:(BOOL)arg1 ;
-(void)setVerticalFlip:(BOOL)arg1 ;
-(void)setNaturalSize:(CGSize)arg1 ;
@end

