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

@class PBUnknownFields, _INPBTaskList;

@interface _INPBCreateTaskListIntentResponse : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBTaskList* _createdTaskList;

}

@property (nonatomic,readonly) BOOL hasCreatedTaskList; 
@property (nonatomic,retain) _INPBTaskList * createdTaskList;                //@synthesize createdTaskList=_createdTaskList - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCreatedTaskList:(_INPBTaskList *)arg1 ;
-(BOOL)hasCreatedTaskList;
-(_INPBTaskList *)createdTaskList;
@end

