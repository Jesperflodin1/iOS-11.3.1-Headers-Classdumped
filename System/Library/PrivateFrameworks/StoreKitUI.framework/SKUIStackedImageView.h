/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageView.h>
#import <libobjc.A.dylib/MPUStackViewDataSource.h>

@class MPUBorderConfiguration, MPUStackView, MPUBorderDrawingCache, UIView, NSString;

@interface SKUIStackedImageView : SKUIImageView <MPUStackViewDataSource> {

	MPUBorderConfiguration* _borderConfiguration;
	long long _stackDepth;
	MPUStackView* _stackView;
	MPUBorderDrawingCache* _borderDrawingCache;

}

@property (nonatomic,retain) MPUBorderDrawingCache * borderDrawingCache;              //@synthesize borderDrawingCache=_borderDrawingCache - In the implementation block
@property (assign,nonatomic,__weak) UIView * perspectiveTargetView; 
@property (assign,nonatomic) CGPoint vanishingPoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)maximumPerspectiveHeightForSize:(CGSize)arg1 ;
+(SKUIStackedImageConfiguration)_configurationForSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setPerspectiveTargetView:(UIView *)arg1 ;
-(void)setVanishingPoint:(CGPoint)arg1 ;
-(void)updateForChangedDistanceFromVanishingPoint;
-(UIView *)perspectiveTargetView;
-(void)setBorderDrawingCache:(MPUBorderDrawingCache *)arg1 ;
-(CGPoint)vanishingPoint;
-(long long)numberOfItemsInStackView:(id)arg1 ;
-(void)stackView:(id)arg1 applyAttributesToItem:(id)arg2 atIndex:(long long)arg3 ;
-(void)stackView:(id)arg1 didCreateItem:(id)arg2 ;
-(void)performCompressionAnimationWithCompletionHandler:(/*^block*/id)arg1 ;
-(MPUBorderDrawingCache *)borderDrawingCache;
@end

