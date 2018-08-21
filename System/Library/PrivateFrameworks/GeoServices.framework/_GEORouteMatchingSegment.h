/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRouteStep;

@interface _GEORouteMatchingSegment : NSObject {

	unsigned _startPointIndex;
	SCD_Struct_GE29 _startCoordinate;
	SCD_Struct_GE29 _endCoordinate;
	GEOComposedRouteStep* _step;

}

@property (assign,nonatomic) unsigned startPointIndex;                     //@synthesize startPointIndex=_startPointIndex - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE29 startCoordinate;              //@synthesize startCoordinate=_startCoordinate - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE29 endCoordinate;                //@synthesize endCoordinate=_endCoordinate - In the implementation block
@property (nonatomic,retain) GEOComposedRouteStep * step;                  //@synthesize step=_step - In the implementation block
-(unsigned)startPointIndex;
-(GEOComposedRouteStep *)step;
-(double)distanceFromCoordinate:(SCD_Struct_GE29)arg1 outCoordinateOnSegment:(SCD_Struct_GE29*)arg2 outRouteCoordinate:(PolylineCoordinate*)arg3 ;
-(SCD_Struct_GE29)endCoordinate;
-(SCD_Struct_GE29)startCoordinate;
-(void)setStep:(GEOComposedRouteStep *)arg1 ;
-(void)setEndCoordinate:(SCD_Struct_GE29)arg1 ;
-(void)setStartCoordinate:(SCD_Struct_GE29)arg1 ;
-(void)setStartPointIndex:(unsigned)arg1 ;
-(id)description;
@end

