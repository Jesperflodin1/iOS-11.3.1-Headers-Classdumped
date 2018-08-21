/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPReplicaEdit.h>

@protocol MSPReplicaRecord;
@interface MSPReplicaEditInsertRecord : MSPReplicaEdit {

	id<MSPReplicaRecord> _recordWithInformationToInsert;

}

@property (nonatomic,readonly) id<MSPReplicaRecord> recordWithInformationToInsert;              //@synthesize recordWithInformationToInsert=_recordWithInformationToInsert - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_initWithIdentifierOfAffectedRecord:(id)arg1 ;
-(id)_initWithRecordToInsert:(id)arg1 identifier:(id)arg2 ;
-(id<MSPReplicaRecord>)recordWithInformationToInsert;
@end
