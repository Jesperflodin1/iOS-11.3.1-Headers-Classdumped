/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHNumberFormat.h>
#import <iWorkImport/TSCHCustomFormatUpdateSupport.h>

@class NSString;

@interface TSCHMutableNumberFormat : TSCHNumberFormat <TSCHCustomFormatUpdateSupport>

@property (assign,nonatomic) int formatType; 
@property (assign,nonatomic) unsigned decimalPlaces; 
@property (nonatomic,copy) NSString * currencyCode; 
@property (assign,nonatomic) BOOL useAccountingStyle; 
@property (assign,nonatomic) int negativeStyle; 
@property (assign,nonatomic) BOOL showThousandsSeparator; 
@property (assign,nonatomic) int fractionAccuracy; 
@property (nonatomic,copy) NSString * prefixString; 
@property (nonatomic,copy) NSString * suffixString; 
@property (assign,nonatomic) unsigned base; 
@property (assign,nonatomic) unsigned basePlaces; 
@property (assign,nonatomic) BOOL baseUseMinusSign; 
-(void)remapCustomFormatKeysWithOldToNewKeyMap:(id)arg1 ;
-(void)updateAfterPasteForDocumentRoot:(id)arg1 pasteboardCustomFormatList:(id)arg2 ;
-(void)upgradePreU2_0CustomFormatsForDocumentRoot:(id)arg1 ;
-(id)p_formatTypeAffectedPropertyKeys;
-(void)p_setFractionAccuracy:(int)arg1 ;
-(void)setBaseUseMinusSign:(BOOL)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBase:(unsigned)arg1 ;
-(void)setDecimalPlaces:(unsigned)arg1 ;
-(void)setPrefixString:(NSString *)arg1 ;
-(void)setSuffixString:(NSString *)arg1 ;
-(void)setNegativeStyle:(int)arg1 ;
-(void)setShowThousandsSeparator:(BOOL)arg1 ;
-(void)setFractionAccuracy:(int)arg1 ;
-(void)setUseAccountingStyle:(BOOL)arg1 ;
-(void)setBasePlaces:(unsigned)arg1 ;
-(void)setFormatType:(int)arg1 ;
-(void)setValueType:(int)arg1 ;
@end
