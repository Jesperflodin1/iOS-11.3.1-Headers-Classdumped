/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface _DPHCMSSample : NSObject {

	unsigned long long _hashFunctionIndex;
	unsigned long long _bitIndex;
	NSData* _bitString;

}

@property (nonatomic,readonly) unsigned long long hashFunctionIndex;              //@synthesize hashFunctionIndex=_hashFunctionIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long bitIndex;                       //@synthesize bitIndex=_bitIndex - In the implementation block
@property (nonatomic,readonly) NSData * bitString;                                //@synthesize bitString=_bitString - In the implementation block
+(id)dataFor:(id)arg1 hashAtIndex:(unsigned long long)arg2 epsilon:(double)arg3 bitCount:(unsigned long long)arg4 bitIndex:(unsigned long long)arg5 ;
+(id)convertDataToString:(id)arg1 ;
+(id)hcmsSampleWith:(id)arg1 privacyParameter:(double)arg2 hashFunctionCount:(unsigned long long)arg3 bitCount:(unsigned long long)arg4 ;
+(id)jsonStringFrom:(id)arg1 hashIndex:(unsigned long long)arg2 bitIndex:(unsigned long long)arg3 ;
+(id)jsonStringFromSequence:(id)arg1 sequenceHashIndex:(unsigned short)arg2 sequencebitIndex:(unsigned long long)arg3 fragment:(id)arg4 fragmentHashIndex:(unsigned short)arg5 fragmentbitIndex:(unsigned long long)arg6 fragmentPosition:(unsigned short)arg7 ;
-(id)init;
-(NSData *)bitString;
-(unsigned long long)hashFunctionIndex;
-(id)initWith:(id)arg1 privacyParameter:(double)arg2 hashFunctionCount:(unsigned long long)arg3 bitCount:(unsigned long long)arg4 ;
-(unsigned long long)bitIndex;
@end

