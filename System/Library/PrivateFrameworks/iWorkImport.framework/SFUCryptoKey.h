/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPMutableCryptoInfo.h>

@class NSData, NSString, NSArray;

@interface SFUCryptoKey : NSObject <TSPMutableCryptoInfo> {

	unsigned mIterationCount;
	char* mKey;
	unsigned long long mKeyLength;
	NSData* mSaltData;
	NSString* _passphrase;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SFUCryptoKey * cryptoKey; 
@property (nonatomic,readonly) unsigned long long preferredBlockSize; 
@property (nonatomic,readonly) NSArray * blockInfos; 
@property (nonatomic,readonly) BOOL hasDecodedLength; 
@property (nonatomic,readonly) unsigned long long decodedLength; 
@property (nonatomic,readonly) NSString * passphrase;                              //@synthesize passphrase=_passphrase - In the implementation block
-(SFUCryptoKey *)cryptoKey;
-(id)mutableCryptoInfoCopy;
-(BOOL)hasDecodedLength;
-(NSArray *)blockInfos;
-(void)addBlockInfo:(id)arg1 ;
-(void)incrementDecodedLengthBy:(unsigned long long)arg1 ;
-(int)keyType;
-(void)dealloc;
-(void)reset;
-(unsigned long long)preferredBlockSize;
-(const char*)keyData;
-(unsigned long long)keyLength;
-(NSString *)passphrase;
-(id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned)arg2 ;
-(id)initAes128KeyFromPassphrase:(id)arg1 withIterationCountAndSaltDataFromCryptoKey:(id)arg2 ;
-(id)initAes128KeyFromPassphrase:(const char*)arg1 length:(unsigned)arg2 iterationCount:(unsigned)arg3 saltData:(id)arg4 ;
-(id)initAes128KeyFromPassphrase:(const char*)arg1 length:(unsigned)arg2 iterationCount:(unsigned)arg3 ;
-(id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned)arg2 saltData:(id)arg3 ;
-(id)initAes128Key:(const char*)arg1 length:(unsigned)arg2 iterationCount:(unsigned)arg3 ;
-(unsigned)iterationCount;
-(id)saltData;
-(unsigned long long)decodedLength;
@end
