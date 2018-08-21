/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ADAnalyticsEvent : PBCodable <NSCopying> {

	double _timestamp;
	int _event;

}

@property (assign,nonatomic) int event;                     //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(id)options;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)event;
-(void)setEvent:(int)arg1 ;
-(id)dictionaryRepresentation;
-(id)eventAsString:(int)arg1 ;
-(int)StringAsEvent:(id)arg1 ;
@end
