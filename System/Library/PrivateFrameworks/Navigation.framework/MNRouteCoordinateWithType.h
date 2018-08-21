/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Navigation/Navigation-Structs.h>
@interface MNRouteCoordinateWithType : NSObject {

	unsigned long long _significanceType;
	PolylineCoordinate _routeCoordinate;

}

@property (assign,nonatomic) unsigned long long significanceType;              //@synthesize significanceType=_significanceType - In the implementation block
@property (assign,nonatomic) PolylineCoordinate routeCoordinate;               //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
+(id)divergenceCoordinate:(PolylineCoordinate)arg1 ;
+(id)convergenceCoordinate:(PolylineCoordinate)arg1 ;
-(PolylineCoordinate)routeCoordinate;
-(void)setRouteCoordinate:(PolylineCoordinate)arg1 ;
-(id)description;
-(void)setSignificanceType:(unsigned long long)arg1 ;
-(unsigned long long)significanceType;
@end

