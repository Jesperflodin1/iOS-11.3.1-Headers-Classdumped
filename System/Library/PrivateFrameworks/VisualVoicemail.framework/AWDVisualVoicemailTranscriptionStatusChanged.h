/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VisualVoicemail/VisualVoicemail-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDVisualVoicemailTranscriptionStatusChanged : PBCodable <NSCopying> {

	unsigned long long _failureReason;
	unsigned long long _status;
	unsigned long long _timestamp;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) unsigned long long status;                     //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasFailureReason; 
@property (assign,nonatomic) unsigned long long failureReason;              //@synthesize failureReason=_failureReason - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(unsigned long long)status;
-(id)dictionaryRepresentation;
-(unsigned long long)failureReason;
-(void)setFailureReason:(unsigned long long)arg1 ;
-(void)setHasFailureReason:(BOOL)arg1 ;
-(BOOL)hasFailureReason;
@end

