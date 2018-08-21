/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Navigation/Navigation-Structs.h>
@class MNActiveRouteInfo;

@interface _MNTrackedAlternateRoute : NSObject {

	MNActiveRouteInfo* _alternateRoute;
	MNActiveRouteInfo* _mainRoute;
	PolylineCoordinate _divergenceCoordinate;

}

@property (nonatomic,retain) MNActiveRouteInfo * alternateRoute;                   //@synthesize alternateRoute=_alternateRoute - In the implementation block
@property (nonatomic,retain) MNActiveRouteInfo * mainRoute;                        //@synthesize mainRoute=_mainRoute - In the implementation block
@property (assign,nonatomic) PolylineCoordinate divergenceCoordinate;              //@synthesize divergenceCoordinate=_divergenceCoordinate - In the implementation block
-(MNActiveRouteInfo *)alternateRoute;
-(void)setAlternateRoute:(MNActiveRouteInfo *)arg1 ;
-(MNActiveRouteInfo *)mainRoute;
-(void)setMainRoute:(MNActiveRouteInfo *)arg1 ;
-(void)setDivergenceCoordinate:(PolylineCoordinate)arg1 ;
-(PolylineCoordinate)divergenceCoordinate;
@end

