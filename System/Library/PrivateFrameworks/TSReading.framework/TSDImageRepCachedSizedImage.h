/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDImageRepCachedSizedImage : NSObject {

	CGImageRef mImageRef;
	CGPathRef mImageMaskPath;
	BOOL mImageHasMaskBakedIn;
	BOOL mImageHasAdjustmentsBakedImage;
	long long mImageOrientation;
	CGSize mImageSize;

}

@property (assign,nonatomic) CGImageRef imageRef; 
@property (assign,nonatomic) CGPathRef imageMaskPath; 
@property (assign,nonatomic) CGSize imageSize; 
@property (assign,nonatomic) long long imageOrientation; 
@property (assign,nonatomic) BOOL imageHasMaskBakedIn; 
@property (assign,nonatomic) BOOL imageHasAdjustmentsBakedImage; 
-(void)dealloc;
-(long long)imageOrientation;
-(CGImageRef)imageRef;
-(void)setImageOrientation:(long long)arg1 ;
-(CGSize)imageSize;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setImageRef:(CGImageRef)arg1 ;
-(CGPathRef)imageMaskPath;
-(void)setImageMaskPath:(CGPathRef)arg1 ;
-(BOOL)imageHasMaskBakedIn;
-(void)setImageHasMaskBakedIn:(BOOL)arg1 ;
-(BOOL)imageHasAdjustmentsBakedImage;
-(void)setImageHasAdjustmentsBakedImage:(BOOL)arg1 ;
@end

