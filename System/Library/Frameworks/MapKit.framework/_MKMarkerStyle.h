/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor, UIImage;

@interface _MKMarkerStyle : NSObject {

	UIColor* _markerColor;
	double _shadowAlpha;
	UIColor* _strokeColor;
	double _strokeWidth;
	UIColor* _glyphColor;
	UIImage* _glyphImage;

}

@property (nonatomic,readonly) UIColor * markerColor;              //@synthesize markerColor=_markerColor - In the implementation block
@property (nonatomic,readonly) double shadowAlpha;                 //@synthesize shadowAlpha=_shadowAlpha - In the implementation block
@property (nonatomic,readonly) UIColor * strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,readonly) double strokeWidth;                 //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,readonly) UIColor * glyphColor;               //@synthesize glyphColor=_glyphColor - In the implementation block
@property (nonatomic,readonly) UIImage * glyphImage;               //@synthesize glyphImage=_glyphImage - In the implementation block
+(id)markerStyleForTraitCollection:(id)arg1 state:(long long)arg2 ;
-(UIColor *)strokeColor;
-(double)shadowAlpha;
-(UIImage *)glyphImage;
-(UIColor *)glyphColor;
-(double)strokeWidth;
-(UIColor *)markerColor;
@end

