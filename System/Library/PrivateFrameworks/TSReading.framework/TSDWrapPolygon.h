/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSDWrapPolygon : NSObject <NSCopying> {

	void* mPolygon;
	BOOL mIntersectsSelf;
	BOOL mComputedSelfIntersection;
	CGRect mBounds;
	BOOL mComputedBounds;

}
-(CGRect)bounds;
-(void)dealloc;
-(id)bezierPath;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPath:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
-(void)setIntersectsSelf:(BOOL)arg1 ;
-(void)p_setPolygon:(SCD_Struct_TS75*)arg1 ;
-(void)p_freePolygon;
-(void)p_computeIntersectionState;
-(BOOL)intersectsSelf;
-(void*)polygon;
-(CGPoint)intersectionPointBetween:(CGPoint)arg1 and:(CGPoint)arg2 ;
-(int)p_countSegments;
@end
