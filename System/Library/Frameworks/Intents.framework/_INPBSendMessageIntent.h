/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBString, NSString, _INPBIntentMetadata, NSMutableArray, _INPBContact, _INPBDataString;

@interface _INPBSendMessageIntent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBString* _content;
	NSString* _conversationIdentifier;
	_INPBIntentMetadata* _intentMetadata;
	NSMutableArray* _recipients;
	_INPBContact* _sender;
	NSString* _serviceName;
	_INPBDataString* _speakableGroupName;

}

@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;              //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,retain) NSMutableArray * recipients;                       //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,readonly) BOOL hasContent; 
@property (nonatomic,retain) _INPBString * content;                             //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) BOOL hasSpeakableGroupName; 
@property (nonatomic,retain) _INPBDataString * speakableGroupName;              //@synthesize speakableGroupName=_speakableGroupName - In the implementation block
@property (nonatomic,readonly) BOOL hasConversationIdentifier; 
@property (nonatomic,retain) NSString * conversationIdentifier;                 //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceName; 
@property (nonatomic,retain) NSString * serviceName;                            //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) BOOL hasSender; 
@property (nonatomic,retain) _INPBContact * sender;                             //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
+(Class)recipientType;
-(BOOL)hasServiceName;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setContent:(_INPBString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(_INPBString *)content;
-(_INPBContact *)sender;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasContent;
-(id)dictionaryRepresentation;
-(void)setSender:(_INPBContact *)arg1 ;
-(NSString *)serviceName;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(_INPBIntentMetadata *)intentMetadata;
-(void)clearRecipients;
-(unsigned long long)recipientsCount;
-(_INPBDataString *)speakableGroupName;
-(void)setSpeakableGroupName:(_INPBDataString *)arg1 ;
-(void)setConversationIdentifier:(NSString *)arg1 ;
-(id)recipientAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSender;
-(BOOL)hasConversationIdentifier;
-(BOOL)hasSpeakableGroupName;
-(NSString *)conversationIdentifier;
-(NSMutableArray *)recipients;
-(void)setRecipients:(NSMutableArray *)arg1 ;
-(void)addRecipient:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
@end
