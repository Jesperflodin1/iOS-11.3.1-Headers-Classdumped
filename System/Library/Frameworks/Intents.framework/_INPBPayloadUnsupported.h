/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface _INPBPayloadUnsupported : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _conflictingParameters;
	int _reason;
	int _requestPaymentIntentCurrencyAmountUnsupportedReason;
	int _requestPaymentIntentPayerUnsupportedReason;
	int _sendMessageIntentRecipientUnsupportedReason;
	int _sendPaymentIntentCurrencyAmountUnsupportedReason;
	int _sendPaymentIntentPayeeUnsupportedReason;
	SCD_Struct_IN10 _has;

}

@property (assign,nonatomic) BOOL hasSendMessageIntentRecipientUnsupportedReason; 
@property (assign,nonatomic) int sendMessageIntentRecipientUnsupportedReason; 
@property (assign,nonatomic) BOOL hasSendPaymentIntentPayeeUnsupportedReason; 
@property (assign,nonatomic) int sendPaymentIntentPayeeUnsupportedReason; 
@property (assign,nonatomic) BOOL hasSendPaymentIntentCurrencyAmountUnsupportedReason; 
@property (assign,nonatomic) int sendPaymentIntentCurrencyAmountUnsupportedReason; 
@property (assign,nonatomic) BOOL hasRequestPaymentIntentPayerUnsupportedReason; 
@property (assign,nonatomic) int requestPaymentIntentPayerUnsupportedReason; 
@property (assign,nonatomic) BOOL hasRequestPaymentIntentCurrencyAmountUnsupportedReason; 
@property (assign,nonatomic) int requestPaymentIntentCurrencyAmountUnsupportedReason; 
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                                                               //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSMutableArray * conflictingParameters;                                   //@synthesize conflictingParameters=_conflictingParameters - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
+(Class)conflictingParametersType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)reason;
-(void)setSendMessageIntentRecipientUnsupportedReason:(int)arg1 ;
-(void)setRequestPaymentIntentCurrencyAmountUnsupportedReason:(int)arg1 ;
-(void)setSendPaymentIntentCurrencyAmountUnsupportedReason:(int)arg1 ;
-(void)setSendPaymentIntentPayeeUnsupportedReason:(int)arg1 ;
-(void)addConflictingParameters:(id)arg1 ;
-(void)clearConflictingParameters;
-(unsigned long long)conflictingParametersCount;
-(id)conflictingParametersAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)conflictingParameters;
-(void)setConflictingParameters:(NSMutableArray *)arg1 ;
-(int)sendMessageIntentRecipientUnsupportedReason;
-(void)setHasSendMessageIntentRecipientUnsupportedReason:(BOOL)arg1 ;
-(BOOL)hasSendMessageIntentRecipientUnsupportedReason;
-(id)sendMessageIntentRecipientUnsupportedReasonAsString:(int)arg1 ;
-(int)StringAsSendMessageIntentRecipientUnsupportedReason:(id)arg1 ;
-(int)sendPaymentIntentPayeeUnsupportedReason;
-(void)setHasSendPaymentIntentPayeeUnsupportedReason:(BOOL)arg1 ;
-(BOOL)hasSendPaymentIntentPayeeUnsupportedReason;
-(id)sendPaymentIntentPayeeUnsupportedReasonAsString:(int)arg1 ;
-(int)StringAsSendPaymentIntentPayeeUnsupportedReason:(id)arg1 ;
-(int)sendPaymentIntentCurrencyAmountUnsupportedReason;
-(void)setHasSendPaymentIntentCurrencyAmountUnsupportedReason:(BOOL)arg1 ;
-(BOOL)hasSendPaymentIntentCurrencyAmountUnsupportedReason;
-(id)sendPaymentIntentCurrencyAmountUnsupportedReasonAsString:(int)arg1 ;
-(int)StringAsSendPaymentIntentCurrencyAmountUnsupportedReason:(id)arg1 ;
-(int)requestPaymentIntentPayerUnsupportedReason;
-(void)setRequestPaymentIntentPayerUnsupportedReason:(int)arg1 ;
-(void)setHasRequestPaymentIntentPayerUnsupportedReason:(BOOL)arg1 ;
-(BOOL)hasRequestPaymentIntentPayerUnsupportedReason;
-(id)requestPaymentIntentPayerUnsupportedReasonAsString:(int)arg1 ;
-(int)StringAsRequestPaymentIntentPayerUnsupportedReason:(id)arg1 ;
-(int)requestPaymentIntentCurrencyAmountUnsupportedReason;
-(void)setHasRequestPaymentIntentCurrencyAmountUnsupportedReason:(BOOL)arg1 ;
-(BOOL)hasRequestPaymentIntentCurrencyAmountUnsupportedReason;
-(id)requestPaymentIntentCurrencyAmountUnsupportedReasonAsString:(int)arg1 ;
-(int)StringAsRequestPaymentIntentCurrencyAmountUnsupportedReason:(id)arg1 ;
-(void)setReason:(int)arg1 ;
-(void)setHasReason:(BOOL)arg1 ;
-(BOOL)hasReason;
-(id)reasonAsString:(int)arg1 ;
-(int)StringAsReason:(id)arg1 ;
@end

