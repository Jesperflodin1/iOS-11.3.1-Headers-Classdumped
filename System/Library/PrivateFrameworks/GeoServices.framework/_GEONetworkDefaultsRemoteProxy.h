/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_GEONetworkDefaultsServerProxy.h>

@protocol _GEONetworkDefaultsServerProxyDelegate, OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString;

@interface _GEONetworkDefaultsRemoteProxy : NSObject <_GEONetworkDefaultsServerProxy> {

	id<_GEONetworkDefaultsServerProxyDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _isolation;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSMutableArray* _updateCompletionHandlers;
	int _configChangedToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<_GEONetworkDefaultsServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)updateNetworkDefaults:(/*^block*/id)arg1 ;
-(void)_networkDefaultsDidChange;
-(id)init;
-(id<_GEONetworkDefaultsServerProxyDelegate>)delegate;
-(void)setDelegate:(id<_GEONetworkDefaultsServerProxyDelegate>)arg1 ;
-(void)dealloc;
@end

