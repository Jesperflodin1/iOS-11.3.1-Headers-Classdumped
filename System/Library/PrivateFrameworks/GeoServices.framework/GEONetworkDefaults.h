/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_GEONetworkDefaultsServerProxyDelegate.h>

@protocol _GEONetworkDefaultsServerProxy, OS_dispatch_queue;
@class NSMutableArray, NSDictionary, NSObject, NSString;

@interface GEONetworkDefaults : NSObject <_GEONetworkDefaultsServerProxyDelegate> {

	id<_GEONetworkDefaultsServerProxy> _serverProxy;
	NSMutableArray* _completionHandlers;
	NSDictionary* _networkDefaults;
	NSObject*<OS_dispatch_queue> _networkDefaultsIsolation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedNetworkDefaults;
+(BOOL)useLocalProxy;
+(void)setUseLocalProxy:(BOOL)arg1 ;
+(void)_ib_disableServerConnection;
-(void)updateIfNecessary:(/*^block*/id)arg1 ;
-(void)serverProxy:(id)arg1 networkDefaultsDidChange:(id)arg2 ;
-(void)updateNetworkDefaults:(/*^block*/id)arg1 ;
-(id)init;
-(id)valueForKey:(id)arg1 ;
-(id)allKeys;
-(BOOL)_needsUpdate;
@end

