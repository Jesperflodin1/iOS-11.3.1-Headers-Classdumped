/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NSProgressRegistrar.h>

@protocol NSProgressRegistrar
@required
-(oneway void)removePublisherForID:(id)arg1;
-(oneway void)observePublisherForID:(id)arg1 values:(id)arg2 forKeys:(id)arg3;
-(oneway void)observePublisherUserInfoForID:(id)arg1 value:(id)arg2 forKey:(id)arg3;
-(oneway void)removeSubscriberForID:(id)arg1;
-(oneway void)addPublisher:(id)arg1 forID:(id)arg2 acknowledgementAppBundleIDs:(id)arg3 category:(id)arg4 fileURL:(id)arg5 initialValues:(id)arg6 completionHandler:(/*^block*/id)arg7;
-(oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 category:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 fileURL:(id)arg4 completionHandler:(/*^block*/id)arg5;

@end


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSFileAccessNode, NSMutableSet, NSString;

@interface NSProgressRegistrar : NSObject <NSXPCListenerDelegate, NSProgressRegistrar> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _publishersByID;
	NSMutableDictionary* _publisherTransactionsByID;
	NSMutableDictionary* _subscribersByID;
	NSMutableDictionary* _subscriberTransactionsByID;
	NSFileAccessNode* _rootFileAccessNode;
	NSMutableSet* _pendingFileSubscriberIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)removePublisherForID:(id)arg1 ;
-(oneway void)observePublisherForID:(id)arg1 values:(id)arg2 forKeys:(id)arg3 ;
-(oneway void)observePublisherUserInfoForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 ;
-(oneway void)removeSubscriberForID:(id)arg1 ;
-(void)_getRemoteProcessWithIdentifier:(int)arg1 canReadItemAtURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(oneway void)addPublisher:(id)arg1 forID:(id)arg2 acknowledgementAppBundleIDs:(id)arg3 category:(id)arg4 fileURL:(id)arg5 initialValues:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 category:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 fileURL:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)initWithQueue:(id)arg1 rootFileAccessNode:(id)arg2 ;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

