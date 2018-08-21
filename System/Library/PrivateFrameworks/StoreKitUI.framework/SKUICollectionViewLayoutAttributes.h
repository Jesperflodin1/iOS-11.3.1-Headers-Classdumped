/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface SKUICollectionViewLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying> {

	UIColor* _backgroundColor;
	long long _position;
	double _zoomingImageAlpha;
	double _zoomingImageWidth;
	double _zoomingImageImposedAlphaOfOtherViews;
	double _zoomingImageLambda;

}

@property (assign,setter=_setZoomingImageLambda:,getter=_zoomingImageLambda,nonatomic) double zoomingImageLambda;              //@synthesize zoomingImageLambda=_zoomingImageLambda - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                                                                          //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) long long position;                                                                               //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) double zoomingImageAlpha;                                                                         //@synthesize zoomingImageAlpha=_zoomingImageAlpha - In the implementation block
@property (assign,nonatomic) double zoomingImageWidth;                                                                         //@synthesize zoomingImageWidth=_zoomingImageWidth - In the implementation block
@property (assign,nonatomic) double zoomingImageImposedAlphaOfOtherViews;                                                      //@synthesize zoomingImageImposedAlphaOfOtherViews=_zoomingImageImposedAlphaOfOtherViews - In the implementation block
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(long long)arg1 ;
-(long long)position;
-(double)zoomingImageWidth;
-(double)zoomingImageImposedAlphaOfOtherViews;
-(double)zoomingImageAlpha;
-(void)setZoomingImageAlpha:(double)arg1 ;
-(void)setZoomingImageWidth:(double)arg1 ;
-(void)setZoomingImageImposedAlphaOfOtherViews:(double)arg1 ;
-(double)_zoomingImageLambda;
-(void)_setZoomingImageLambda:(double)arg1 ;
@end

