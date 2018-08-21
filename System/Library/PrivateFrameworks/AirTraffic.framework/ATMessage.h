/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSInputStream, ATCodableStream;

@interface ATMessage : NSObject <NSSecureCoding> {

	unsigned _messageID;
	unsigned _sessionID;
	NSDictionary* _parameters;
	double _timestamp;
	NSInputStream* _dataStream;
	ATCodableStream* _stream;

}

@property (nonatomic,retain) ATCodableStream * stream;                //@synthesize stream=_stream - In the implementation block
@property (assign,nonatomic) unsigned messageID;                      //@synthesize messageID=_messageID - In the implementation block
@property (assign,nonatomic) unsigned sessionID;                      //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;               //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) double timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSInputStream * dataStream;              //@synthesize dataStream=_dataStream - In the implementation block
@property (assign,nonatomic) unsigned options; 
+(BOOL)supportsSecureCoding;
-(void)setSessionID:(unsigned)arg1 ;
-(unsigned)sessionID;
-(unsigned)messageID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setOptions:(unsigned)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(unsigned)options;
-(id)parameterForKey:(id)arg1 ;
-(id)additionalDescription;
-(void)setStream:(ATCodableStream *)arg1 ;
-(void)setDataStream:(NSInputStream *)arg1 ;
-(NSInputStream *)dataStream;
-(void)setMessageID:(unsigned)arg1 ;
-(ATCodableStream *)stream;
@end

