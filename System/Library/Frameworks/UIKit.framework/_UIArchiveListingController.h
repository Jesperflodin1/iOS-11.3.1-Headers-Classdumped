/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UILibArchiveStreamingReader, NSString;

@interface _UIArchiveListingController : NSObject {

	_UILibArchiveStreamingReader* _archiveReader;
	BOOL _isValidArchive;
	BOOL _excludeDotFilesFromResults;
	NSString* _archivePath;
	long long _appleDoubleIdentificationType;

}

@property (nonatomic,readonly) NSString * archivePath;                             //@synthesize archivePath=_archivePath - In the implementation block
@property (assign,nonatomic) long long appleDoubleIdentificationType;              //@synthesize appleDoubleIdentificationType=_appleDoubleIdentificationType - In the implementation block
@property (assign,nonatomic) BOOL excludeDotFilesFromResults;                      //@synthesize excludeDotFilesFromResults=_excludeDotFilesFromResults - In the implementation block
-(void)dealloc;
-(id)initWithArchivePath:(id)arg1 ;
-(void)setExcludeDotFilesFromResults:(BOOL)arg1 ;
-(BOOL)enumerateLogicalItemsWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)determineIsReadableArchive;
-(long long)appleDoubleIdentificationType;
-(void)setAppleDoubleIdentificationType:(long long)arg1 ;
-(BOOL)_shouldVisitItem:(id)arg1 ;
-(BOOL)excludeDotFilesFromResults;
-(NSString *)archivePath;
@end

