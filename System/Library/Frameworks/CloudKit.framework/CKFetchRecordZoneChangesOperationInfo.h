/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface CKFetchRecordZoneChangesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _shouldFetchAssetContents;
	BOOL _fetchAllChanges;
	BOOL _forcePCSDecryptionAttempt;
	NSArray* _recordZoneIDs;
	NSDictionary* _optionsByRecordZoneID;
	long long _changeTypes;
	NSDictionary* _assetTransferOptionsByRecordTypeAndKey;

}

@property (nonatomic,retain) NSArray * recordZoneIDs;                                            //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * optionsByRecordZoneID;                               //@synthesize optionsByRecordZoneID=_optionsByRecordZoneID - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContents;                                      //@synthesize shouldFetchAssetContents=_shouldFetchAssetContents - In the implementation block
@property (assign,nonatomic) long long changeTypes;                                              //@synthesize changeTypes=_changeTypes - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                               //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByRecordTypeAndKey;              //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
@property (assign,nonatomic) BOOL forcePCSDecryptionAttempt;                                     //@synthesize forcePCSDecryptionAttempt=_forcePCSDecryptionAttempt - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)optionsByRecordZoneID;
-(BOOL)fetchAllChanges;
-(void)setOptionsByRecordZoneID:(NSDictionary *)arg1 ;
-(NSArray *)recordZoneIDs;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(void)setForcePCSDecryptionAttempt:(BOOL)arg1 ;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(BOOL)shouldFetchAssetContents;
-(BOOL)forcePCSDecryptionAttempt;
-(void)setShouldFetchAssetContents:(BOOL)arg1 ;
-(long long)changeTypes;
-(void)setChangeTypes:(long long)arg1 ;
@end

