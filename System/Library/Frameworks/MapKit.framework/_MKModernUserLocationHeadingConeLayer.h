/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKUserLocationHeadingConeLayer.h>

@interface _MKModernUserLocationHeadingConeLayer : MKUserLocationHeadingConeLayer
-(void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2 ;
-(id)_headingImage:(CGPoint*)arg1 ;
-(id)initWithUserLocationView:(id)arg1 ;
-(void)_createMaskLayer;
-(CGRect)_normalizedHeadingMaskRectForIndex:(unsigned long long)arg1 ;
-(unsigned long long)_keyframeIndexForAccuracy:(double)arg1 ;
-(BOOL)_shouldShowHeadingForAccuracy:(double)arg1 ;
-(void)_updateHeadingMaskForAccuracy:(double)arg1 previousAccuracy:(double)arg2 ;
-(void)_updateShowHeadingForAccuracy:(double)arg1 ;
@end

