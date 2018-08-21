/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _NMRCommandOptionsProtobuf;

@interface _NMRSendCommandMessageProtobuf : PBCodable <NSCopying> {

	double _timestamp;
	int _command;
	_NMRCommandOptionsProtobuf* _options;
	int _originIdentifier;
	SCD_Struct_NM3 _has;

}

@property (assign,nonatomic) BOOL hasCommand; 
@property (assign,nonatomic) int command;                                       //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) BOOL hasOptions; 
@property (nonatomic,retain) _NMRCommandOptionsProtobuf * options;              //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasOriginIdentifier; 
@property (assign,nonatomic) int originIdentifier;                              //@synthesize originIdentifier=_originIdentifier - In the implementation block
-(void)setCommand:(int)arg1 ;
-(void)setHasCommand:(BOOL)arg1 ;
-(BOOL)hasCommand;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasOptions;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOptions:(_NMRCommandOptionsProtobuf *)arg1 ;
-(_NMRCommandOptionsProtobuf *)options;
-(id)dictionaryRepresentation;
-(id)commandAsString:(int)arg1 ;
-(int)StringAsCommand:(id)arg1 ;
-(int)command;
-(int)originIdentifier;
-(void)setOriginIdentifier:(int)arg1 ;
-(void)setHasOriginIdentifier:(BOOL)arg1 ;
-(BOOL)hasOriginIdentifier;
@end

