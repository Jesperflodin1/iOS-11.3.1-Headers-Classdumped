/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSData;

@interface SFUDataRepresentation : NSObject {

	BOOL mHasHash;
	unsigned mHash;
	BOOL mHasSha1Hash;
	NSData* mSha1Hash;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(BOOL)isReadable;
-(long long)encodedLength;
-(id)inputStream;
-(id)bufferedInputStream;
-(long long)dataLength;
-(CGDataProviderRef)cgDataProvider;
-(unsigned long long)readIntoData:(id)arg1 ;
-(xmlTextReaderRef)xmlReaderForGzippedDataWithInputStream:(id*)arg1 ;
-(unsigned)uint32Hash;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(BOOL)isEncrypted;
-(id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1 ;
-(xmlDoc*)xmlDocument;
-(xmlTextReaderRef)xmlReader;
-(xmlTextReaderRef)xmlReaderForGzippedData;
-(id)sha1Hash;
@end

