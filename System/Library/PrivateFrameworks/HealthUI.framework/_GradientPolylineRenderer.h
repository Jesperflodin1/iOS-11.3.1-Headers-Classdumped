/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class HKRouteMapGenerator;

@interface _GradientPolylineRenderer : MKOverlayPathRenderer {

	HKRouteMapGenerator* _generator;

}
-(void)drawMapRect:(SCD_Struct_HK16)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(BOOL)canDrawMapRect:(SCD_Struct_HK16)arg1 zoomScale:(double)arg2 ;
-(CGPoint)_originMapPoint;
-(id)initWithPolyline:(id)arg1 locationReadings:(id)arg2 ;
@end

