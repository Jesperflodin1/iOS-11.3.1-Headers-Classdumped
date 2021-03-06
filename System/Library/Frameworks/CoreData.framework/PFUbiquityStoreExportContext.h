/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PFUbiquityLocation, NSString, NSMutableSet, NSSQLCore, PFUbiquitySwitchboardCacheWrapper, NSSet;

@interface PFUbiquityStoreExportContext : NSObject {

	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _localPeerID;
	NSString* _storeName;
	NSMutableSet* _transactionEntries;
	NSSQLCore* _store;
	PFUbiquitySwitchboardCacheWrapper* _cacheWrapper;

}

@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation;                   //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) NSString * localPeerID;                                      //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                        //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) NSSet * transactionEntries;                                  //@synthesize transactionEntries=_transactionEntries - In the implementation block
@property (nonatomic,retain) NSSQLCore * store;                                             //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) PFUbiquitySwitchboardCacheWrapper * cacheWrapper;              //@synthesize cacheWrapper=_cacheWrapper - In the implementation block
-(NSString *)localPeerID;
-(NSString *)storeName;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(PFUbiquitySwitchboardCacheWrapper *)cacheWrapper;
-(void)setCacheWrapper:(PFUbiquitySwitchboardCacheWrapper *)arg1 ;
-(NSSet *)transactionEntries;
-(id)initWithStoreName:(id)arg1 andUbiquityRootLocation:(id)arg2 forLocalPeerID:(id)arg3 ;
-(id)addTransactionEntryForGlobalID:(id)arg1 andTransactionType:(int)arg2 ;
-(void)dealloc;
-(id)description;
-(NSSQLCore *)store;
-(void)setStore:(NSSQLCore *)arg1 ;
@end

