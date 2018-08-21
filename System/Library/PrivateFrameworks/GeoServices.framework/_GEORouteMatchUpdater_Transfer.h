/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOPBTransitStation, GEOPBTransitStop, GEOComposedRouteStep;

@interface _GEORouteMatchUpdater_Transfer : _GEORouteMatchUpdater {

	GEOPBTransitStation* _alightStation;
	GEOPBTransitStation* _boardStation;
	GEOPBTransitStop* _alightStop;
	GEOPBTransitStop* _boardStop;
	GEOComposedRouteStep* _alightStep;
	GEOComposedRouteStep* _transferStep;
	GEOComposedRouteStep* _boardStep;

}
-(BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(BOOL)_isLocation:(id)arg1 nearStop:(id)arg2 ;
-(BOOL)_isLocation:(id)arg1 nearStation:(id)arg2 ;
-(id)initWithTransitRouteMatcher:(id)arg1 alightStep:(id)arg2 transferStep:(id)arg3 boardStep:(id)arg4 ;
@end
