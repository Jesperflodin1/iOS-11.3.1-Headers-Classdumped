/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _HKXPCExportable;
@class NSXPCConnection, NSString;

@interface _HKXPCConnection : NSObject {

	NSXPCConnection* _underlyingConnection;
	id<_HKXPCExportable> _exportedObject;
	NSString* _debugIdentifier;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (assign,nonatomic,__weak) id<_HKXPCExportable> exportedObject;              //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,copy) NSString * debugIdentifier;                                //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(NSString *)debugIdentifier;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(void)resume;
-(id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(void)setExportedObject:(id<_HKXPCExportable>)arg1 ;
-(id)initWithListenerEndpoint:(id)arg1 ;
-(id)initWithUnderlyingConnection:(id)arg1 ;
-(id<_HKXPCExportable>)exportedObject;
@end

