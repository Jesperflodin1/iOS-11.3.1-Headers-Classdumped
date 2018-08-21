/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <libobjc.A.dylib/SYSessionDelegate.h>

@class NSDictionary, SYStore, SYSession, NSString;

@interface SYStoreSessionOwner : NSObject <SYSessionDelegate> {

	NSDictionary* _context;
	NSDictionary* _idsOptions;
	SYStore* _store;
	/*^block*/id _errorCallback;
	/*^block*/id _onComplete;
	SYSession* _session;

}

@property (nonatomic,readonly) BOOL isResetSync; 
@property (nonatomic,copy) NSDictionary * context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSDictionary * idsOptions;               //@synthesize idsOptions=_idsOptions - In the implementation block
@property (assign,nonatomic,__weak) SYStore * store;                //@synthesize store=_store - In the implementation block
@property (nonatomic,copy) id errorCallback;                        //@synthesize errorCallback=_errorCallback - In the implementation block
@property (nonatomic,copy) id onComplete;                           //@synthesize onComplete=_onComplete - In the implementation block
@property (nonatomic,retain) SYSession * session;                   //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(SYSession *)session;
-(void)setSession:(SYSession *)arg1 ;
-(SYStore *)store;
-(void)setIdsOptions:(NSDictionary *)arg1 ;
-(void)setErrorCallback:(id)arg1 ;
-(void)setOnComplete:(id)arg1 ;
-(id)errorCallback;
-(id)onComplete;
-(NSDictionary *)idsOptions;
-(BOOL)syncSession:(id)arg1 rollbackChangesWithError:(id*)arg2 ;
-(long long)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)syncSession:(id)arg1 applyChanges:(NSArray*)arg2 completion:(/*^block*/id)arg3 ;
-(void)syncSession:(id)arg1 didEndWithError:(id)arg2 ;
-(BOOL)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2 ;
-(void)setStore:(SYStore *)arg1 ;
-(BOOL)isResetSync;
@end

