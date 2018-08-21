/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBIntentMetadata, _INPBSpatialEventTrigger, _INPBTaskList, NSMutableArray, _INPBTemporalEventTrigger;

@interface _INPBAddTasksIntent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBIntentMetadata* _intentMetadata;
	_INPBSpatialEventTrigger* _spatialEventTrigger;
	_INPBTaskList* _targetTaskList;
	NSMutableArray* _taskTitles;
	_INPBTemporalEventTrigger* _temporalEventTrigger;

}

@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                          //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasTargetTaskList; 
@property (nonatomic,retain) _INPBTaskList * targetTaskList;                                //@synthesize targetTaskList=_targetTaskList - In the implementation block
@property (nonatomic,retain) NSMutableArray * taskTitles;                                   //@synthesize taskTitles=_taskTitles - In the implementation block
@property (nonatomic,readonly) BOOL hasSpatialEventTrigger; 
@property (nonatomic,retain) _INPBSpatialEventTrigger * spatialEventTrigger;                //@synthesize spatialEventTrigger=_spatialEventTrigger - In the implementation block
@property (nonatomic,readonly) BOOL hasTemporalEventTrigger; 
@property (nonatomic,retain) _INPBTemporalEventTrigger * temporalEventTrigger;              //@synthesize temporalEventTrigger=_temporalEventTrigger - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
+(Class)taskTitlesType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(void)setSpatialEventTrigger:(_INPBSpatialEventTrigger *)arg1 ;
-(void)setTemporalEventTrigger:(_INPBTemporalEventTrigger *)arg1 ;
-(BOOL)hasIntentMetadata;
-(BOOL)hasSpatialEventTrigger;
-(BOOL)hasTemporalEventTrigger;
-(_INPBIntentMetadata *)intentMetadata;
-(_INPBSpatialEventTrigger *)spatialEventTrigger;
-(_INPBTemporalEventTrigger *)temporalEventTrigger;
-(void)setTaskTitles:(NSMutableArray *)arg1 ;
-(NSMutableArray *)taskTitles;
-(void)addTaskTitles:(id)arg1 ;
-(void)setTargetTaskList:(_INPBTaskList *)arg1 ;
-(BOOL)hasTargetTaskList;
-(void)clearTaskTitles;
-(unsigned long long)taskTitlesCount;
-(id)taskTitlesAtIndex:(unsigned long long)arg1 ;
-(_INPBTaskList *)targetTaskList;
@end

