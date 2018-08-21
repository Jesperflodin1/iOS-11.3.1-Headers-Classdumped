/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPStreamDataStorage.h>

@protocol TSPCryptoInfo;
@class NSString, TSPFilePackage;

@interface TSPFilePackageDataStorage : TSPStreamDataStorage {

	NSString* _path;
	id<TSPCryptoInfo> _decryptionInfo;
	TSPFilePackage* _package;
	unsigned long long _encodedLength;
	unsigned _CRC;
	struct {
		unsigned didCalculateIsReadable : 1;
		unsigned didCalculateEncodedLength : 1;
		unsigned didCalculateCRC : 1;
		unsigned isReadable : 1;
		unsigned isMissingData : 1;
	}  _flags;

}
-(id)decryptionInfo;
-(BOOL)linkOrCopyToURL:(id)arg1 encryptionInfo:(id)arg2 canLink:(BOOL)arg3 ;
-(void)didInitializeFromDocumentURL:(id)arg1 ;
-(id)initWithPath:(id)arg1 package:(id)arg2 decryptionInfo:(id)arg3 ;
-(id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(DataInfo*)arg3 preferredFilename:(id)arg4 ;
-(id)streamReadChannel;
-(id)init;
-(unsigned long long)length;
-(void)resetFlags;
-(id)packageLocator;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(BOOL)isReadable;
-(unsigned char)packageIdentifier;
-(unsigned long long)encodedLength;
-(BOOL)isInPackage:(id)arg1 ;
-(BOOL)isMissingData;
-(void)setIsMissingData:(BOOL)arg1 ;
-(unsigned)CRC;
@end

