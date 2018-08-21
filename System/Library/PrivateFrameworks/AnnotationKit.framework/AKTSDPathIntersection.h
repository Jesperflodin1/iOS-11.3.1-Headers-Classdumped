/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@interface AKTSDPathIntersection : NSObject {

	long long mSegment;
	long long mSegmentB;
	double mT;
	double mTB;
	CGPoint mPoint;

}

@property (nonatomic,readonly) long long segment; 
@property (nonatomic,readonly) long long segmentB; 
@property (nonatomic,readonly) double t; 
@property (nonatomic,readonly) double tB; 
@property (assign,nonatomic) CGPoint point; 
-(id)description;
-(CGPoint)point;
-(long long)segment;
-(void)setPoint:(CGPoint)arg1 ;
-(double)t;
-(id)initWithSegment:(long long)arg1 atT:(double)arg2 onSegmentB:(long long)arg3 atT:(double)arg4 atPoint:(CGPoint)arg5 ;
-(long long)compareT:(id)arg1 ;
-(id)initWithSegment:(long long)arg1 atT:(double)arg2 atPoint:(CGPoint)arg3 ;
-(long long)compareSegmentAndT:(id)arg1 ;
-(long long)segmentB;
-(double)tB;
@end

