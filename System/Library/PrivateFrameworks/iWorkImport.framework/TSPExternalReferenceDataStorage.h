/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPFileDataStorage.h>

@class NSURL, NSData, TSPObjectContext;

@interface TSPExternalReferenceDataStorage : TSPFileDataStorage {

	NSURL* _URL;
	NSData* _bookmarkData;
	BOOL _isReachable;
	TSPObjectContext* _context;

}
-(BOOL)archiveInfoMessage:(DataInfo*)arg1 archiver:(id)arg2 packageWriter:(id)arg3 ;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isReadable;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(id)initWithBookmarkData:(id)arg1 context:(id)arg2 ;
-(id)bookmarkDataForArchiver:(id)arg1 ;
@end

