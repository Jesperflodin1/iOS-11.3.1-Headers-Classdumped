/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSUReadChannel.h>

@protocol TSUReadChannel;
@class TSUZipEntry, TSUZipArchive, NSString;

@interface TSUZipReadChannel : NSObject <TSUReadChannel> {

	TSUZipEntry* _entry;
	TSUZipArchive* _archive;
	BOOL _validateCRC;
	id<TSUReadChannel> _archiveReadChannel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isValid; 
-(void)dealloc;
-(BOOL)isValid;
-(void)close;
-(void)handleFailureWithHandler:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)setLowWater:(unsigned long long)arg1 ;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(id)initWithEntry:(id)arg1 archive:(id)arg2 validateCRC:(BOOL)arg3 ;
-(void)readWithFileHeaderLength:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)readFileHeaderFromData:(id)arg1 headerLength:(unsigned long long*)arg2 ;
-(BOOL)processData:(id)arg1 CRC:(unsigned*)arg2 isDone:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
@end
