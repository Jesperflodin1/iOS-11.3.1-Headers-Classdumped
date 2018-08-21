/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NEIPC, NSUUID;

@interface NEIPCWrapper : NSObject {

	NSObject*<OS_dispatch_queue> _sendQueue;
	NSObject*<OS_dispatch_queue> _ipcQueue;
	NEIPC* _ipc;
	NSUUID* _identifier;

}

@property (readonly) NSObject*<OS_dispatch_queue> sendQueue;              //@synthesize sendQueue=_sendQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> ipcQueue;               //@synthesize ipcQueue=_ipcQueue - In the implementation block
@property (readonly) NEIPC * ipc;                                         //@synthesize ipc=_ipc - In the implementation block
@property (readonly) NSUUID * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
+(void)cancelSharedWrapperForSession:(void*)arg1 ;
+(id)sharedWrapperForSession:(void*)arg1 ;
-(void)cancel;
-(NSUUID *)identifier;
-(NSObject*<OS_dispatch_queue>)sendQueue;
-(NEIPC *)ipc;
-(NSObject*<OS_dispatch_queue>)ipcQueue;
-(id)initWithSession:(void*)arg1 identifier:(id)arg2 ;
@end

