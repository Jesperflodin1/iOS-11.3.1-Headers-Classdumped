/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBCurrencyAmountValue, _INPBBillPayeeValue, _INPBDateTime, _INPBValueMetadata;

@interface _INPBBillDetailsValue : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBCurrencyAmountValue* _amountDue;
	_INPBBillPayeeValue* _billPayee;
	int _billType;
	_INPBDateTime* _dueDate;
	_INPBCurrencyAmountValue* _lateFee;
	_INPBCurrencyAmountValue* _minimumDue;
	_INPBDateTime* _paymentDate;
	int _status;
	_INPBValueMetadata* _valueMetadata;
	SCD_Struct_IN4 _has;

}

@property (nonatomic,readonly) BOOL hasValueMetadata; 
@property (nonatomic,retain) _INPBValueMetadata * valueMetadata;                 //@synthesize valueMetadata=_valueMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasBillPayee; 
@property (nonatomic,retain) _INPBBillPayeeValue * billPayee;                    //@synthesize billPayee=_billPayee - In the implementation block
@property (nonatomic,readonly) BOOL hasAmountDue; 
@property (nonatomic,retain) _INPBCurrencyAmountValue * amountDue;               //@synthesize amountDue=_amountDue - In the implementation block
@property (nonatomic,readonly) BOOL hasMinimumDue; 
@property (nonatomic,retain) _INPBCurrencyAmountValue * minimumDue;              //@synthesize minimumDue=_minimumDue - In the implementation block
@property (nonatomic,readonly) BOOL hasLateFee; 
@property (nonatomic,retain) _INPBCurrencyAmountValue * lateFee;                 //@synthesize lateFee=_lateFee - In the implementation block
@property (nonatomic,readonly) BOOL hasDueDate; 
@property (nonatomic,retain) _INPBDateTime * dueDate;                            //@synthesize dueDate=_dueDate - In the implementation block
@property (nonatomic,readonly) BOOL hasPaymentDate; 
@property (nonatomic,retain) _INPBDateTime * paymentDate;                        //@synthesize paymentDate=_paymentDate - In the implementation block
@property (assign,nonatomic) BOOL hasBillType; 
@property (assign,nonatomic) int billType;                                       //@synthesize billType=_billType - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                         //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStatus:(int)arg1 ;
-(int)status;
-(id)dictionaryRepresentation;
-(void)setValueMetadata:(_INPBValueMetadata *)arg1 ;
-(BOOL)hasValueMetadata;
-(_INPBValueMetadata *)valueMetadata;
-(void)setBillPayee:(_INPBBillPayeeValue *)arg1 ;
-(void)setBillType:(int)arg1 ;
-(_INPBBillPayeeValue *)billPayee;
-(BOOL)hasBillType;
-(int)billType;
-(void)setHasBillType:(BOOL)arg1 ;
-(void)setAmountDue:(_INPBCurrencyAmountValue *)arg1 ;
-(void)setMinimumDue:(_INPBCurrencyAmountValue *)arg1 ;
-(void)setLateFee:(_INPBCurrencyAmountValue *)arg1 ;
-(void)setPaymentDate:(_INPBDateTime *)arg1 ;
-(BOOL)hasBillPayee;
-(BOOL)hasAmountDue;
-(BOOL)hasMinimumDue;
-(BOOL)hasLateFee;
-(BOOL)hasDueDate;
-(BOOL)hasPaymentDate;
-(id)billTypeAsString:(int)arg1 ;
-(int)StringAsBillType:(id)arg1 ;
-(_INPBCurrencyAmountValue *)amountDue;
-(_INPBCurrencyAmountValue *)minimumDue;
-(_INPBCurrencyAmountValue *)lateFee;
-(_INPBDateTime *)paymentDate;
-(void)setDueDate:(_INPBDateTime *)arg1 ;
-(_INPBDateTime *)dueDate;
@end

