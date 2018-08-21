/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOMapsLaunchFeedbackCollection : PBCodable <NSCopying> {

	GEOSessionID _sessionId;
	NSString* _sourceAppBundleId;
	NSString* _uriScheme;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasSessionId; 
@property (assign,nonatomic) GEOSessionID sessionId;                    //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceAppBundleId; 
@property (nonatomic,retain) NSString * sourceAppBundleId;              //@synthesize sourceAppBundleId=_sourceAppBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasUriScheme; 
@property (nonatomic,retain) NSString * uriScheme;                      //@synthesize uriScheme=_uriScheme - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSessionId:(GEOSessionID)arg1 ;
-(void)setHasSessionId:(BOOL)arg1 ;
-(BOOL)hasSessionId;
-(GEOSessionID)sessionId;
-(BOOL)hasSourceAppBundleId;
-(BOOL)hasUriScheme;
-(NSString *)sourceAppBundleId;
-(void)setSourceAppBundleId:(NSString *)arg1 ;
-(NSString *)uriScheme;
-(void)setUriScheme:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
