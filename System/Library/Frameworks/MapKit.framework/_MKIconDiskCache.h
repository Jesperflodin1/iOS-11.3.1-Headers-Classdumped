/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@class NSURL, NSLock, NSMutableArray, NSString;

@interface _MKIconDiskCache : NSObject <GEOResourceManifestTileGroupObserver> {

	NSURL* _directoryURL;
	NSLock* _lock;
	NSMutableArray* _inProgressUUIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3 ;
-(void)dealloc;
-(id)imageForStyleAttributes:(id)arg1 size:(unsigned long long)arg2 scale:(double)arg3 isCarplay:(BOOL)arg4 drawingBlock:(/*^block*/id)arg5 ;
-(id)initWithDirectoryURL:(id)arg1 ;
-(void)_updateVersionsInfo;
-(id)imageForStyleAttributes:(id)arg1 size:(unsigned long long)arg2 scale:(double)arg3 drawingBlock:(/*^block*/id)arg4 ;
@end
