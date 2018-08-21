/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, HMDUser, NSObject, NSUUID, HMDAssistantAccessControlModel, NSArray, NSString;

@interface HMDAssistantAccessControl : HMFObject <HMFLogging, HMFObject, NSSecureCoding, HMDBackingStoreObjectProtocol> {

	NSMutableSet* _accessories;
	BOOL _enabled;
	HMDUser* _user;
	unsigned long long _cachedHash;
	unsigned long long _options;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> propertyQueue;                      //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (readonly) unsigned long long cachedHash;                                   //@synthesize cachedHash=_cachedHash - In the implementation block
@property (copy,readonly) NSUUID * modelID; 
@property (copy,readonly) HMDAssistantAccessControlModel * model; 
@property (assign) unsigned long long options;                                        //@synthesize options=_options - In the implementation block
@property (__weak) HMDUser * user;                                                    //@synthesize user=_user - In the implementation block
@property (getter=isEnabled,readonly) BOOL enabled;                                   //@synthesize enabled=_enabled - In the implementation block
@property (copy,readonly) NSArray * accessories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * propertyDescription; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(BOOL)isAccessorySupported:(id)arg1 ;
+(id)accessControlWithMessage:(id)arg1 user:(id)arg2 error:(id*)arg3 ;
+(id)modelIDNamespace;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(HMDAssistantAccessControlModel *)model;
-(HMDUser *)user;
-(id)logIdentifier;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(void)removeAccessory:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setUser:(HMDUser *)arg1 ;
-(NSArray *)accessories;
-(id)transactionWithObjectChangeType:(unsigned long long)arg1 ;
-(void)handleRemovedAccessory:(id)arg1 ;
-(void)addAccessory:(id)arg1 ;
-(void)setAccessories:(NSArray *)arg1 ;
-(NSString *)propertyDescription;
-(NSUUID *)modelID;
-(id)initWithUser:(id)arg1 ;
-(id)initWithUser:(id)arg1 model:(id)arg2 ;
-(unsigned long long)cachedHash;
-(void)notifyClientOfUpdateWithMessage:(id)arg1 ;
@end

