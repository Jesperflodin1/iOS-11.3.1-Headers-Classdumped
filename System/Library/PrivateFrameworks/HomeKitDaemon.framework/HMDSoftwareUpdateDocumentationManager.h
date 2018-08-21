/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFNetMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, HMFNetMonitor, NSArray, NSString;

@interface HMDSoftwareUpdateDocumentationManager : HMFObject <HMFLogging, HMFNetMonitorDelegate> {

	NSMutableSet* _assets;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFNetMonitor* _netMonitor;
	NSMutableSet* _registeredMetadata;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) HMFNetMonitor * netMonitor;                              //@synthesize netMonitor=_netMonitor - In the implementation block
@property (readonly) NSMutableSet * registeredMetadata;                                 //@synthesize registeredMetadata=_registeredMetadata - In the implementation block
@property (readonly) NSArray * assets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)logCategory;
-(id)init;
-(NSArray *)assets;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)networkMonitorIsReachable:(id)arg1 ;
-(HMFNetMonitor *)netMonitor;
-(void)unregisterDocumentationMetadata:(id)arg1 ;
-(id)assetForDocumentationMetadata:(id)arg1 ;
-(void)registerDocumentationMetadata:(id)arg1 ;
-(void)parseCachedAssets;
-(void)addAsset:(id)arg1 ;
-(void)auditAsset:(id)arg1 ;
-(NSMutableSet *)registeredMetadata;
-(void)removeAsset:(id)arg1 ;
@end

