/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WCPrivateXPCManagerDelegate.h>

@protocol WCComplicationManagerDelegate, OS_dispatch_queue;
@class NSObject, NSString;

@interface WCComplicationManager : NSObject <WCPrivateXPCManagerDelegate> {

	NSObject*<WCComplicationManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (readonly) NSObject*<OS_dispatch_queue> delegateQueue;                                    //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<WCComplicationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<WCComplicationManagerDelegate>)delegate;
-(void)setDelegate:(NSObject*<WCComplicationManagerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)xpcManager:(id)arg1 handlePingForExtensionBundleID:(id)arg2 ;
-(void)xpcManager:(id)arg1 isExtensionPrivileged:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)xpcManager:(id)arg1 handlePairedSyncComplicationsStartedWithCompletionHandler:(/*^block*/id)arg2 ;
@end

