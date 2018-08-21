/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXRemoteElementChildrenDelegate, OS_dispatch_queue;
#import <AXRuntime/AXRuntime-Structs.h>
@class NSString, NSMutableSet, NSObject;

@interface AXRemoteElement : NSObject {

	NSString* _uuid;
	int _remotePid;
	unsigned _contextId;
	BOOL _onClientSide;
	NSMutableSet* _allChildren;
	BOOL _deniesDirectAppConnection;
	unsigned _machPort;
	id<AXRemoteElementChildrenDelegate> _remoteChildrenDelegate;
	id _accessibilityContainer;
	NSObject*<OS_dispatch_queue> _remoteQueue;

}

@property (assign,nonatomic) int remotePid;                                                                  //@synthesize remotePid=_remotePid - In the implementation block
@property (assign,nonatomic) unsigned contextId;                                                             //@synthesize contextId=_contextId - In the implementation block
@property (nonatomic,retain) NSString * uuid;                                                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> remoteQueue;                                       //@synthesize remoteQueue=_remoteQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long uuidHash; 
@property (assign,nonatomic) unsigned machPort;                                                              //@synthesize machPort=_machPort - In the implementation block
@property (assign,nonatomic) BOOL onClientSide;                                                              //@synthesize onClientSide=_onClientSide - In the implementation block
@property (assign,nonatomic,__weak) id<AXRemoteElementChildrenDelegate> remoteChildrenDelegate;              //@synthesize remoteChildrenDelegate=_remoteChildrenDelegate - In the implementation block
@property (assign,nonatomic,__weak) id accessibilityContainer;                                               //@synthesize accessibilityContainer=_accessibilityContainer - In the implementation block
@property (assign,nonatomic) BOOL deniesDirectAppConnection;                                                 //@synthesize deniesDirectAppConnection=_deniesDirectAppConnection - In the implementation block
+(void)initialize;
+(id)remoteElementForBlock:(/*^block*/id)arg1 ;
+(id)remoteElementsForBlock:(/*^block*/id)arg1 ;
+(BOOL)registerRemoteElement:(id)arg1 ;
+(id)remoteElementsForContextId:(unsigned)arg1 ;
-(unsigned)machPort;
-(void)dealloc;
-(id)description;
-(unsigned)contextId;
-(void)unregister;
-(CGRect)accessibilityFrame;
-(id)accessibilityContainer;
-(void)setAccessibilityContainer:(id)arg1 ;
-(void)setContextId:(unsigned)arg1 ;
-(id)accessibilityElements;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(BOOL)deniesDirectAppConnection;
-(void)setRemotePid:(int)arg1 ;
-(id)_remoteElementWithAttribute:(long long)arg1 limitToRemoteSubviews:(BOOL)arg2 ;
-(id<AXRemoteElementChildrenDelegate>)remoteChildrenDelegate;
-(void)setDeniesDirectAppConnection:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)remoteQueue;
-(void)setRemoteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)onClientSide;
-(void)_accessibilityIncreaseSelection:(id)arg1 ;
-(void)platformCleanup;
-(unsigned long long)uuidHash;
-(id)_accessibilityResponderElement;
-(id)_accessibilityFirstElement;
-(id)_accessibilityLastElement;
-(id)_accessibilitySortedElementsWithin;
-(id)_accessibilityTextViewTextOperationResponder;
-(id)_accessibilityTextOperations;
-(int)remotePid;
-(void)setRemoteChildrenDelegate:(id<AXRemoteElementChildrenDelegate>)arg1 ;
-(id)_accessibilityActiveKeyboard;
-(id)initWithUUID:(id)arg1 andRemotePid:(int)arg2 andContextId:(unsigned)arg3 ;
-(void)setOnClientSide:(BOOL)arg1 ;
-(void)setMachPort:(unsigned)arg1 ;
@end
