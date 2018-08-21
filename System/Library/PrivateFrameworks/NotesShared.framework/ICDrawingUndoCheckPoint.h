/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@class NSOrderedSet, NSUUID, NSString;

@interface ICDrawingUndoCheckPoint : NSObject {

	CGImageRef _image;
	NSOrderedSet* _renderedCommands;
	NSUUID* _uuid;
	NSString* _cacheFilename;
	BOOL _isEraseAllCheckPoint;

}

@property (assign,nonatomic) CGImageRef image;                               //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * cacheFilename;                     //@synthesize cacheFilename=_cacheFilename - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * renderedCommands;              //@synthesize renderedCommands=_renderedCommands - In the implementation block
@property (nonatomic,readonly) BOOL isEraseAllCheckPoint;                    //@synthesize isEraseAllCheckPoint=_isEraseAllCheckPoint - In the implementation block
+(unsigned long long)cacheSize;
+(void)deleteAllCacheFiles;
+(id)cacheDirectory;
-(void)setImage:(CGImageRef)arg1 ;
-(void)dealloc;
-(CGImageRef)image;
-(NSUUID *)uuid;
-(void)reloadImage;
-(NSString *)cacheFilename;
-(id)initWithImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 renderedCommands:(id)arg3 ;
-(NSOrderedSet *)renderedCommands;
-(void)writeToDiskAndFreeMemory;
-(BOOL)isEraseAllCheckPoint;
-(CGImageRef)retainedImage;
-(void)flushFromMemoryIfPossible;
-(BOOL)isInMemory;
-(BOOL)ensureCacheDirectoryExists;
@end

