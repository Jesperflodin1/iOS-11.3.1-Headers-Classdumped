/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSSet;

@interface FCSyncFileCoordinatedDictionary : NSObject {

	NSURL* _fileURL;
	NSSet* _allowedClasses;

}

@property (nonatomic,copy,readonly) NSURL * fileURL;                     //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allowedClasses;              //@synthesize allowedClasses=_allowedClasses - In the implementation block
-(id)init;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 allowedClasses:(id)arg2 ;
-(BOOL)writeWithAccessor:(/*^block*/id)arg1 ;
-(NSSet *)allowedClasses;
-(id)read;
@end

