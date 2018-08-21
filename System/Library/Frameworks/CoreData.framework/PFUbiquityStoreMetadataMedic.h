/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PFUbiquityLocation, NSPersistentStore, NSSQLiteConnection;

@interface PFUbiquityStoreMetadataMedic : NSObject {

	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _storeName;
	NSPersistentStore* _store;

}

@property (nonatomic,readonly) NSString * localPeerID;                                 //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation;              //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                   //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * store;                              //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) NSSQLiteConnection * connection; 
-(NSString *)localPeerID;
-(NSString *)storeName;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(id)initWithStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(BOOL)recoverMetadataWithError:(id*)arg1 ;
-(BOOL)recoverBaselineMetadataWithImportContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)recoverTransactionLogMetadataWithImportContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)addTransactionHistoryEntriesForObjectIDs:(id)arg1 withImportContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)cacheMetadataForTransactionLog:(id)arg1 withImportContext:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(NSSQLiteConnection *)connection;
-(NSPersistentStore *)store;
@end

