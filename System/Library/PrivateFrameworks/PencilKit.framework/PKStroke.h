/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PencilKit/PencilKit-Structs.h>
@class _PKStrokeData, NSMutableArray, _PKStrokeIDWrapper, PKInk;

@interface PKStroke : NSObject {

	_PKStrokeData* _strokeData;
	NSMutableArray* _pointsArray;
	PKStrokeID _strokeID;
	PKStrokePoint _baseValues;
	BOOL _clipped;
	CGPoint _clipOrigin;
	CGPoint _clipNormal;
	CGAffineTransform _transform;
	_PKStrokeIDWrapper* _strokeIDWrapper;
	BOOL _hidden;
	BOOL _inflight;
	PKInk* _ink;
	long long _inputType;
	double _timestamp;
	PKStrokeID _version;
	CGRect _bounds;

}

@property (assign,nonatomic) BOOL _inflight;                                                  //@synthesize inflight=_inflight - In the implementation block
@property (assign,setter=_setInputType:,nonatomic) long long _inputType;                      //@synthesize inputType=_inputType - In the implementation block
@property (assign,getter=_isHidden,nonatomic) BOOL _hidden;                                   //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) CGRect _bounds;                                                  //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) PKStrokeID _version;                                             //@synthesize version=_version - In the implementation block
@property (assign,setter=_setStrokeID:,nonatomic) PKStrokeID _strokeID; 
@property (assign,setter=_setTransform:,nonatomic) CGAffineTransform _transform;              //@synthesize transform=_transform - In the implementation block
@property (assign) double timestamp;                                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (retain) PKInk * ink;                                                               //@synthesize ink=_ink - In the implementation block
@property (readonly) NSMutableArray * points; 
+(long long)compareStrokeWithIDWrapper:(id)arg1 toStrokeIDWrapper:(id)arg2 ;
-(NSMutableArray *)points;
-(id)init;
-(CGRect)bounds;
-(CGRect)bounds;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(CGRect)_bounds;
-(BOOL)_isHidden;
-(double)endTimestamp;
-(void)_setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)_transform;
-(void)_invalidateBounds;
-(PKStrokeID)_strokeID;
-(BOOL)_isClipped;
-(CGPoint)_clipOrigin;
-(CGPoint)_clipNormal;
-(unsigned)_randomSeed;
-(unsigned long long)_pointsCount;
-(PKCompressedStrokePoint*)_completedPoints;
-(PKStrokeID)_version;
-(void)_setStrokeID:(PKStrokeID)arg1 ;
-(id)initWithStroke:(id)arg1 hidden:(BOOL)arg2 version:(PKStrokeID)arg3 transform:(CGAffineTransform)arg4 ;
-(id)initWithStroke:(id)arg1 hidden:(BOOL)arg2 version:(PKStrokeID)arg3 ink:(id)arg4 transform:(CGAffineTransform)arg5 ;
-(void)enumeratePointsWithTimestep:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_setStrokeIDWrapper:(id)arg1 ;
-(id)initWithStroke:(id)arg1 hidden:(BOOL)arg2 version:(PKStrokeID)arg3 ;
-(long long)_inputType;
-(PKStrokePoint)_baseValues;
-(id)_strokeData;
-(void)_replaceStrokePointAtIndex:(unsigned long long)arg1 withStrokePoint:(void*)arg2 ;
-(void)_insertStrokePoint:(void*)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_removeStrokePointAtIndex:(unsigned long long)arg1 ;
-(CGPoint)_interpolatedPointForSplineSegment:(long long)arg1 t:(double)arg2 ;
-(double)_strokeLength;
-(double)_lengthOfSplineSegment:(unsigned long long)arg1 ;
-(double)_interpolatedTimeForSplineSegment:(long long)arg1 t:(double)arg2 ;
-(CGPoint)_splineControlPoint:(long long)arg1 ;
-(id)initWithPath:(CGPathRef)arg1 ink:(id)arg2 inputScale:(double)arg3 ;
-(id)initWithStroke:(id)arg1 points:(PKCompressedStrokePoint*)arg2 count:(unsigned long long)arg3 copy:(BOOL)arg4 ;
-(CGPathRef)newPathRepresentation;
-(void)_setPoints:(PKCompressedStrokePoint*)arg1 count:(unsigned long long)arg2 copy:(BOOL)arg3 ;
-(double)_renderCost;
-(void*)_points;
-(PKInflightStrokePoint*)_inflightPoints;
-(void*)_strokePointAtIndex:(unsigned long long)arg1 ;
-(void)_addStrokePoint:(void*)arg1 ;
-(void)_removeLastStrokePoint;
-(void)_setBaseValues:(PKStrokePoint)arg1 ;
-(void)_setIsClipped:(BOOL)arg1 ;
-(void)_setClipOrigin:(CGPoint)arg1 ;
-(void)_setClipNormal:(CGPoint)arg1 ;
-(id)descriptionExtended;
-(long long)compareToStroke:(id)arg1 ;
-(id)strokeIdentifier;
-(void)enumeratePointsWithDistanceStep:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)set_hidden:(BOOL)arg1 ;
-(void)set_version:(PKStrokeID)arg1 ;
-(void)set_bounds:(CGRect)arg1 ;
-(BOOL)_inflight;
-(void)set_inflight:(BOOL)arg1 ;
-(void)_setInputType:(long long)arg1 ;
-(id)initWithArchive:(const Stroke*)arg1 version:(unsigned)arg2 sortedUUIDs:(id)arg3 inks:(id)arg4 ;
-(id)initWithLegacyArchive:(const Command*)arg1 version:(unsigned)arg2 sortedUUIDs:(id)arg3 ;
-(unsigned)saveToArchive:(Stroke*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 withPathData:(BOOL)arg4 ;
-(PKStrokeID)readStrokeIDFromArchive:(const StrokeID*)arg1 withSortedUUIDs:(id)arg2 ;
-(CGPoint)readPointFromArchive:(const Point*)arg1 ;
-(PKStrokePoint)readPointFromLegacyArchive:(const Point*)arg1 deltaFrom:(const PKStrokePoint*)arg2 ;
-(void)saveStrokeID:(const PKStrokeID*)arg1 toArchive:(StrokeID*)arg2 withSortedUUIDs:(id)arg3 ;
-(void)setInk:(PKInk *)arg1 ;
-(double)startTimestamp;
-(CGPoint)clipOrigin;
-(CGPoint)clipNormal;
-(PKInk *)ink;
-(void)setIsClipped:(BOOL)arg1 ;
-(void)setClipOrigin:(CGPoint)arg1 ;
-(void)setClipNormal:(CGPoint)arg1 ;
-(BOOL)isClipped;
-(void)_applyTransform:(CGAffineTransform)arg1 ;
@end
