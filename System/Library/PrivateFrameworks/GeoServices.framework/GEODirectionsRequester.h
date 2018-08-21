/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _GEODirectionsRequesterServerProxy;
@interface GEODirectionsRequester : NSObject {

	id<_GEODirectionsRequesterServerProxy> _serverProxy;

}
+(void)useRemoteProxy;
+(void)useProxy:(Class)arg1 ;
+(void)useLocalProxy;
+(id)sharedRequester;
-(void)cancelRequest:(id)arg1 ;
-(void)finalizeRequest:(id)arg1 ;
-(void)startRequest:(id)arg1 finished:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)startRequest:(id)arg1 auditToken:(id)arg2 skipFinalize:(BOOL)arg3 isDoomRequest:(BOOL)arg4 requestPriority:(id)arg5 finished:(/*^block*/id)arg6 networkActivity:(/*^block*/id)arg7 error:(/*^block*/id)arg8 ;
-(id)init;
@end

