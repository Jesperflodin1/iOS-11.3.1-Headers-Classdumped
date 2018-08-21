/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOLogMsgEventUserAction : PBCodable <NSCopying> {

	NSString* _userActionEventKey;
	int _userActionEventTarget;
	NSString* _userActionEventValue;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,readonly) BOOL hasUserActionEventKey; 
@property (nonatomic,retain) NSString * userActionEventKey;                //@synthesize userActionEventKey=_userActionEventKey - In the implementation block
@property (nonatomic,readonly) BOOL hasUserActionEventValue; 
@property (nonatomic,retain) NSString * userActionEventValue;              //@synthesize userActionEventValue=_userActionEventValue - In the implementation block
@property (assign,nonatomic) BOOL hasUserActionEventTarget; 
@property (assign,nonatomic) int userActionEventTarget;                    //@synthesize userActionEventTarget=_userActionEventTarget - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setUserActionEventTarget:(int)arg1 ;
-(void)setUserActionEventValue:(NSString *)arg1 ;
-(void)setUserActionEventKey:(NSString *)arg1 ;
-(BOOL)hasUserActionEventKey;
-(BOOL)hasUserActionEventValue;
-(int)userActionEventTarget;
-(void)setHasUserActionEventTarget:(BOOL)arg1 ;
-(BOOL)hasUserActionEventTarget;
-(id)userActionEventTargetAsString:(int)arg1 ;
-(int)StringAsUserActionEventTarget:(id)arg1 ;
-(NSString *)userActionEventKey;
-(NSString *)userActionEventValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

