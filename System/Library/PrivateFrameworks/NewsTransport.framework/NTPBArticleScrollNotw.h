/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBArticleScrollNotw : PBCodable <NSCopying> {

	NSString* _articleId;
	float _maxScrollDepth;
	NSString* _sourceChannelId;
	NSString* _windowId;
	SCD_Struct_NT6 _has;

}

@property (assign,nonatomic) BOOL hasMaxScrollDepth; 
@property (assign,nonatomic) float maxScrollDepth;                    //@synthesize maxScrollDepth=_maxScrollDepth - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                    //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;              //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasWindowId; 
@property (nonatomic,retain) NSString * windowId;                     //@synthesize windowId=_windowId - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setArticleId:(NSString *)arg1 ;
-(BOOL)hasArticleId;
-(NSString *)articleId;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasSourceChannelId;
-(NSString *)sourceChannelId;
-(void)setWindowId:(NSString *)arg1 ;
-(void)setMaxScrollDepth:(float)arg1 ;
-(void)setHasMaxScrollDepth:(BOOL)arg1 ;
-(BOOL)hasMaxScrollDepth;
-(BOOL)hasWindowId;
-(float)maxScrollDepth;
-(NSString *)windowId;
@end
