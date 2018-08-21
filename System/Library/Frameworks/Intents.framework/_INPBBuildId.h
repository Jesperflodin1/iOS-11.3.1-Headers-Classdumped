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

@class PBUnknownFields, NSString;

@interface _INPBBuildId : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _buildNumber;
	NSString* _versionNumber;

}

@property (nonatomic,readonly) BOOL hasVersionNumber; 
@property (nonatomic,retain) NSString * versionNumber;                       //@synthesize versionNumber=_versionNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasBuildNumber; 
@property (nonatomic,retain) NSString * buildNumber;                         //@synthesize buildNumber=_buildNumber - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(NSString *)versionNumber;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersionNumber:(NSString *)arg1 ;
-(BOOL)hasVersionNumber;
-(BOOL)hasBuildNumber;
-(NSString *)buildNumber;
-(void)setBuildNumber:(NSString *)arg1 ;
@end
