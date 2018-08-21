/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKit/UIView.h>

@class NTKFaceColorScheme, NSArray;

@interface NTKActivityDialView : UIView {

	BOOL _shouldRasterize;
	NTKFaceColorScheme* _colorScheme;
	double _zoomFraction;
	NSArray* _segments;

}

@property (nonatomic,readonly) NSArray * segments;                          //@synthesize segments=_segments - In the implementation block
@property (nonatomic,retain) NTKFaceColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
@property (assign,nonatomic) BOOL shouldRasterize;                          //@synthesize shouldRasterize=_shouldRasterize - In the implementation block
@property (assign,nonatomic) double zoomFraction;                           //@synthesize zoomFraction=_zoomFraction - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setShouldRasterize:(BOOL)arg1 ;
-(BOOL)shouldRasterize;
-(NSArray *)segments;
-(void)setZoomFraction:(double)arg1 ;
-(double)zoomFraction;
-(void)applyTransitionFromScheme:(id)arg1 toScheme:(id)arg2 fraction:(double)arg3 ;
-(double)_handAlphaForEditMode:(long long)arg1 ;
-(double)_segmentAlphaForEditMode:(long long)arg1 ;
-(NTKFaceColorScheme *)colorScheme;
-(void)setColorScheme:(NTKFaceColorScheme *)arg1 ;
@end
