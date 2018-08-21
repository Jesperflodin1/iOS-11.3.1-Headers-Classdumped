/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class Polyline;

@interface PolylinePair : NSObject {

	double s0;
	double s1;
	float xmax;
	float xmin;
	float ymax;
	float ymin;
	float arclength;
	double seglength;
	BOOL isempty;
	unsigned nsegs;
	CGPoint normVtop;
	CGPoint axisV;
	CGPoint normVbottom;
	double sdelta;
	float maxsize;
	CGRect xyBoundsRect;
	CGPathRef boundsPath;
	Polyline* _top;
	Polyline* _bottom;

}

@property (retain,readonly) Polyline * top;                 //@synthesize top=_top - In the implementation block
@property (retain,readonly) Polyline * bottom;              //@synthesize bottom=_bottom - In the implementation block
@property (assign) CGPoint normVtop; 
@property (assign) CGPoint normVbottom; 
@property (assign) CGPoint axisV; 
@property (readonly) CGPathRef boundsPath; 
@property (assign) double s0; 
@property (assign) double s1; 
-(id)initWithMaxsize:(float)arg1 segmentDelta:(float)arg2 andAxis:(CGPoint)arg3 ;
-(void)accomodatePoint:(CGPoint)arg1 ;
-(double)s0;
-(void)setS0:(double)arg1 ;
-(double)s1;
-(void)setS1:(double)arg1 ;
-(void)bridgeGapsLinear;
-(void)expandWithToleranceTop:(float)arg1 bottom:(float)arg2 ;
-(void)extrapolateAndJoinTopAndBottom;
-(void)constructBezierWithToleranceTop:(float)arg1 bottom:(float)arg2 ;
-(CGPathRef)boundsPath;
-(CGPoint)axisV;
-(void)setAxisV:(CGPoint)arg1 ;
-(CGRect)xyBoundsRect;
-(int)npoints;
-(id)createTopBottomRegion;
-(CGPoint)normVtop;
-(void)setNormVtop:(CGPoint)arg1 ;
-(CGPoint)normVbottom;
-(void)setNormVbottom:(CGPoint)arg1 ;
-(void)dealloc;
-(Polyline *)top;
-(Polyline *)bottom;
@end

