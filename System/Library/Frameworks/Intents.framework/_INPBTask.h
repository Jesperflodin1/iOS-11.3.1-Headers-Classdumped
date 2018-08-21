/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBDateTime, NSString, _INPBSpatialEventTrigger, _INPBTemporalEventTrigger, _INPBDataString;

@interface _INPBTask : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBDateTime* _createdDateTime;
	NSString* _identifier;
	_INPBDateTime* _modifiedDateTime;
	_INPBSpatialEventTrigger* _spatialEventTrigger;
	int _status;
	int _taskType;
	_INPBTemporalEventTrigger* _temporalEventTrigger;
	_INPBDataString* _title;
	SCD_Struct_IN4 _has;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) _INPBDataString * title;                                       //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                                    //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasSpatialEventTrigger; 
@property (nonatomic,retain) _INPBSpatialEventTrigger * spatialEventTrigger;                //@synthesize spatialEventTrigger=_spatialEventTrigger - In the implementation block
@property (nonatomic,readonly) BOOL hasTemporalEventTrigger; 
@property (nonatomic,retain) _INPBTemporalEventTrigger * temporalEventTrigger;              //@synthesize temporalEventTrigger=_temporalEventTrigger - In the implementation block
@property (nonatomic,readonly) BOOL hasCreatedDateTime; 
@property (nonatomic,retain) _INPBDateTime * createdDateTime;                               //@synthesize createdDateTime=_createdDateTime - In the implementation block
@property (nonatomic,readonly) BOOL hasModifiedDateTime; 
@property (nonatomic,retain) _INPBDateTime * modifiedDateTime;                              //@synthesize modifiedDateTime=_modifiedDateTime - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasTaskType; 
@property (assign,nonatomic) int taskType;                                                  //@synthesize taskType=_taskType - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setTitle:(_INPBDataString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(_INPBDataString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStatus:(int)arg1 ;
-(int)status;
-(id)dictionaryRepresentation;
-(BOOL)hasTitle;
-(void)setSpatialEventTrigger:(_INPBSpatialEventTrigger *)arg1 ;
-(void)setTemporalEventTrigger:(_INPBTemporalEventTrigger *)arg1 ;
-(BOOL)hasSpatialEventTrigger;
-(BOOL)hasTemporalEventTrigger;
-(_INPBSpatialEventTrigger *)spatialEventTrigger;
-(_INPBTemporalEventTrigger *)temporalEventTrigger;
-(void)setCreatedDateTime:(_INPBDateTime *)arg1 ;
-(void)setModifiedDateTime:(_INPBDateTime *)arg1 ;
-(BOOL)hasCreatedDateTime;
-(BOOL)hasModifiedDateTime;
-(_INPBDateTime *)createdDateTime;
-(_INPBDateTime *)modifiedDateTime;
-(void)setHasTaskType:(BOOL)arg1 ;
-(BOOL)hasTaskType;
-(id)taskTypeAsString:(int)arg1 ;
-(int)StringAsTaskType:(id)arg1 ;
-(int)taskType;
-(void)setTaskType:(int)arg1 ;
@end

