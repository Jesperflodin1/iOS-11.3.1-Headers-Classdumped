/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSArray, NSIndexSet;

@interface OITSUCustomFormatData : NSObject <NSCopying, NSMutableCopying> {

	unsigned char mMinimumIntegerWidth;
	unsigned char mDecimalWidth;
	unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
	unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
	unsigned char mIndexFromRightOfLastDigitPlaceholder;
	unsigned char mNumberOfHashDecimalPlaceholders;
	unsigned char mTotalNumberOfDecimalPlaceholdersInFormat;
	BOOL mShowThousandsSeparator;
	BOOL mUseAccountingStyle;
	BOOL mRequiresFractionReplacement;
	BOOL mIsConditional;
	BOOL mFormatContainsIntegerToken;
	BOOL mIsComplexFormat;
	unsigned short mCurrencyCodeIndex;
	int mFractionAccuracy;
	NSString* mFormatString;
	NSArray* mInterstitialStrings;
	NSIndexSet* mInterstitialStringInsertionIndexes;
	double mScaleFactor;

}

@property (nonatomic,copy) NSString * formatString; 
@property (nonatomic,copy) NSArray * interstitialStrings; 
@property (nonatomic,copy) NSIndexSet * interstitialStringInsertionIndexes; 
@property (assign,nonatomic) double scaleFactor; 
@property (assign,nonatomic) int fractionAccuracy; 
@property (assign,nonatomic) unsigned char minimumIntegerWidth; 
@property (assign,nonatomic) unsigned char decimalWidth; 
@property (assign,nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits; 
@property (assign,nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits; 
@property (assign,nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder; 
@property (assign,nonatomic) unsigned char numberOfHashDecimalPlaceholders; 
@property (assign,nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat; 
@property (assign,nonatomic) unsigned short currencyCodeIndex; 
@property (assign,nonatomic) BOOL showThousandsSeparator; 
@property (assign,nonatomic) BOOL useAccountingStyle; 
@property (assign,nonatomic) BOOL requiresFractionReplacement; 
@property (assign,nonatomic) BOOL isConditional; 
@property (assign,nonatomic) BOOL formatContainsIntegerToken; 
@property (assign,nonatomic) BOOL isComplexFormat; 
+(id)customFormatData;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scaleFactor;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setScaleFactor:(double)arg1 ;
-(NSString *)formatString;
-(BOOL)showThousandsSeparator;
-(int)fractionAccuracy;
-(void)setShowThousandsSeparator:(BOOL)arg1 ;
-(void)setFractionAccuracy:(int)arg1 ;
-(void)setUseAccountingStyle:(BOOL)arg1 ;
-(BOOL)isComplexFormat;
-(BOOL)isConditional;
-(unsigned short)currencyCodeIndex;
-(NSArray *)interstitialStrings;
-(NSIndexSet *)interstitialStringInsertionIndexes;
-(unsigned char)minimumIntegerWidth;
-(unsigned char)decimalWidth;
-(unsigned char)numberOfNonSpaceIntegerPlaceholderDigits;
-(unsigned char)numberOfNonSpaceDecimalPlaceholderDigits;
-(unsigned char)numberOfHashDecimalPlaceholders;
-(unsigned char)totalNumberOfDecimalPlaceholdersInFormat;
-(unsigned char)indexFromRightOfLastDigitPlaceholder;
-(BOOL)formatContainsIntegerToken;
-(BOOL)requiresFractionReplacement;
-(BOOL)useAccountingStyle;
-(void)p_copySelfTo:(id)arg1 ;
-(void)setFormatString:(NSString *)arg1 ;
-(void)setInterstitialStrings:(NSArray *)arg1 ;
-(void)setInterstitialStringInsertionIndexes:(NSIndexSet *)arg1 ;
-(void)setMinimumIntegerWidth:(unsigned char)arg1 ;
-(void)setDecimalWidth:(unsigned char)arg1 ;
-(void)setNumberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg1 ;
-(void)setNumberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg1 ;
-(void)setIndexFromRightOfLastDigitPlaceholder:(unsigned char)arg1 ;
-(void)setNumberOfHashDecimalPlaceholders:(unsigned char)arg1 ;
-(void)setTotalNumberOfDecimalPlaceholdersInFormat:(unsigned char)arg1 ;
-(void)setCurrencyCodeIndex:(unsigned short)arg1 ;
-(void)setRequiresFractionReplacement:(BOOL)arg1 ;
-(void)setIsConditional:(BOOL)arg1 ;
-(void)setFormatContainsIntegerToken:(BOOL)arg1 ;
-(void)setIsComplexFormat:(BOOL)arg1 ;
-(id)initWithCustomFormatData:(id)arg1 ;
@end

