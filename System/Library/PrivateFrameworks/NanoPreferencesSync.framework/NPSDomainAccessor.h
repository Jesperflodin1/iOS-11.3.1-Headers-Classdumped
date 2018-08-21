/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NPSDomainAccessorInternal, NSString, NSUUID;

@interface NPSDomainAccessor : NSObject {

	NSObject*<OS_dispatch_queue> _externalQueue;
	NSObject*<OS_dispatch_queue> _invalidationQueue;
	NPSDomainAccessorInternal* _internalAccessor;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> externalQueue;                  //@synthesize externalQueue=_externalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> invalidationQueue;              //@synthesize invalidationQueue=_invalidationQueue - In the implementation block
@property (nonatomic,retain) NPSDomainAccessorInternal * internalAccessor;                //@synthesize internalAccessor=_internalAccessor - In the implementation block
@property (nonatomic,readonly) NSString * domain; 
@property (nonatomic,readonly) NSUUID * pairingID; 
+(void)initialize;
+(void)resolveActivePairedDevicePairingID:(id*)arg1 pairingDataStore:(id*)arg2 ;
+(id)copyDomainListForPairingID:(id)arg1 pairingDataStore:(id)arg2 ;
+(id)copyDomainList;
-(long long)longForKey:(id)arg1 ;
-(void)setURL:(id)arg1 forKey:(id)arg2 ;
-(void)invalidate;
-(id)objectForKey:(id)arg1 ;
-(id)synchronize;
-(void)dealloc;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSString *)domain;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(long long)integerForKey:(id)arg1 ;
-(float)floatForKey:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDomain:(id)arg1 ;
-(id)queue;
-(id)dictionaryForKey:(id)arg1 ;
-(NPSDomainAccessorInternal *)internalAccessor;
-(id)initWithDomain:(id)arg1 queue:(id)arg2 ;
-(id)initWithDomain:(id)arg1 queue:(id)arg2 pairingID:(id)arg3 pairingDataStore:(id)arg4 ;
-(id)initWithInternalDomainAccessor:(id)arg1 queue:(id)arg2 ;
-(void)objectForKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)longForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2 ;
-(float)floatForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2 ;
-(double)doubleForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2 ;
-(NSObject*<OS_dispatch_queue>)externalQueue;
-(void)setExternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)invalidationQueue;
-(void)setInvalidationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInternalAccessor:(NPSDomainAccessorInternal *)arg1 ;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(id)arrayForKey:(id)arg1 ;
-(NSUUID *)pairingID;
-(id)copyKeyList;
-(long long)integerForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2 ;
-(double)doubleForKey:(id)arg1 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(id)initWithDomain:(id)arg1 pairedDevice:(id)arg2 ;
-(id)stringArrayForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(id)initWithDomain:(id)arg1 pairingID:(id)arg2 pairingDataStore:(id)arg3 ;
-(BOOL)boolForKey:(id)arg1 keyExistsAndHasValidFormat:(BOOL*)arg2 ;
-(id)dataForKey:(id)arg1 ;
@end

