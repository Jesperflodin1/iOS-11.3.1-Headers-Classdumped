/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPCryptoInfoInternal.h>
#import <iWorkImport/TSPMutableCryptoInfo.h>

@class NSString, SFUCryptoKey, NSArray;

@interface TSPMutableCryptoInfoInternal : TSPCryptoInfoInternal <TSPMutableCryptoInfo>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SFUCryptoKey * cryptoKey; 
@property (nonatomic,readonly) unsigned long long preferredBlockSize; 
@property (nonatomic,readonly) NSArray * blockInfos; 
@property (nonatomic,readonly) BOOL hasDecodedLength; 
@property (nonatomic,readonly) unsigned long long decodedLength; 
-(id)initWithCryptoKey:(id)arg1 preferredBlockSize:(unsigned long long)arg2 blockInfos:(id)arg3 decodedLength:(unsigned long long)arg4 ;
-(void)addBlockInfo:(id)arg1 ;
-(void)incrementDecodedLengthBy:(unsigned long long)arg1 ;
-(void)reset;
@end

