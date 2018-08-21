/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCPersistedState.h>

@class CKServerChangeToken, NSDate, CKOperationGroup;

@interface BRCContainerMetadataSyncPersistedState : BRCPersistedState {

	BOOL _needsContainerMetadataSyncDown;
	BOOL _needsSharedDBSyncDown;
	CKServerChangeToken* _serverChangeToken;
	NSDate* _lastSyncDate;
	CKOperationGroup* _ckGroup;

}

@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;              //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (retain) NSDate * lastSyncDate;                                          //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (assign,nonatomic) BOOL needsContainerMetadataSyncDown;                  //@synthesize needsContainerMetadataSyncDown=_needsContainerMetadataSyncDown - In the implementation block
@property (assign,nonatomic) BOOL needsSharedDBSyncDown;                           //@synthesize needsSharedDBSyncDown=_needsSharedDBSyncDown - In the implementation block
@property (nonatomic,retain) CKOperationGroup * ckGroup;                           //@synthesize ckGroup=_ckGroup - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg1 options:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)lastSyncDate;
-(CKServerChangeToken *)serverChangeToken;
-(BOOL)needsContainerMetadataSyncDown;
-(BOOL)needsSharedDBSyncDown;
-(void)setNeedsContainerMetadataSyncDown:(BOOL)arg1 ;
-(void)setCkGroup:(CKOperationGroup *)arg1 ;
-(void)setNeedsSharedDBSyncDown:(BOOL)arg1 ;
-(CKOperationGroup *)ckGroup;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
@end

