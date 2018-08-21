/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol HAPAccessoryServerDelegate, OS_dispatch_queue, HAPKeyStore;
@class NSString, NSNumber, NSObject, NSData, HAPAccessory, NSArray, HMFVersion, NSHashTable, HAPDeviceID;

@interface HAPAccessoryServer : HMFObject {

	NSString* _name;
	NSString* _identifier;
	BOOL _hasPairings;
	BOOL _reachable;
	BOOL _securitySessionOpen;
	BOOL _supportsTimedWrite;
	BOOL _incompatibleUpdate;
	NSNumber* _category;
	unsigned long long _configNumber;
	id<HAPAccessoryServerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSData* _setupHash;
	unsigned long long _authMethod;
	HAPAccessory* _primaryAccessory;
	NSArray* _accessories;
	long long _linkType;
	HMFVersion* _version;
	NSHashTable* _internalDelegates;
	NSObject*<OS_dispatch_queue> _internalDelegateQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	id<HAPKeyStore> _keyStore;
	unsigned long long _pairSetupType;

}

@property (nonatomic,readonly) NSHashTable * internalDelegates;                                 //@synthesize internalDelegates=_internalDelegates - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalDelegateQueue;              //@synthesize internalDelegateQueue=_internalDelegateQueue - In the implementation block
@property (__weak,readonly) id<HAPAccessoryServerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                      //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                        //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                      //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,copy) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (assign,nonatomic) BOOL hasPairings;                                                  //@synthesize hasPairings=_hasPairings - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                                 //@synthesize reachable=_reachable - In the implementation block
@property (getter=isSecuritySessionOpen) BOOL securitySessionOpen;                              //@synthesize securitySessionOpen=_securitySessionOpen - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSNumber * category;                                                 //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) unsigned long long configNumber;                                   //@synthesize configNumber=_configNumber - In the implementation block
@property (assign,getter=isIncompatibleUpdate,nonatomic) BOOL incompatibleUpdate;               //@synthesize incompatibleUpdate=_incompatibleUpdate - In the implementation block
@property (nonatomic,retain) HAPAccessory * primaryAccessory;                                   //@synthesize primaryAccessory=_primaryAccessory - In the implementation block
@property (nonatomic,copy) NSArray * accessories;                                               //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,__weak,readonly) id<HAPKeyStore> keyStore;                                 //@synthesize keyStore=_keyStore - In the implementation block
@property (nonatomic,copy) NSData * setupHash;                                                  //@synthesize setupHash=_setupHash - In the implementation block
@property (copy) HMFVersion * version;                                                          //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned long long pairSetupType;                                  //@synthesize pairSetupType=_pairSetupType - In the implementation block
@property (copy,readonly) HAPDeviceID * deviceID; 
@property (nonatomic,readonly) long long linkType;                                              //@synthesize linkType=_linkType - In the implementation block
@property (assign,nonatomic) BOOL supportsTimedWrite;                                           //@synthesize supportsTimedWrite=_supportsTimedWrite - In the implementation block
@property (assign,nonatomic) unsigned long long authMethod;                                     //@synthesize authMethod=_authMethod - In the implementation block
+(BOOL)isAccessoryServerWithIdentifierPaired:(id)arg1 keyStore:(id)arg2 ;
-(id)init;
-(id<HAPAccessoryServerDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setCategory:(NSNumber *)arg1 ;
-(NSNumber *)category;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setVersion:(HMFVersion *)arg1 ;
-(HMFVersion *)version;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSObject*<OS_dispatch_queue>)internalDelegateQueue;
-(void)setHasPairings:(BOOL)arg1 ;
-(void)setSecuritySessionOpen:(BOOL)arg1 ;
-(void)enumerateInternalDelegatesUsingBlock:(/*^block*/id)arg1 ;
-(void)setSupportsTimedWrite:(BOOL)arg1 ;
-(void)setPairSetupType:(unsigned long long)arg1 ;
-(unsigned long long)pairSetupType;
-(void)handleUpdatesForCharacteristics:(id)arg1 stateNumber:(id)arg2 ;
-(void)addInternalDelegate:(id)arg1 ;
-(BOOL)isIncompatibleUpdate;
-(void)notifyDelegateUpdatedHasPairings:(BOOL)arg1 ;
-(void)notifyDelegateUpdatedName:(id)arg1 ;
-(void)notifyDelegateUpdatedCategory:(id)arg1 ;
-(BOOL)supportsTimedWrite;
-(NSHashTable *)internalDelegates;
-(void)removeInternalDelegate:(id)arg1 ;
-(void)setIncompatibleUpdate:(BOOL)arg1 ;
-(HAPDeviceID *)deviceID;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(BOOL)isReachable;
-(NSData *)setupHash;
-(void)setSetupHash:(NSData *)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(NSArray *)accessories;
-(long long)linkType;
-(void)setReachable:(BOOL)arg1 ;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isPaired;
-(HAPAccessory *)primaryAccessory;
-(void)setAccessories:(NSArray *)arg1 ;
-(id<HAPKeyStore>)keyStore;
-(unsigned long long)configNumber;
-(void)setConfigNumber:(unsigned long long)arg1 ;
-(BOOL)isSecuritySessionOpen;
-(void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)requiresTimedWrite:(id)arg1 ;
-(void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)identifyWithCompletion:(/*^block*/id)arg1 ;
-(void)setAuthMethod:(unsigned long long)arg1 ;
-(unsigned long long)authMethod;
-(id)initWithKeystore:(id)arg1 ;
-(void)setPrimaryAccessory:(HAPAccessory *)arg1 ;
-(BOOL)hasPairings;
-(void)discoverAccessories;
-(void)continuePairingAfterAuthPrompt;
-(BOOL)stopPairingWithError:(id*)arg1 ;
-(BOOL)tryPairingPassword:(id)arg1 error:(id*)arg2 ;
-(void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)matchesSetupID:(id)arg1 ;
-(void)startPairingWithConsentRequired:(BOOL)arg1 ;
-(void)reconfirm;
@end

