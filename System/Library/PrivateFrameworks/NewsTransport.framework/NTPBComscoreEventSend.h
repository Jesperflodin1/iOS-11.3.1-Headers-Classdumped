/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBComscoreEventSend : PBCodable <NSCopying> {

	int _comscoreEventType;
	NSString* _contentViewedId;
	NSString* _eventUdid;
	NSString* _failureReasonCode;
	int _resultType;
	NSString* _sourceChannelId;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasComscoreEventType; 
@property (assign,nonatomic) int comscoreEventType;                     //@synthesize comscoreEventType=_comscoreEventType - In the implementation block
@property (assign,nonatomic) BOOL hasResultType; 
@property (assign,nonatomic) int resultType;                            //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) BOOL hasEventUdid; 
@property (nonatomic,retain) NSString * eventUdid;                      //@synthesize eventUdid=_eventUdid - In the implementation block
@property (nonatomic,readonly) BOOL hasFailureReasonCode; 
@property (nonatomic,retain) NSString * failureReasonCode;              //@synthesize failureReasonCode=_failureReasonCode - In the implementation block
@property (nonatomic,readonly) BOOL hasContentViewedId; 
@property (nonatomic,retain) NSString * contentViewedId;                //@synthesize contentViewedId=_contentViewedId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)resultType;
-(void)setHasResultType:(BOOL)arg1 ;
-(BOOL)hasResultType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setResultType:(int)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasSourceChannelId;
-(NSString *)sourceChannelId;
-(void)setEventUdid:(NSString *)arg1 ;
-(void)setFailureReasonCode:(NSString *)arg1 ;
-(void)setContentViewedId:(NSString *)arg1 ;
-(int)comscoreEventType;
-(void)setComscoreEventType:(int)arg1 ;
-(void)setHasComscoreEventType:(BOOL)arg1 ;
-(BOOL)hasComscoreEventType;
-(BOOL)hasEventUdid;
-(BOOL)hasFailureReasonCode;
-(BOOL)hasContentViewedId;
-(NSString *)eventUdid;
-(NSString *)failureReasonCode;
-(NSString *)contentViewedId;
@end

