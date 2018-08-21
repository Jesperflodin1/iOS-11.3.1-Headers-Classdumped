/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEORouteSet;

@interface GEOLazyRouteSetIterator : NSObject {

	GEORouteSet* _routeSet;
	unsigned long long _contingencyRouteIndex;

}
-(id)initWithRouteSet:(id)arg1 ;
-(id)nextLazyRoute;
-(void)setContingencyRouteIndex:(unsigned long long)arg1 ;
-(void)dealloc;
@end
