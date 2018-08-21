/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLThumbPersistenceManager.h>

@class NSString;

@interface PLThumbFileManager : NSObject <PLThumbPersistenceManager> {

	BOOL _readOnly;
	int _shortSideLengthInPixels;
	NSString* _path;
	NSString* _filename;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * path;                     //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL isReadOnly; 
+(void)deleteAllEntriesWithIdentifier:(id)arg1 basePath:(id)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)path;
-(id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8 ;
-(void)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5 ;
-(BOOL)validateData:(id)arg1 withToken:(id)arg2 ;
-(CGImageRef)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 decodeSession:(void*)arg3 ;
-(id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1 ;
-(void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2 ;
-(BOOL)usesThumbIdentifiers;
-(id)_debugDescription;
-(id)thumbnailPathForThumbIdentifier:(id)arg1 ;
-(id)initWithBaseDirectory:(id)arg1 filename:(id)arg2 shortSideLengthInPixels:(int)arg3 readOnly:(BOOL)arg4 ;
-(BOOL)_writeImage:(id)arg1 forThumbIdentifier:(id)arg2 ;
-(BOOL)isReadOnly;
@end

