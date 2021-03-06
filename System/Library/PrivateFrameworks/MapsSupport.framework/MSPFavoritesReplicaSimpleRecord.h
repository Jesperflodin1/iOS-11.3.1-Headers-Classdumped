/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPFavoritesReplicaRecord.h>

@class NSData, MSPVectorTimestamp, MSPPosition, NSString;

@interface MSPFavoritesReplicaSimpleRecord : NSObject <MSPFavoritesReplicaRecord> {

	NSData* _contents;
	MSPVectorTimestamp* _contentsTimestamp;
	MSPPosition* _position;
	MSPVectorTimestamp* _positionTimestamp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSData * contents;                                   //@synthesize contents=_contents - In the implementation block
@property (nonatomic,copy,readonly) MSPVectorTimestamp * contentsTimestamp;              //@synthesize contentsTimestamp=_contentsTimestamp - In the implementation block
@property (nonatomic,readonly) MSPPosition * position;                                   //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) MSPVectorTimestamp * positionTimestamp;                   //@synthesize positionTimestamp=_positionTimestamp - In the implementation block
+(id)recordWithContentsOfRecord:(id)arg1 ;
+(id)recordsByApplyingEdits:(id)arg1 toArbitraryRecords:(id)arg2 ;
-(id)init;
-(NSString *)description;
-(NSData *)contents;
-(MSPPosition *)position;
-(MSPVectorTimestamp *)positionTimestamp;
-(MSPVectorTimestamp *)contentsTimestamp;
-(id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 position:(id)arg3 positionTimestamp:(id)arg4 ;
-(id)derivedRecordWithContents:(id)arg1 contentsTimestamp:(id)arg2 ;
-(id)derivedRecordWithPosition:(id)arg1 positionTimestamp:(id)arg2 ;
@end

