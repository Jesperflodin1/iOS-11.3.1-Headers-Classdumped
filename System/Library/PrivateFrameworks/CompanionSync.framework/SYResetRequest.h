/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SYMessageHeader;

@interface SYResetRequest : PBRequest <NSCopying> {

	NSString* _cancelSessionID;
	SYMessageHeader* _header;

}

@property (nonatomic,retain) SYMessageHeader * header;                //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) BOOL hasCancelSessionID; 
@property (nonatomic,retain) NSString * cancelSessionID;              //@synthesize cancelSessionID=_cancelSessionID - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
-(NSString *)cancelSessionID;
-(void)setCancelSessionID:(NSString *)arg1 ;
-(BOOL)hasCancelSessionID;
@end
