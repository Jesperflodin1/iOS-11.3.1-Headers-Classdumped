/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface TSUDelimitedValuesParser : NSObject {

	unsigned short* _buffer;
	unsigned long long _bufferLength;
	unsigned short _separator;
	BOOL _freeWhenDone;
	SCD_Struct_TS19 _columnRowSize;
	BOOL _isSizeSet;

}

@property (nonatomic,readonly) unsigned long long bufferSize;              //@synthesize bufferLength=_bufferLength - In the implementation block
@property (assign,nonatomic) SCD_Struct_TS19 columnRowSize; 
+(BOOL)coerceString:(id)arg1 withLocale:(id)arg2 toNumberFormat:(SCD_Struct_TS28*)arg3 value:(double*)arg4 ;
+(BOOL)coerceString:(id)arg1 withLocale:(id)arg2 toCurrencyFormat:(SCD_Struct_TS28*)arg3 value:(double*)arg4 ;
-(void)dealloc;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)initWithString:(id)arg1 separator:(unsigned short)arg2 ;
-(SCD_Struct_TS19)parseColumnRowSizeWithSeparator:(unsigned short)arg1 ;
-(SCD_Struct_TS19)columnRowSize;
-(void)setColumnRowSize:(SCD_Struct_TS19)arg1 ;
-(id)initWithContentsFromProvider:(id)arg1 ;
-(SCD_Struct_TS19)parseColumnRowSize;
-(void)parseRawStringsWithBlock:(/*^block*/id)arg1 ;
-(id)initWithBuffer:(unsigned short*)arg1 length:(unsigned long long)arg2 separator:(unsigned short)arg3 freeWhenDone:(BOOL)arg4 ;
-(void)parseStringsWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)bufferSize;
@end

