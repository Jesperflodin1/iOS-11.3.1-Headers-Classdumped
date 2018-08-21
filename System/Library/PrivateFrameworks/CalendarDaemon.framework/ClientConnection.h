/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, ClientConnectionDelegate;
#import <CalendarDaemon/CalendarDaemon-Structs.h>
@class NSLock, NSSet, NSObject, NSOperationQueue, NSMutableDictionary, NSMutableSet, CADOperationProxy, ClientIdentity, NSXPCConnection, CADDatabaseInitializationOptions, NSString;

@interface ClientConnection : NSObject {

	BOOL _allowedEntityTypesValid;
	long long _eventAccess;
	long long _reminderAccess;
	NSLock* _restrictionsLock;
	NSSet* _managedStoreRowIDs;
	NSSet* _restrictedStoreRowIDs;
	NSSet* _restrictedCalendarRowIDs;
	CalDatabase* _database;
	NSObject*<OS_dispatch_queue> _dbQueue;
	NSOperationQueue* _operations;
	NSMutableDictionary* _insertedObjects;
	NSMutableSet* _canceledRequests;
	NSObject*<OS_dispatch_queue> _canceledRequestsLock;
	BOOL _initializationOptionsSet;
	CADOperationProxy* _cadOperationProxy;
	id<ClientConnectionDelegate> _delegate;
	ClientIdentity* _identity;
	NSXPCConnection* _xpcConnection;
	CADDatabaseInitializationOptions* _databaseInitializationOptions;

}

@property (assign,nonatomic,__weak) id<ClientConnectionDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CalDatabase* database;                                                         //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) ClientIdentity * identity;                                                   //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) CADOperationProxy * cadOperationProxy;                                       //@synthesize cadOperationProxy=_cadOperationProxy - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                               //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSString * changeTrackingID; 
@property (nonatomic,retain) CADDatabaseInitializationOptions * databaseInitializationOptions;              //@synthesize databaseInitializationOptions=_databaseInitializationOptions - In the implementation block
@property (readonly) BOOL initializationOptionsSet;                                                         //@synthesize initializationOptionsSet=_initializationOptionsSet - In the implementation block
-(id)initWithXPCConnection:(id)arg1 ;
-(void)closeDatabase;
-(id<ClientConnectionDelegate>)delegate;
-(void*)objectForKey:(id)arg1 ;
-(void)setDelegate:(id<ClientConnectionDelegate>)arg1 ;
-(void)dealloc;
-(ClientIdentity *)identity;
-(void)addOperation:(id)arg1 ;
-(id)operations;
-(id)restrictedCalendarRowIDs;
-(BOOL)eventAccessGranted;
-(BOOL)reminderAccessGranted;
-(BOOL)hasTCCAccessToEntityWithObjectID:(id)arg1 ;
-(void)insertObject:(void*)arg1 key:(id)arg2 ;
-(void)setDatabaseInitializationOptions:(CADDatabaseInitializationOptions *)arg1 ;
-(CADDatabaseInitializationOptions *)databaseInitializationOptions;
-(BOOL)isCalendarRestricted:(void*)arg1 ;
-(void)clearInsertedObjects;
-(void)clearCachedAuthorizationStatus;
-(BOOL)isCalendarItemRestricted:(void*)arg1 ;
-(BOOL)isObjectWithObjectIDAJunkEvent:(id)arg1 ;
-(BOOL)initializationOptionsSet;
-(void)_loadAccessPermissionsIfNeeded;
-(BOOL)_hasTCCAccessToEntityWithObjectIDUsingDeepInspection:(id)arg1 ;
-(id)_restrictedStoreRowIDs;
-(BOOL)_shouldUseMCToBlacklist;
-(id)restrictedCalendarRowIDsWithValidator:(id)arg1 ;
-(id)restrictedStoreRowIDs;
-(id)managedStoreRowIDs;
-(BOOL)isStoreManaged:(void*)arg1 ;
-(BOOL)isCalendarManaged:(void*)arg1 ;
-(BOOL)isStoreRestricted:(void*)arg1 ;
-(BOOL)isCalendarItemManaged:(void*)arg1 ;
-(CADOperationProxy *)cadOperationProxy;
-(void)_databaseChanged;
-(id)insertedObjects;
-(NSString *)changeTrackingID;
-(CalDatabase*)database;
-(void)setDatabase:(CalDatabase*)arg1 ;
-(void)dumpState;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end

