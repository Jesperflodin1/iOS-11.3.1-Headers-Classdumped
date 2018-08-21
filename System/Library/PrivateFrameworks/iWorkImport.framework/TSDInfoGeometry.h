/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMixing.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface TSDInfoGeometry : NSObject <TSDMixing, NSCopying, NSMutableCopying> {

	CGPoint mPosition;
	CGSize mSize;
	struct {
		unsigned widthValid : 1;
		unsigned heightValid : 1;
		unsigned horizontalFlip : 1;
		unsigned verticalFlip : 1;
	}  mFlags;
	double mAngle;

}

@property (nonatomic,readonly) CGPoint position; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) BOOL widthValid; 
@property (nonatomic,readonly) BOOL heightValid; 
@property (nonatomic,readonly) BOOL horizontalFlip; 
@property (nonatomic,readonly) BOOL verticalFlip; 
@property (nonatomic,readonly) double angle; 
@property (nonatomic,readonly) BOOL allValuesValidNumbers; 
+(id)geometryFromFullTransform:(CGAffineTransform)arg1 ;
+(id)geometryFromFullTransform:(CGAffineTransform)arg1 widthValid:(BOOL)arg2 heightValid:(BOOL)arg3 ;
+(id)geometryFromTransform:(CGAffineTransform)arg1 withSize:(CGSize)arg2 ;
-(void)saveToArchive:(GeometryArchive*)arg1 archiver:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(BOOL)allValuesValidNumbers;
-(id)geometryWithValidNumbers;
-(id)init;
-(CGPoint)center;
-(CGSize)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGAffineTransform)transform;
-(CGPoint)position;
-(id)initWithSize:(CGSize)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)angle;
-(id)initWithLayoutGeometry:(id)arg1 ;
-(id)initWithWidth:(double)arg1 ;
-(BOOL)isEqualExceptForPosition:(id)arg1 ;
-(BOOL)widthValid;
-(BOOL)heightValid;
-(CGAffineTransform)fullTransform;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)initWithPosition:(CGPoint)arg1 size:(CGSize)arg2 widthValid:(BOOL)arg3 heightValid:(BOOL)arg4 horizontalFlip:(BOOL)arg5 verticalFlip:(BOOL)arg6 angle:(double)arg7 ;
-(id)initWithPosition:(CGPoint)arg1 size:(CGSize)arg2 ;
-(id)initWithTransformedBoundsOrigin:(CGPoint)arg1 size:(CGSize)arg2 horizontalFlip:(BOOL)arg3 verticalFlip:(BOOL)arg4 angle:(double)arg5 ;
-(CGPoint)transformedBoundsOrigin;
-(CGRect)boundsBeforeRotation;
-(CGAffineTransform)transformBasedOnRect:(CGRect)arg1 ;
-(CGAffineTransform)transformBasedOnPoint:(CGPoint)arg1 centeredAtPoint:(CGPoint)arg2 ;
-(CGAffineTransform)transformBasedOnPoint:(CGPoint)arg1 centeredAtPoint:(CGPoint)arg2 withFlips:(BOOL)arg3 ;
-(BOOL)horizontalFlip;
-(BOOL)verticalFlip;
-(CGRect)transformedBounds;
-(id)initWithFullTransform:(CGAffineTransform)arg1 widthValid:(BOOL)arg2 heightValid:(BOOL)arg3 ;
-(id)initWithHeight:(double)arg1 ;
-(id)initWithPosition:(CGPoint)arg1 size:(CGSize)arg2 angle:(double)arg3 ;
-(id)initWithCenter:(CGPoint)arg1 size:(CGSize)arg2 ;
-(id)initWithTransformedBoundsOrigin:(CGPoint)arg1 size:(CGSize)arg2 angle:(double)arg3 ;
-(CGAffineTransform)transformWithoutFlips;
-(id)initWithTransform:(CGAffineTransform)arg1 size:(CGSize)arg2 ;
-(id)geometryByAppendingTransform:(CGAffineTransform)arg1 ;
-(id)geometryWithParentGeometry:(id)arg1 ;
-(id)geometryRelativeToGeometry:(id)arg1 ;
-(id)geometryWithNewBounds:(CGRect)arg1 ;
-(id)normalizedGeometry;
-(id)initWithArchive:(const GeometryArchive*)arg1 ;
@end

