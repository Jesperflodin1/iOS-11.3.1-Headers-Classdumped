/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSUZipArchive.h>

@class TSUZipArchive, TSUZipEntry;

@interface TSUContainedZipArchive : TSUZipArchive {

	TSUZipArchive* _zipArchive;
	TSUZipEntry* _entry;

}
+(id)zipArchiveFromEntry:(id)arg1 zipArchive:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)isValid;
-(id)initWithEntry:(id)arg1 zipArchive:(id)arg2 options:(unsigned long long)arg3 ;
-(id)readChannelForEntry:(id)arg1 validateCRC:(BOOL)arg2 ;
-(id)streamReadChannelForEntry:(id)arg1 validateCRC:(BOOL)arg2 ;
-(unsigned long long)archiveLength;
-(id)newArchiveReadChannel;
@end
