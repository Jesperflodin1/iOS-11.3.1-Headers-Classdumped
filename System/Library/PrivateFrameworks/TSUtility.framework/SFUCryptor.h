/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@interface SFUCryptor : NSObject {

	int mOperation;
	CCCryptorRef mCryptor;
	unsigned long long mBlockSize;
	BOOL mFinished;
	char* mDecryptionInputBuffer;
	char* mOutputBuffer;
	char* mOutputBufferPos;
	unsigned long long mOutputBufferAvailable;

}
-(void)dealloc;
-(id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char*)arg3 ivLength:(unsigned long long)arg4 ;
-(BOOL)cryptDataFromStream:(id)arg1 toBuffer:(char*)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)cryptDataFromBuffer:(const char*)arg1 length:(unsigned long long)arg2 toStream:(id)arg3 finished:(BOOL)arg4 crc32:(unsigned*)arg5 error:(id*)arg6 ;
-(id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char*)arg3 ivLength:(unsigned long long)arg4 usePKCS7Padding:(BOOL)arg5 ;
-(BOOL)cryptDataFromBuffer:(const char*)arg1 length:(unsigned long long)arg2 toStream:(id)arg3 finished:(BOOL)arg4 error:(id*)arg5 ;
@end

