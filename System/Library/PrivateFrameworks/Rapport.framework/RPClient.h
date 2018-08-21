/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSXPCConnection;

@interface RPClient : NSObject {

	NSMutableSet* _assertions;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSXPCConnection* _xpcCnx;
	unsigned _type;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) unsigned type;                                           //@synthesize type=_type - In the implementation block
-(id)init;
-(void)invalidate;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)activateAssertionWithIdentifier:(id)arg1 ;
-(void)_invalidated;
-(void)_interrupted;
-(void)diagnosticLogControl:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_ensureXPCStarted;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)diagnosticCommand:(id)arg1 params:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)diagnosticShow:(id)arg1 level:(int)arg2 completion:(/*^block*/id)arg3 ;
@end

