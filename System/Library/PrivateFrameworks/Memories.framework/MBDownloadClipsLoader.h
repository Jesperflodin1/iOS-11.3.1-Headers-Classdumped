/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/MBClipsLoader.h>
#import <libobjc.A.dylib/PHAssetRepresentationDownloadObserver.h>

@class NSSet, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MBDownloadClipsLoader : MBClipsLoader <PHAssetRepresentationDownloadObserver> {

	NSSet* _assetURLs;
	NSSet* _insertedAssetURLs;
	NSMutableDictionary* _identifierURLsToClipsMap;
	NSRecursiveLock* _updateLock;

}

@property (nonatomic,retain) NSSet * assetURLs;                                 //@synthesize assetURLs=_assetURLs - In the implementation block
@property (nonatomic,retain) NSSet * insertedAssetURLs;                         //@synthesize insertedAssetURLs=_insertedAssetURLs - In the implementation block
@property (retain) NSMutableDictionary * identifierURLsToClipsMap;              //@synthesize identifierURLsToClipsMap=_identifierURLsToClipsMap - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * updateLock;                      //@synthesize updateLock=_updateLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)load;
-(void)downloadStateOfAssetRepresentationDidChange:(id)arg1 previousState:(unsigned long long)arg2 currentState:(unsigned long long)arg3 ;
-(void)setInsertedAssetURLs:(NSSet *)arg1 ;
-(void)setIdentifierURLsToClipsMap:(NSMutableDictionary *)arg1 ;
-(NSSet *)assetURLs;
-(NSRecursiveLock *)updateLock;
-(id)fetchAssetURLs;
-(void)setAssetURLs:(NSSet *)arg1 ;
-(NSSet *)insertedAssetURLs;
-(NSMutableDictionary *)identifierURLsToClipsMap;
-(void)loadClipsFromURLs:(id)arg1 ;
-(void)setUpdateLock:(NSRecursiveLock *)arg1 ;
@end

