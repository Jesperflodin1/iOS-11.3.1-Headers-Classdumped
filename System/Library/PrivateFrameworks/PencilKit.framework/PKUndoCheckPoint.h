/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PencilKit/PencilKit-Structs.h>
@class NSOrderedSet, NSUUID, NSString;

@interface PKUndoCheckPoint : NSObject {

	CGImageRef _image;
	NSOrderedSet* _renderedStrokes;
	NSUUID* _uuid;
	NSString* _cacheFilename;
	BOOL _isEraseAllCheckPoint;

}

@property (assign,nonatomic) CGImageRef image;                              //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                               //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * cacheFilename;                    //@synthesize cacheFilename=_cacheFilename - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * renderedStrokes;              //@synthesize renderedStrokes=_renderedStrokes - In the implementation block
@property (nonatomic,readonly) BOOL isEraseAllCheckPoint;                   //@synthesize isEraseAllCheckPoint=_isEraseAllCheckPoint - In the implementation block
+(unsigned long long)cacheSize;
+(void)deleteAllCacheFiles;
+(id)cacheDirectory;
-(void)setImage:(CGImageRef)arg1 ;
-(void)dealloc;
-(CGImageRef)image;
-(NSUUID *)uuid;
-(void)reloadImage;
-(NSOrderedSet *)renderedStrokes;
-(id)initWithImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 renderedStrokes:(id)arg3 ;
-(NSString *)cacheFilename;
-(void)writeToDiskAndFreeMemory;
-(BOOL)isEraseAllCheckPoint;
-(CGImageRef)retainedImage;
-(void)flushFromMemoryIfPossible;
-(BOOL)isInMemory;
-(BOOL)ensureCacheDirectoryExists;
@end

